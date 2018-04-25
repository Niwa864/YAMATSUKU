#ifndef __SUBTITLE_H__
#define __SUBTITLE_H__

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
void InitSubTitle(void);		//リザルトの初期化
void UpdateSubTitle(void);		//    　　　更新
void DrawSubTitle(void);		//    　　　描画
void UninitSubTitle(void);		//	　　　　終了

#endif //__SUBTITLE_H__