//=======================
//インクルード部
//=======================
#include "CScreen.h"
#include "Enemy.h"
#include "PlayerPoint.h"
#include "InputDot.h"
#include "Beam.h"
#include "main.h"
#include "time.h"
#include "Score.h"
#include "GameCnt.h"

//=======================
//デファイン部
//=======================

//=======================
//プロトタイプ宣言
//=======================
bool CheckCollisionBeam(void);

//=======================
//グローバル宣言
//=======================
ENEMYPOINT g_enemy;	//敵情報

void InitEnemy(void)
{
    srand((unsigned) time(NULL));

	g_enemy.fPosX	   = rand() % 80 + 10;
	g_enemy.fPosY	   = 2.0f;
	g_enemy.fPosOldX   = 0.0f;
	g_enemy.fPosOldY   = 0.0f;
	g_enemy.bExist	   = true;
}

void UpdateEnemy(void) 
{

	//----- 現在座標の退避 -----
	g_enemy.fPosOldX = g_enemy.fPosX;
	g_enemy.fPosOldY = g_enemy.fPosY;

	//----- 移動量 -----
	g_enemy.fPosY += 0.1f;

	//----- 当たり判定 -----
	if(CheckCollisionBeam())
	{
		WAIT(1000);			//プレゼン用
		CollisionFlg();		//衝突フラグを立てる
		GetGameCnt();
	}

	//----- 座標の補正 -----
	if(g_enemy.fPosX < LIMIT_LEFT)
		g_enemy.fPosX = LIMIT_LEFT;		//左端
	if(g_enemy.fPosX > LIMIT_RIGHT)
		g_enemy.fPosX = LIMIT_RIGHT;	//右端
	if(g_enemy.fPosY > LIMIT_DOWN)
	{
		g_enemy.fPosY = LIMIT_DOWN;		//下端

		X();
		WAIT(400);

		GetGameCnt();
	}
	if(g_enemy.fPosY < LIMIT_UP)
		g_enemy.fPosY = LIMIT_UP;		//上端

}


void DrawEnemy(void)
{
	//----- 使われていない場合 -----
	if(!g_enemy.bExist) return; //使われていなければ戻る

	//----- 動いた場合 -----
	PointB((int)g_enemy.fPosOldX - 2, (int)g_enemy.fPosOldY - 1); //前回位置のpointを消去

	Point((int)g_enemy.fPosX - 2, (int)g_enemy.fPosY - 1);

}

void UninitEnemy(void)
{

}

bool CheckCollisionBeam(void)
{
	float a, b, r1, r2;
	BEAM aBeam;

	aBeam = GetBeam();

	//----- 当たり判定 ------
	//バウンディングサークル　円の当たり判定
	a = aBeam.fPosX - g_enemy.fPosX;
	b = aBeam.fPosY - g_enemy.fPosY;
	r1 = 1.0f; //敵
	r2 = 1.0f; //弾

	if((r1 + r2) * (r1 + r2) > a * a + b * b) //敵半径+弾半径の二乗 > 敵から弾までの距離の二乗　...三平方の定理
	{//当たった場合
		
		DotW((int)aBeam.fPosX, (int)aBeam.fPosY + 1);
		DotW((int)aBeam.fPosX, (int)aBeam.fPosY);
		aBeam.bExist = false;

		return true;
	}

	return false;
}
