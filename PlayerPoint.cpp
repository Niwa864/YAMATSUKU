//////////////////////////////////////////////////////////////////
// 
// ファイル名：PlayerPoint.cpp
// ＜解説＞HEWに向けてのゲームプログラム（プレイヤー部）です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/02/17 プログラム制作開始。
// 2016/02/19 キー入力を追加。
// 2016/02/20 線引きを追加。
// 2016/02/22 線引きの座標を全て保存するよう変更。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "PlayerPoint.h"
#include "InputDot.h"
#include "CScreen.h"
#include "Beam.h"
#include "mp3.h"

//=======================
//デファイン部
//=======================

//=======================
//プロトタイプ宣言
//=======================

//=======================
//グローバル宣言
//=======================
PLAYERPOINT g_point;	//プレイヤー情報
PLAYERLINE g_line;		//ライン情報
bool gCntFlg;

void InitPoint(void)
{
	//----- g_pointの初期化 -----
	g_point.fPosX	   = 50.0f;
	g_point.fPosY	   = 40.0f;
	g_point.fPosOldX   = 0.0f;
	g_point.fPosOldY   = 0.0f;
	g_point.fPosFirstX = 0.0f;
	g_point.fPosFirstY = 0.0f;
	g_point.bMove	   = true;
	g_point.bKey	   = false;
	g_point.nLorR	   = 0;
	g_point.nFlag	   = 1;
	
	//----- g_lineの初期化 -----
	for(int i = 0; i < LINE_MAX; i ++)
	{
		g_line.fPosX[i] = 0.0f;
		g_line.fPosY[i] = 0.0f;
	}
	g_line.pPosSaveX = g_line.fPosX;	//アドレス初期位置を保存(X座標)
	g_line.pPosSaveY = g_line.fPosY;	//						(Y座標)
	g_line.pMPosSaveX = g_line.fPosX;	//アドレス途中位置を初期化(X座標)
	g_line.pMPosSaveY = g_line.fPosY;	//			 			  (Y座標)
	g_line.nPosCnt = 0;

	gCntFlg = false;
}

void UpdatePoint(void)
{
	float fCenterPosX = 0.0f;	//中央値

	//----- 現在座標の退避 -----
	g_point.fPosOldX = g_point.fPosX;
	g_point.fPosOldY = g_point.fPosY;

	//----- キー入力 -----
	switch(g_point.nFlag)
	{
	case 1: if(INP(PK_RIGHT))
			{//右移動
				g_point.fPosX += 2.0f;
				g_point.bMove = true;
			}
			else if(INP(PK_LEFT))
			{//左移動
				g_point.fPosX -= 2.0f;
				g_point.bMove = true;
			}
			else if(INP(PK_UP))
			{//上移動
				g_point.fPosY -= 1.0f;
				g_point.bMove = true;
			}
			else if(INP(PK_DOWN))
			{//下移動
				g_point.fPosFirstX = g_point.fPosX; //決定座標を保存(X座標)
				g_point.fPosFirstY = g_point.fPosY; //				(Y座標)
				g_point.fPosY += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 2;
			}
			break;

	case 2: if(INP(PK_RIGHT))
			{//右移動
				g_point.fPosX += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 3;
				g_point.nLorR = 2;
				g_point.fPosBaseY = g_point.fPosY;
			}
			else if(INP(PK_LEFT))
			{//左移動
				g_point.fPosX -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 3;
				g_point.nLorR = 1;
				g_point.fPosBaseY = g_point.fPosY;

			}
			else if(INP(PK_DOWN))
			{//下移動
				g_point.fPosY += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			break;

	case 3: if(INP(PK_RIGHT) && g_point.nLorR == 2)
			{//右移動
				g_point.fPosX += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			else if(INP(PK_LEFT) && g_point.nLorR == 1)
			{//左移動
				g_point.fPosX -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			else if(INP(PK_UP))
			{//上移動
				g_point.fPosY -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 4;
			}
			break;
	case 4: if(g_point.fPosFirstY + 2 > g_point.fPosY && gCntFlg == false)
			{//上移動上限でビーム
				if(g_point.fPosFirstX <= g_point.fPosX)
				{
					fCenterPosX = g_point.fPosX - g_point.fPosFirstX;
					fCenterPosX = (int)fCenterPosX / 2 + g_point.fPosFirstX;
				}
				else
				{
					fCenterPosX = g_point.fPosFirstX - g_point.fPosX;
					fCenterPosX = (int)fCenterPosX / 2 + g_point.fPosX;
				}

				SetBeam(fCenterPosX, g_point.fPosBaseY);
				gCntFlg = true;
				INPCLEAR();
				g_point.nFlag = 5;
				break;
			}
		
			if(INP(PK_UP))
			{//上移動
				g_point.fPosY -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			break;
	}

	//------ 座標の補正 ------
	if(g_point.fPosX < LIMIT_LEFT)
		g_point.fPosX = LIMIT_LEFT;		//左端
	if(g_point.fPosX > LIMIT_RIGHT)
		g_point.fPosX = LIMIT_RIGHT;	//右端
	if(g_point.fPosY > LIMIT_DOWN)
		g_point.fPosY = LIMIT_DOWN;		//下端
	if(g_point.fPosY < LIMIT_UP)
		g_point.fPosY = LIMIT_UP;		//上端

	if(g_point.bKey)
	{
		//----- 中間位置アドレス再入 -----
		g_line.pPosSaveX = g_line.pMPosSaveX;
		g_line.pPosSaveY = g_line.pMPosSaveY;

		//----- 座標保存 -----
		*g_line.pPosSaveX = g_point.fPosX;	  
		*g_line.pPosSaveY = g_point.fPosY;

		//----- 後処理 -----
		g_line.pMPosSaveX ++;
		g_line.pMPosSaveY ++;
		g_line.nPosCnt ++;
	}
}


void DrawPoint(void)
{
	//----- 動いていない場合 -----
	if(!g_point.bMove) return; //動いていなければ戻る

	//----- 動いた場合 -----
	PointB((int)g_point.fPosOldX - 2, (int)g_point.fPosOldY - 1); //前回位置のpointを消去

	//----- DotW繰り返し -----
	if(g_point.bKey)
	{
		g_line.pPosSaveX = g_line.fPosX;
		g_line.pPosSaveY = g_line.fPosY;

		for(int i = 0; i < g_line.nPosCnt; i ++ ,g_line.pPosSaveX ++, g_line.pPosSaveY ++)
		{
			PlayMp3(S_BEAM, 0, 0);
			DotW((int)*g_line.pPosSaveX, (int)*g_line.pPosSaveY);
		}
	}

	Point((int)g_point.fPosX - 2, (int)g_point.fPosY - 1);

	g_point.bMove = false;
	g_point.bKey = false;

}

void UninitPoint(void)
{

}

PLAYERPOINT GetPoint(void)
{
	return g_point;
}

PLAYERLINE GetLine(void)
{
	return g_line;
}