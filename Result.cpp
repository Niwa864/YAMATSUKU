//////////////////////////////////////////////////////////////////
// �t�@�C�����FResult.cpp
// �������HEW�Ɍ����ẴQ�[���v���O����(���U���g��)�ł��B
//
// ����ҁFCP11S902-23-NIWA
//
// �`�`�`�X�V�����`�`�`
// 2016/02/24 �v���O��������J�n�B
//
//////////////////////////////////////////////////////////////////

//=======================
//�C���N���[�h��
//=======================
#include "InputDot.h"
#include "Result.h"
#include "Score.h"
#include "main.h"
#include "GameCnt.h"
#include "mp3.h"
#include "PlayerPoint.h"
#include "Beam.h"
#include "Enemy.h"

//=======================
//�萔�E�}�N����`
//=======================

//=======================
//�v���g�^�C�v�錾
//=======================

//=======================
//�O���[�o���錾
//=======================
bool gCnt;

void InitResult(void)
{
	gCnt = false;
}
void UpdateResult(void)
{
	if(INP(PK_ENTER))
	{
		CLS(WHITE, BLACK);
		SetMode(MODE_TITLE);
		INPCLEAR();
	}
}

void DrawResult(void)
{
	if(gCnt) return;
	SCORE aScore;

	aScore = GetScore();
	int nGameCnt = SetGameCnt();

	CLS(WHITE, BLACK);
	WAIT(100);

	ResultTitle1();
	WAIT(100);
	ResultTitle2();
	WAIT(100);
	ResultTitle3();

	for(int i = 0; i < 3; i ++)
	{
		TypeDotCase(aScore.nType[i], i + 1);
	}

	ScoreDotCase(aScore.nScore);

	gCnt = true;

	InitScore();
	Init();
	RorT();
	CLS(WHITE, BLACK);
}

void UninitResult(void)
{

}

void RorT(void)
{
	bool bRorTFlag = false;
	bool bFlag = true;
	
	INPCLEAR();
	RorT1Dot();

	do
	{
		if(INP(PK_LEFT))
		{
			PlayMp3(S_SELECT, 0, 0);
			WAIT(100);
			RorT1Dot();
			bRorTFlag = false;
		}
		else if(INP(PK_RIGHT))
		{
			PlayMp3(S_SELECT, 0, 0);
			WAIT(100);
			RorT2Dot();
			bRorTFlag = true;
		}
		else if(INP(PK_ENTER) || INP(PK_SP))
		{
			if(bRorTFlag == 0)
			{
				PlayMp3(S_TRUEE, 0, 0);
				SetMode(MODE_GAME);
			}
			else
			{
				InitPoint();
				InitBeam();
				InitEnemy();
				InitResult();
				PlayMp3(S_FALSEE, 0, 0);
				SetMode(MODE_TITLE);
			}
			bFlag = false;
		}
	}
	while(bFlag);
}