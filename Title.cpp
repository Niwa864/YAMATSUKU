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
#include "InputDot.h"
#include "Title.h"
#include "main.h"
#include "HowToUse.h"
#include "SubTitle.h"
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

void InitTitle(void)
{
	int nAnimeType = 4; //1...風、2...林、3...火、4...山　値書き換えお願いします。
	int ndotX = 0;
	int ndotY = 0;

	CUROFF();
	rewind(stdin);
	getchar();

	WAIT(300);
	HuDotW(32, 13);
	WAIT(300);
	RinDotW(52, 13);
	WAIT(300);
	KaDotW(32, 24);
	WAIT(300);
	ZanDotW(52, 24);
	WAIT(300);

	switch(nAnimeType)
		{
		case 1: ndotX = 32;
				ndotY = 13;
				RinDot7(52, 13);
				KaDot7(32, 24);
				ZanDot7(52, 24);
				WAIT(100);
				RinDot8(52, 13);
				KaDot8(32, 24);
				ZanDot8(52, 24);
				WAIT(100);
				TitleDotB(42, 3);
				TitleDotB(32, 24);
				TitleDotB(52, 24);
				WAIT(100);

				for(int i = 0; i < 6; i ++, ndotX += 2, ndotY ++) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX - 2, ndotY - 1);
					HuDotC(ndotX, ndotY);
				}
				break;
		case 2: ndotX = 52;
				ndotY = 13;
				HuDot7(32, 13);
				KaDot7(32, 24);
				ZanDot7(52, 24);
				WAIT(100);
				HuDot8(32, 13);
				KaDot8(32, 24);
				ZanDot8(52, 24);
				WAIT(100);
				TitleDotB(32, 13);
				TitleDotB(22, 14);
				TitleDotB(52, 24);
				WAIT(100);
				for(int i = 0; i < 6; i ++, ndotX -= 2, ndotY ++) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX + 2, ndotY - 1);
					RinDotC(ndotX, ndotY);
				}
				break;
		case 3: ndotX = 32;
				ndotY = 24;
				HuDot7(32, 13);
				RinDot7(52, 13);
				ZanDot7(52, 24);
				WAIT(100);
				HuDot8(32, 13);
				RinDot8(52, 13);
				ZanDot8(52, 24);
				WAIT(100);
				TitleDotB(32, 13);
				TitleDotB(52, 13);
				TitleDotB(52, 24);
				WAIT(100);
				for(int i = 0; i < 6; i ++, ndotX += 2, ndotY --) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX - 2, ndotY + 1);
					KaDotC(ndotX, ndotY);
				}
				break;
		case 4: ndotX = 52;
				ndotY = 24;
				HuDot7(32, 13);
				RinDot7(52, 13);
				KaDot7(32, 24);
				WAIT(100);
				HuDot8(32, 13);
				RinDot8(52, 13);
				KaDot8(32, 24);
				WAIT(100);
				TitleDotB(32, 13);
				TitleDotB(52, 13);
				TitleDotB(32, 24);
				WAIT(100);
				for(int i = 0; i < 6; i ++, ndotX -= 2, ndotY --) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX + 2, ndotY + 1);
					ZanDotC(ndotX, ndotY);
				}
				break;
		}
	PlayMp3(S_TITLE2, 0, 0);
}

void UpdateTitle(void)
{
	if(INP(PK_ENTER))
	{
		CLS(WHITE, BLACK);
		InitSubTitle();
		SetMode(MODE_SUBTITLE);
		PlayMp3(B_GAME, 1, 0);
	}
}

void DrawTitle(void)
{

}

void UninitTitle(void)
{

}