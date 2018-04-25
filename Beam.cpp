//////////////////////////////////////////////////////////////////
// 
// ファイル名：Beam.cpp
// ＜解説＞HEWに向けてのゲームプログラム（ビーム部）です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/02/19 プログラム制作開始。
// 2016/02/21 当たり判定と描画を追加。
// 2016/02/22 ビームの座標を全て保存するよう変更。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "Beam.h"
#include "PlayerPoint.h"
#include "InputDot.h"
#include "main.h"
#include "GameCnt.h"
#include "mp3.h"

//=======================
//定数・マクロ定義
//=======================

//=======================
//プロトタイプ宣言
//=======================

//=======================
//グローバル宣言
//=======================
BEAM g_Beam; //ビーム情報

void SetBeam(float fPosX, float fPosY)
{
		g_Beam.fPosX = fPosX;
		g_Beam.fPosY = fPosY;
		g_Beam.fPosOldX = fPosX;
		g_Beam.fPosOldY = fPosY;
		g_Beam.bExist = true;
}
void InitBeam(void)
{
		g_Beam.fPosX = 0.0f;
		g_Beam.fPosY = 0.0f;
		g_Beam.fPosOldX = 0.0f;
		g_Beam.fPosOldY = 0.0f;
		g_Beam.bExist = false;	
		
		for(int i = 0; i < LINE_MAX; i ++)
		{
			g_Beam.afPosX[i] = 0.0f;
			g_Beam.afPosY[i] = 0.0f;
		}
		g_Beam.pPosSaveX = g_Beam.afPosX;	//アドレス初期位置を保存(X座標)
		g_Beam.pPosSaveY = g_Beam.afPosY;	//						(Y座標)
		g_Beam.pMPosSaveX = g_Beam.afPosX;	//アドレス途中位置を初期化(X座標)
		g_Beam.pMPosSaveY = g_Beam.afPosY;	//			 			  (Y座標)
		g_Beam.nPosCnt = 0;
}	
void UpdateBeam(void)
{
	//----- 未使用チェック -----
	if(!g_Beam.bExist) return;

		//----- 前回位置の退避 -----
		g_Beam.fPosOldX = g_Beam.fPosX;
		g_Beam.fPosOldY = g_Beam.fPosY;

		//----- 現在位置を更新 -----
		g_Beam.fPosY -= 1.0f;

		//----- 弾の補正 -----
		if(g_Beam.fPosY < LIMIT_UP)
		{
			g_Beam.bExist = false;
			
			X();
			WAIT(400);

			GetGameCnt();
		}
}
void DrawBeam(void)
{
	int i;

	//----- DotW繰り返し -----
	if(!g_Beam.bExist) return;

	g_Beam.pPosSaveX = g_Beam.afPosX;
	g_Beam.pPosSaveY = g_Beam.afPosY;

	for(i = 0; i < g_Beam.nPosCnt; i ++ ,g_Beam.pPosSaveX ++, g_Beam.pPosSaveY ++)
	{
 		DotW((int)*g_Beam.pPosSaveX, (int)*g_Beam.pPosSaveY);
	}

	//----- 中間位置アドレス再入 -----
	g_Beam.pPosSaveX = g_Beam.pMPosSaveX;
	g_Beam.pPosSaveY = g_Beam.pMPosSaveY;

	//----- 座標保存 -----
	*g_Beam.pPosSaveX = g_Beam.fPosX;	  
	*g_Beam.pPosSaveY = g_Beam.fPosY;

	//----- 後処理 -----
	g_Beam.pMPosSaveX ++;
	g_Beam.pMPosSaveY ++;
	g_Beam.nPosCnt ++;
}
void UninitBeam(void)
{

}
BEAM GetBeam(void)
{
	return g_Beam;
}
