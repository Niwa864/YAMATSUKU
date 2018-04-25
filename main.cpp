//////////////////////////////////////////////////////////////////
// 「山」
// ファイル名：main.cpp
// ＜解説＞HEWに向けてのゲームプログラム（メイン部）です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/01/29 プログラム制作開始。
// 2016/02/16 大まかな流れ/タイトルを追加。
// 2016/02/17 プレイヤーポイントを追加。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "main.h"
#include "InputDot.h"
#include "Title.h"
#include "PlayerPoint.h"
#include "Beam.h"
#include "Enemy.h"
#include "Result.h"
#include "Score.h"
#include "HowToUse.h"
#include "SubTitle.h"
#include "mp3.h"

//=======================
//定数・マクロ定義
//=======================
#define FRAMERATE (1000 / 60)

//=======================
//プロトタイプ宣言
//=======================
#ifdef _DEBUG
void DispFPS(void);
#endif

void Update(void);	//更新
void Draw(void);	//描画
void Uninit(void);	//終了
MODE GetMode(void);

//=======================
//グローバル宣言
//=======================
int g_nFPS;					//FPS
MODE g_mode = MODE_TITLE;	//ゲームモード


void main(void)
{
//------ 変数宣言 ------
	int nExecLastTime;		//最終実行時間
	int nCurrentTime;		//現在時間
	int nFPSLastTime;		//FPS描画最終時間
	int	nFrameCount;		//フレームカウンタ
	
	//------ 前処理 ------
	CLS(WHITE, BLACK);		//画面再描画
	CUROFF();				//カーソルOFF
	timeBeginPeriod(1);		//分解能を設定(1ミリ秒)
	CAPTION("山");			//キャプション

	//------ 初期化処理 ------
	nExecLastTime = nFPSLastTime = timeGetTime();
	nFrameCount = 0;
	Init();
	InitMp3();
	InitTitle();

	//------ ゲーム処理 ------
	while(!INP(PK_ESC))
	{
		nCurrentTime = timeGetTime();

		if((nCurrentTime - nFPSLastTime) >= 500)
		{
			g_nFPS = nFrameCount * 1000 / (nCurrentTime - nFPSLastTime);
			nFPSLastTime = nCurrentTime;
			nFrameCount = 0;
		}

		if((nCurrentTime - nExecLastTime) >= FRAMERATE)
		{
			nExecLastTime = nCurrentTime;	//最終実行時間を更新
			//------ 更新処理 ------
			Update();

			//------ 描画処理 ------
			Draw();

#ifdef _DEBUG
			//DispFPS();
#endif

			nFrameCount ++;
		}
	}

	//------ 後処理 ------
	Uninit();

	timeEndPeriod(1);		//分解能を戻す
	CURON();				//カーソルON
}

#ifdef _DEBUG
void DispFPS(void)
{
	COLOR(WHITE);

	LOCATE(1, 1);
	printf("FPS:%d", g_nFPS);
}
#endif

void Init(void)
{
	InitPoint();
	InitBeam();
	InitEnemy();
	InitResult();
}

void Update(void)
{
	switch(g_mode)
	{
	case MODE_TITLE:	UpdateTitle();
						break;
	case MODE_SUBTITLE:	UpdateSubTitle();
						break;
	case MODE_HTU:		UpdateHTU();
						break;
	case MODE_GAME:		UpdatePoint();
						UpdateBeam();
						UpdateEnemy();
						break;
	case MODE_RESULT:	UpdateResult();
						break;
	}
}

void Draw(void)
{
	switch(g_mode)
	{
	case MODE_TITLE:	DrawTitle();
						break;
	case MODE_SUBTITLE: break;
	case MODE_HTU:		break;
	case MODE_GAME:		DrawPoint();
						DrawBeam();
						DrawEnemy();
						break;
	case MODE_RESULT:	DrawResult();
						break;
	}
}

void Uninit(void)
{
	UninitTitle();
	UninitPoint();
	UninitBeam();
	UninitEnemy();
	UninitResult();
	UninitMp3();
}

void SetMode(MODE mode)
{
	g_mode = mode;
}

MODE GetMode(void)
{
	return g_mode;
}