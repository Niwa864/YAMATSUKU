#ifndef __SCORE_H__
#define __SCORE_H__

#include "CScreen.h"

//=======================
//定数・マクロ定義
//=======================

//========================
//構造体宣言
//========================
typedef struct
{
	float fPosX;			//スコアの基準描画X座標
	float fPosY;			//				  Y座標
	float fDisX;			//距離X軸
	float fDisY;			//　　Y軸
	int nType[3];			//山タイプ分け用 0...ミス 1...きたない　2...ほそすぎ　3...ふとすぎ　4...きれい
	int nScore;				//スコア
	bool bVal;				//当たったとき
} SCORE;

//========================
//プロトタイプ宣言
//========================
void InitScore(void);		//スコアの初期化
void JudgeScore(void);		//スコア判定
SCORE GetScore(void);		//プレイヤー情報共有
void CollisionFlg(void);	//当たり判定

#endif //__SCORE_H__