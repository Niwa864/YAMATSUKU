#ifndef __BEAM_H__
#define __BEAM_H__

#include "CScreen.h"

//=======================
//定数・マクロ定義
//=======================
#define BEAM_MAX (50)

//========================
//構造体宣言
//========================
typedef struct
{
	float fPosX;			//弾の基準位置X座標
	float fPosY;			//            Y座標
	float fPosOldX;			//弾の過去位置X座標
	float fPosOldY;			//			  Y座標
	float afPosX[BEAM_MAX];	//通過座標を入れる(X座標)
	float afPosY[BEAM_MAX];	//				  (Y座標)
	float *pPosSaveX;		//アドレス保存用(X座標)
	float *pPosSaveY;		//				(Y座標)
	float *pMPosSaveX;		//アドレス中間保存用(X座標)
	float *pMPosSaveY;		//                  (Y座標)
	bool  bExist;			//使用しているかどうか
	int nPosCnt;			//保存毎カウンタ
} BEAM;

//========================
//プロトタイプ宣言
//========================
void InitBeam(void);	//弾の初期化
void UpdateBeam(void);	//    更新
void DrawBeam(void);	//    描画
void UninitBeam(void);	//	　終了

BEAM GetBeam(void);	//ビーム情報共有

void SetBeam(float, float);	 //セット

#endif //__BEAM_H__