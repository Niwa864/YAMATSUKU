//////////////////////////////////////////////////////////////////
// ファイル名：Result.cpp
// ＜解説＞HEWに向けてのゲームプログラム(リザルト部)です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/02/24 プログラム制作開始。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "InputDot.h"
#include "Result.h"
#include "Score.h"
#include "main.h"
#include "GameCnt.h"
#include "mp3.h"
#include "PlayerPoint.h"
#include "Beam.h"
#include "Enemy.h"

//=======================
//定数・マクロ定義
//=======================

//=======================
//プロトタイプ宣言
//=======================

//=======================
//グローバル宣言
//=======================
bool gCnt;

void InitResult(void)
{
	gCnt = false;
}
void UpdateResult(void)
{
	if(INP(PK_ENTER))
	{
		CLS(WHITE, BLACK);
		SetMode(MODE_TITLE);
		INPCLEAR();
	}
}

void DrawResult(void)
{
	if(gCnt) return;
	SCORE aScore;

	aScore = GetScore();
	int nGameCnt = SetGameCnt();

	CLS(WHITE, BLACK);
	WAIT(100);

	ResultTitle1();
	WAIT(100);
	ResultTitle2();
	WAIT(100);
	ResultTitle3();

	for(int i = 0; i < 3; i ++)
	{
		TypeDotCase(aScore.nType[i], i + 1);
	}

	ScoreDotCase(aScore.nScore);

	gCnt = true;

	InitScore();
	Init();
	RorT();
	CLS(WHITE, BLACK);
}

void UninitResult(void)
{

}

void RorT(void)
{
	bool bRorTFlag = false;
	bool bFlag = true;
	
	INPCLEAR();
	RorT1Dot();

	do
	{
		if(INP(PK_LEFT))
		{
			PlayMp3(S_SELECT, 0, 0);
			WAIT(100);
			RorT1Dot();
			bRorTFlag = false;
		}
		else if(INP(PK_RIGHT))
		{
			PlayMp3(S_SELECT, 0, 0);
			WAIT(100);
			RorT2Dot();
			bRorTFlag = true;
		}
		else if(INP(PK_ENTER) || INP(PK_SP))
		{
			if(bRorTFlag == 0)
			{
				PlayMp3(S_TRUEE, 0, 0);
				SetMode(MODE_GAME);
			}
			else
			{
				InitPoint();
				InitBeam();
				InitEnemy();
				InitResult();
				PlayMp3(S_FALSEE, 0, 0);
				SetMode(MODE_TITLE);
			}
			bFlag = false;
		}
	}
	while(bFlag);
}