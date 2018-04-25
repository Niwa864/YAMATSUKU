#ifndef __MAIN_H__
#define __MAIN_H__

//=======================
//インクルード部
//=======================
#include <stdio.h>
#include "CScreen.h"

typedef enum
{
	MODE_TITLE,		//0:タイトル
	MODE_SUBTITLE,  //1:サブタイトル
	MODE_HTU,		//2:使い方
	MODE_GAME,		//3:ゲームメイン
	MODE_RESULT,	//4:リザルト
	MODE_MAX
} MODE;

//=======================
//プロトタイプ宣言
//=======================
void SetMode(MODE);
void Init(void);	//初期化

#endif