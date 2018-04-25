//////////////////////////////////////////////////////////////////
// 
// �t�@�C�����FScore.cpp
// �������HEW�Ɍ����ẴQ�[���v���O�����i�X�R�A���j�ł��B
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
#include "Score.h"
#include "PlayerPoint.h"
#include "Beam.h"
#include "main.h"
#include "GameCnt.h"

//=======================
//�萔�E�}�N����`
//=======================

//=======================
//�v���g�^�C�v�錾
//=======================

//=======================
//�O���[�o���錾
//=======================
SCORE g_Score; //�r�[�����

void InitScore(void)
{
		g_Score.fPosX = 0.0f;
		g_Score.fPosY = 0.0f;
		g_Score.fDisX = 0.0f;
		g_Score.fDisY = 0.0f;

		for(int i = 0; i < 3; i ++)
		{
			g_Score.nType[i] = 0;
		}

		g_Score.nScore = 0;
		g_Score.bVal = false;
}	

void JudgeScore(void)
{
	BEAM aBeam;
	PLAYERPOINT aPoint;
	PLAYERLINE aLine;

	aBeam = GetBeam();
	aPoint = GetPoint();
	aLine = GetLine();

	int nGameCnt = SetGameCnt();

	//----- �����v�Z -----
	g_Score.fDisX = aPoint.fPosX - aPoint.fPosFirstX; //X������
	g_Score.fDisY = (aPoint.fPosBaseY - aBeam.fPosY) * 2; //Y������

	//----- �X�R�A�^�C�v���� -----
	if((aBeam.fPosY > aPoint.fPosFirstY) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 1;
		g_Score.nScore += 1000; //�m��X�R�A
	}
	else if((g_Score.fDisX < g_Score.fDisY) && (g_Score.fDisY - g_Score.fDisX > 6) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 2;
		g_Score.nScore += 1000; //�m��X�R�A
		g_Score.nScore += 1000; //�������{�[�i�X
	}
	else if((g_Score.fDisX < g_Score.fDisY) && (g_Score.fDisY - g_Score.fDisX < 4) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 3;
		g_Score.nScore += 1000; //�m��X�R�A
		g_Score.nScore += 1000; //�������{�[�i�X
	}
	else if((g_Score.fDisX > g_Score.fDisY) && (g_Score.fDisX - g_Score.fDisY > 6) && (g_Score.bVal == true))
	{
		g_Score.nType[nGameCnt - 1] = 3;
		g_Score.nScore += 1000; //�m��X�R�A
		g_Score.nScore += 1000; //�������{�[�i�X
	}
	else if(g_Score.bVal == true)
	{
		g_Score.nType[nGameCnt - 1] = 4;
		g_Score.nScore += 1000; //�m��X�R�A
		g_Score.nScore += 4000; //�������{�[�i�X
	}
	else
	{
		if(!nGameCnt > 2)
			{
				g_Score.nType[nGameCnt] = 0;
			}
	}
	g_Score.bVal = false;
}

SCORE GetScore(void)
{
	return g_Score;
}

void CollisionFlg(void)
{
	g_Score.bVal = true;
}