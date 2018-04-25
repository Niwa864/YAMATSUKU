//////////////////////////////////////////////////////////////////
// ファイル名：SubTitle.cpp
// ＜解説＞HEWに向けてのゲームプログラム(サブタイトル部)です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/03/04 プログラム制作開始。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "SubTitle.h"
#include "InputDot.h"
#include "main.h"
#include "HowToUse.h"
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
bool g_bSorE = 0;

void InitSubTitle(void)
{
	PlayMp3(B_SUBTITLE, 0, 1);

	//----- 上線 -----
	for(int i = 1; i <= 7; i ++)
	{
		DotW(i, 12);
		WAIT(10);
	}
	for(int i = 11; i >= 9; i --)
	{
		DotW(7, i);
		WAIT(10);
	}
	for(int i = 8; i <= 10; i ++)
	{
		DotW(i, 9);
		WAIT(10);
	}
	DotW(10, 8);
	WAIT(10);
	for(int i = 11; i <= 19; i ++)
	{
		DotW(i, 8);
		WAIT(10);
	}
	DotW(19, 9);
	WAIT(10);
	for(int i = 20; i <= 79; i ++)
	{
		DotW(i, 9);
		WAIT(10);
	}
	DotW(79, 10);
	WAIT(10);
	for(int i = 80; i <= 93; i ++)
	{
		DotW(i, 10);
		WAIT(10);
	}
	for(int i = 11; i <= 12; i ++)
	{
		DotW(93, i);
		WAIT(10);
	}
	for(int i = 94; i <= 100; i ++)
	{
		DotW(i, 12);
		WAIT(10);
	}

	//----- 下線 -----
	for(int i = 1; i <= 7; i ++)
	{
		DotW(i, 15);
		WAIT(10);
	}
	DotW(7, 16);
	WAIT(10);
	for(int i = 8; i <= 10; i ++)
	{
		DotW(i, 16);
		WAIT(10);
	}
	for(int i = 17; i <= 24; i ++)
	{
		DotW(10, i);
		WAIT(10);
	}
	for(int i = 11; i <= 19; i ++)
	{
		DotW(i, 24);
		WAIT(10);
	}
	for(int i = 23; i >= 16; i --)
	{
		DotW(19, i);
		WAIT(10);
	}
	for(int i = 20; i <= 21; i ++)
	{
		DotW(i, 16);
		WAIT(10);
	}
	for(int i = 17; i <= 18; i ++)
	{
		DotW(21, i);
		WAIT(10);
	}
	for(int i = 22; i <= 30; i ++)
	{
		DotW(i, 18);
		WAIT(10);
	}
	for(int i = 17; i >= 15; i --)
	{
		DotW(30, i);
		WAIT(10);
	}

	PlayMp3(S_BEAM, 0, 0);
	Ya2Dot();
	WAIT(50);
	Ya1Dot();
	WAIT(50);

	for(int i = 31; i <= 41; i ++)
	{
		DotW(i, 15);
		WAIT(10);
	}
	for(int i = 16; i <= 17; i ++)
	{
		DotW(40, i);
		WAIT(10);
	}
	for(int i = 17; i <= 19; i ++)
	{
		DotW(39, i);
		WAIT(10);
	}
	for(int i = 38; i >= 34; i --)
	{
		DotW(i, 19);
		WAIT(10);
	}
	for(int i = 20; i <= 24; i ++)
	{
		DotW(34, i);
		WAIT(10);
	}
	for(int i = 35; i <= 51; i ++)
	{
		DotW(i, 24);
		WAIT(10);
	}
	for(int i = 23; i >= 19; i --)
	{
		DotW(51, i);
		WAIT(10);
	}
	for(int i = 50; i >= 49; i --)
	{
		DotW(i, 19);
		WAIT(10);
	}
	DotW(49, 18);
	WAIT(30);
	for(int i = 18; i >= 16; i --)
	{
		DotW(50, i);
		WAIT(10);
	}
	for(int i = 16; i >= 14; i --)
	{
		DotW(51, i);
		WAIT(10);
	}

	PlayMp3(S_BEAM, 0, 0);
	Ma2Dot();
	WAIT(50);
	Ma1Dot();
	WAIT(50);

	for(int i = 52; i <= 62; i ++)
	{
		DotW(i, 15);
		WAIT(10);
	}
	for(int i = 16; i <= 24; i ++)
	{
		DotW(62, i);
		WAIT(10);
	}
	for(int i = 63; i <= 72; i ++)
	{
		DotW(i, 24);
		WAIT(10);
	}
	for(int i = 23; i >= 18; i --)
	{
		DotW(72, i);
		WAIT(10);
	}

	PlayMp3(S_BEAM, 0, 0);
	Tu2Dot();
	WAIT(50);
	Tu1Dot();
	WAIT(50);

	for(int i = 73; i <= 79; i ++)
	{
		DotW(i, 18);
		WAIT(10);
	}
	for(int i = 17; i >= 16; i --)
	{
		DotW(79, i);
		WAIT(10);
	}
	for(int i = 80; i <= 85; i ++)
	{
		DotW(i, 16);
		WAIT(10);
	}
	for(int i = 17; i <= 24; i ++)
	{
		DotW(85, i);
		WAIT(10);
	}
	for(int i = 86; i <= 93; i ++)
	{
		DotW(i, 24);
		WAIT(10);
	}
	for(int i = 23; i >= 15; i --)
	{
		DotW(93, i);
		WAIT(10);
	}

	PlayMp3(S_BEAM, 0, 0);
	Ku2Dot();
	WAIT(50);
	Ku1Dot();
	WAIT(50);

	for(int i = 94; i <= 100; i ++)
	{
		DotW(i, 15);
		WAIT(10);
	}

	GTKDot();

}
void UpdateSubTitle(void)
{

	if(!g_bSorE)
	{
		Start1Dot();
		WAIT(80);
	}
	else
	{
		End1Dot();
		WAIT(80);
	}
	if(INP(PK_UP))
	{
		g_bSorE = 0;
		PlayMp3(S_SELECT, 0, 0);
	}
	if(INP(PK_DOWN))
	{
		g_bSorE = 1;
		PlayMp3(S_SELECT, 0, 0);
	}
	if(!g_bSorE)
	{
		Start2Dot();
		WAIT(40);
	}
	else
	{
		End2Dot();
		WAIT(40);
	}
	if(INP(PK_ENTER))
	{
		if(!g_bSorE)
		{
			PlayMp3(S_TRUEE, 0, 0);
			WAIT(100);
			CLS(WHITE, BLACK);
			InitHTU();
			SetMode(MODE_HTU);
			INPCLEAR();
		}
		else
		{
			PlayMp3(S_FALSEE, 0, 0);
			WAIT(100);
			exit(0);
		}
	}
}

void DrawSubTitle(void)
{

}

void UninitSubTitle(void)
{

}