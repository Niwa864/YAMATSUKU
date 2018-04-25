//////////////////////////////////////////////////////////////////
// 
// ファイル名：Score.cpp
// ＜解説＞HEWに向けてのゲームプログラム（スコア部）です。
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
#include "Score.h"
#include "PlayerPoint.h"
#include "Beam.h"
#include "main.h"
#include "GameCnt.h"

//=======================
//定数・マクロ定義
//=======================

//=======================
//プロトタイプ宣言
//=======================

//=======================
//グローバル宣言
//=======================
SCORE g_Score; //ビーム情報

void InitScore(void)
{
		g_Score.fPosX = 0.0f;
		g_Score.fPosY = 0.0f;
		g_Score.fDisX = 0.0f;
		g_Score.fDisY = 0.0f;

		for(int i = 0; i < 3; i ++)
		{
			g_Score.nType[i] = 0;
		}

		g_Score.nScore = 0;
		g_Score.bVal = false;
}	

void JudgeScore(void)
{
	BEAM aBeam;
	PLAYERPOINT aPoint;
	PLAYERLINE aLine;

	aBeam = GetBeam();
	aPoint = GetPoint();
	aLine = GetLine();

	int nGameCnt = SetGameCnt();

	//----- 距離計算 -----
	g_Score.fDisX = aPoint.fPosX - aPoint.fPosFirstX; //X軸距離
	g_Score.fDisY = (aPoint.fPosBaseY - aBeam.fPosY) * 2; //Y軸距離

	//----- スコアタイプ分岐 -----
	if((aBeam.fPosY > aPoint.fPosFirstY) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 1;
		g_Score.nScore += 1000; //確定スコア
	}
	else if((g_Score.fDisX < g_Score.fDisY) && (g_Score.fDisY - g_Score.fDisX > 6) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 2;
		g_Score.nScore += 1000; //確定スコア
		g_Score.nScore += 1000; //美しさボーナス
	}
	else if((g_Score.fDisX < g_Score.fDisY) && (g_Score.fDisY - g_Score.fDisX < 4) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 3;
		g_Score.nScore += 1000; //確定スコア
		g_Score.nScore += 1000; //美しさボーナス
	}
	else if((g_Score.fDisX > g_Score.fDisY) && (g_Score.fDisX - g_Score.fDisY > 6) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 3;
		g_Score.nScore += 1000; //確定スコア
		g_Score.nScore += 1000; //美しさボーナス
	}
	else if(g_Score.bVal == true)
	{
		g_Score.nType[nGameCnt - 1] = 4;
		g_Score.nScore += 1000; //確定スコア
		g_Score.nScore += 4000; //美しさボーナス
	}
	else
	{
		if(!nGameCnt > 2)
			{
				g_Score.nType[nGameCnt] = 0;
			}
	}
	g_Score.bVal = false;
}

SCORE GetScore(void)
{
	return g_Score;
}

void CollisionFlg(void)
{
	g_Score.bVal = true;
}