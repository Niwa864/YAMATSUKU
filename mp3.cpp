//////////////////////////////////////////////////////////////////
// 
// ファイル名：mp3.cpp
// ＜解説＞HEWに向けてのゲームプログラム（音楽部）です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/03/06 プログラム制作開始。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "mp3.h"

//=======================
//定数・マクロ定義
//=======================
#define SE_BEAM			"mp3/Beam.mp3"
#define SE_SELECT		"mp3/Select.mp3"
#define SE_TRUEE		"mp3/True.mp3"
#define SE_FALSEE		"mp3/False.mp3"
#define SE_TITLE2		"mp3/TitleSE2.mp3"
#define BGM_SUBTITLE	"mp3/SubTitleBGM.mp3"
#define BGM_GAME		"mp3/GameBGM.mp3"
//#define RESULT_BGM	""

//=======================
//プロトタイプ宣言
//=======================

//=======================
//グローバル宣言
//=======================
int  g_nMP3No[7];

void InitMp3(void)
{
	//----- オープン -----
	g_nMP3No[0] = OPENMP3(SE_BEAM);
	g_nMP3No[1] = OPENMP3(SE_SELECT);
	g_nMP3No[2] = OPENMP3(SE_TRUEE);
	g_nMP3No[3] = OPENMP3(SE_FALSEE);
	g_nMP3No[4] = OPENMP3(SE_TITLE2);
	g_nMP3No[5] = OPENMP3(BGM_GAME);
	g_nMP3No[6] = OPENMP3(BGM_SUBTITLE);

	//----- 確認 -----
	for(int i = 0; i < 7; i ++)
	{
		if (g_nMP3No[i] == 0)
		{
			printf("MP3ファイルの再生準備に失敗しました。\n");
			exit(0);
		}
	}
}
	
void PlayMp3(int nFileName, bool bLoop, bool bPorS)
{
	switch(bPorS)
	{
		case false:	//プレイ
			PLAYMP3(g_nMP3No[nFileName], bLoop);
			break;
		case true:	//ストップ
			STOPMP3(g_nMP3No[nFileName]);
			break;
	}
}

void UninitMp3(void)
{
	//----- クローズ -----
	for(int i = 0; i < 7; i ++)
	{
		CLOSEMIDI(g_nMP3No[i]);
	}
}