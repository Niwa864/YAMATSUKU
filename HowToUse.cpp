//////////////////////////////////////////////////////////////////
// 「山」
// ファイル名：Title.cpp
// ＜解説＞HEWに向けてのゲームプログラム(タイトル部)です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/02/15 プログラム制作開始。
// 2016/02/17 アニメーション追加。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "HowToUse.h"
#include "InputDot.h"
#include "main.h"
#include "PlayerPoint.h"
#include "Beam.h"
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

void InitHTU(void)
{

	float fCenterPosX;
	PLAYERPOINT aPoint;
	PLAYERLINE  aLine;

	aPoint = GetPoint();
	aLine = GetLine();

	aPoint.fPosX = 50.0;
	aPoint.fPosY = 20.0;

	aPoint.fPosFirstX = aPoint.fPosX; //決定座標を保存(X座標)
	aPoint.fPosFirstY = aPoint.fPosY; //			  (Y座標)

	CLS(WHITE, BLACK);
	HTU3Dot();
	WAIT(100);
	HTU2Dot();
	WAIT(100);
	HTU1Dot();

	KeyGDot();
	WAIT(500);

	KeyDDot();

	for(int i = 0; i < 13; i ++)
	{
		aPoint.fPosOldX = aPoint.fPosX;	  //現在座標の退避(X座標)
		aPoint.fPosOldY = aPoint.fPosY;	  //			  (Y座標)

		aPoint.fPosY += 1.0f;

		//----- 座標保存 -----
		*aLine.pPosSaveX = aPoint.fPosX;	  
		*aLine.pPosSaveY = aPoint.fPosY;

		PointB((int)aPoint.fPosOldX - 2, (int)aPoint.fPosOldY - 1); //前回位置のpointを消去

		//----- ポインタを初期化 -----
		aLine.pPosSaveX = aLine.fPosX;
		aLine.pPosSaveY = aLine.fPosY;

		for(int j = 0; j < aLine.nPosCnt; j ++, aLine.pPosSaveX ++, aLine.pPosSaveY ++)
		{
			DotW((int)*aLine.pPosSaveX, (int)*aLine.pPosSaveY);
		}

		Point((int)aPoint.fPosX - 2, (int)aPoint.fPosY - 1);

		WAIT(70);

		//----- 後処理 -----
		aLine.pMPosSaveX ++;
		aLine.pMPosSaveY ++;
		aLine.nPosCnt ++;
	}

	aPoint.fPosBaseY = aPoint.fPosY;

	KeyRDot();

	for(int i = 0; i < 42; i ++)
	{
		aPoint.fPosOldX = aPoint.fPosX;	  //現在座標の退避(X座標)
		aPoint.fPosOldY = aPoint.fPosY;	  //			  (Y座標)

		aPoint.fPosX += 1.0f;

		//----- 座標保存 -----
		*aLine.pPosSaveX = aPoint.fPosX;	  
		*aLine.pPosSaveY = aPoint.fPosY;

		PointB((int)aPoint.fPosOldX - 2, (int)aPoint.fPosOldY - 1); //前回位置のpointを消去

		//----- ポインタを初期化 -----
		aLine.pPosSaveX = aLine.fPosX;
		aLine.pPosSaveY = aLine.fPosY;

		for(int j = 0; j < aLine.nPosCnt; j ++, aLine.pPosSaveX ++, aLine.pPosSaveY ++)
		{
			DotW((int)*aLine.pPosSaveX, (int)*aLine.pPosSaveY);
		}

		Point((int)aPoint.fPosX - 2, (int)aPoint.fPosY - 1);

		WAIT(70);

		//----- 後処理 -----
		aLine.pMPosSaveX ++;
		aLine.pMPosSaveY ++;
		aLine.nPosCnt ++;
	}

	KeyUDot();

	for(int i = 0; i < 12; i ++)
	{
		aPoint.fPosOldX = aPoint.fPosX;	  //現在座標の退避(X座標)
		aPoint.fPosOldY = aPoint.fPosY;	  //			  (Y座標)

		aPoint.fPosY -= 1.0f;
		
		//----- 座標保存 -----
		*aLine.pPosSaveX = aPoint.fPosX;	  
		*aLine.pPosSaveY = aPoint.fPosY;

		PointB((int)aPoint.fPosOldX - 2, (int)aPoint.fPosOldY - 1); //前回位置のpointを消去

		//----- ポインタを初期化 -----
		aLine.pPosSaveX = aLine.fPosX;
		aLine.pPosSaveY = aLine.fPosY;

		for(int j = 0; j < aLine.nPosCnt; j ++, aLine.pPosSaveX ++, aLine.pPosSaveY ++)
		{
			DotW((int)*aLine.pPosSaveX, (int)*aLine.pPosSaveY);
		}

		Point((int)aPoint.fPosX - 2, (int)aPoint.fPosY - 1);

		WAIT(70);

		//----- 後処理 -----
		aLine.pMPosSaveX ++;
		aLine.pMPosSaveY ++;
		aLine.nPosCnt ++;
	}

	KeyGDot();

	fCenterPosX = aPoint.fPosX - aPoint.fPosFirstX;
	fCenterPosX = (int)fCenterPosX / 2 + aPoint.fPosFirstX;

	SetBeam(fCenterPosX, aPoint.fPosBaseY);
	for(int i = 0; i < 22; i ++)
	{
		UpdateBeam();
		DrawBeam();
		WAIT(15);
	}
	Init();
}

void UpdateHTU(void)
{

	NextDot(86, 46);
	NextDot(85, 46);
	NextDot(86, 46);
	NextDot(87, 46);
	if(INP(PK_ENTER))
	{
		PlayMp3(S_TRUEE, 0, 0);
		CLS(WHITE, BLACK);
		SetMode(MODE_GAME);
	}
}

void DrawHTU(void)
{

}

void UninitHTU(void)
{

}