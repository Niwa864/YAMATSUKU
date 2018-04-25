#ifndef __RESULT_H__
#define __RESULT_H__

#include "CScreen.h"

//=======================
//定数・マクロ定義
//=======================

//========================
//構造体宣言
//========================

//========================
//プロトタイプ宣言
//========================
void InitResult(void);		//リザルトの初期化
void UpdateResult(void);	//    　　　更新
void DrawResult(void);		//    　　　描画
void UninitResult(void);	//	　　　　終了

void RorT(void);			//リトライorタイトル

#endif //__RESULT_H__