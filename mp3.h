#ifndef __MP3_H__
#define __MP3_H__

#include "CScreen.h"

//=======================
//定数・マクロ定義
//=======================
#define PLAY	(0)
#define STOP	(1)
#define NLOOP	(0)
#define YLOOP	(1)

#define S_BEAM		(0)	
#define S_SELECT	(1)
#define S_TRUEE		(2)
#define S_FALSEE	(3)
#define S_TITLE2	(4)
#define	B_SUBTITLE  (5)
#define	B_GAME		(6)

//========================
//構造体宣言
//========================

//========================
//プロトタイプ宣言
//========================
void InitMp3(void);				//音楽の初期化
void PlayMp3(int, bool, bool);
void UninitMp3(void);			//	　　終了

#endif //__MP3_H__