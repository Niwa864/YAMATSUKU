#ifndef __ENEMY_H__
#define __ENEMY_H__

//=======================
//デファイン部
//=======================

//========================
//構造体宣言
//========================
typedef struct
{
	float fPosX;		//現在位置(X座標)
	float fPosY;		//　　　　(Y座標)
	float fPosOldX;		//前回位置(X座標)
	float fPosOldY;		//　　　　(Y座標)
	bool bExist;		//使用しているかどうか
} ENEMYPOINT;

//========================
//プロトタイプ宣言
//========================
void InitEnemy(void);		//プレイヤーの初期化
void UpdateEnemy(void);		//			　更新
void DrawEnemy(void);		//			　描画
void UninitEnemy(void);		//			　終了



#endif