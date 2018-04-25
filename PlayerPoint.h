#ifndef __PLAYERPOINT_H__
#define __PLAYERPOINT_H__

//=======================
//デファイン部
//=======================
#define LIMIT_LEFT	( 4.0f)
#define LIMIT_RIGHT	(96.0f)
#define LIMIT_DOWN  (48.0f)
#define LIMIT_UP    ( 4.0f)
#define LINE_MAX	(200)

//========================
//構造体宣言
//========================
typedef struct
{
	float fPosX;		//現在位置(X座標)
	float fPosY;		//　　　　(Y座標)
	float fPosOldX;		//前回位置(X座標)
	float fPosOldY;		//　　　　(Y座標)
	float fPosFirstX;	//初回下入力時位置(X座標)
	float fPosFirstY;	//				　(Y座標)
	float fPosBaseY;	//底辺(Y座標)
	bool  bMove;		//動いているかどうか
	bool  bKey;			//キー入力されたかどうか
	int   nLorR;		//0...無効、1...左、2...右 使用は2線目のみ
	int   nFlag;		//1...1線目、2...2線目...、3...3線目
} PLAYERPOINT;

typedef struct
{
	float fPosX[LINE_MAX];	//通過座標を入れる・初期化用(X座標)
	float fPosY[LINE_MAX];	//							(Y座標)
	float *pPosSaveX;	//アドレス保存用(X座標)
	float *pPosSaveY;	//				(Y座標)
	float *pMPosSaveX;  //アドレス中間保存用(X座標)
	float *pMPosSaveY;	//                  (Y座標)
	int nPosCnt;		//保存毎カウンタ
} PLAYERLINE;			//後々演出で使うかもしれないので全ての座標を一応保存

//========================
//プロトタイプ宣言
//========================
void InitPoint(void);		//プレイヤーの初期化
void UpdatePoint(void);		//			　更新
void DrawPoint(void);		//			　描画
void UninitPoint(void);		//			　終了

PLAYERPOINT GetPoint(void);	//プレイヤー情報共有
PLAYERLINE GetLine(void);	//線情報共有


#endif