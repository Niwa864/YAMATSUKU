//////////////////////////////////////////////////////////////////
// 
// �t�@�C�����FPlayerPoint.cpp
// �������HEW�Ɍ����ẴQ�[���v���O�����i�v���C���[���j�ł��B
//
// ����ҁFCP11S902-23-NIWA
//
// �`�`�`�X�V�����`�`�`
// 2016/02/17 �v���O��������J�n�B
// 2016/02/19 �L�[���͂�ǉ��B
// 2016/02/20 ��������ǉ��B
// 2016/02/22 �������̍��W��S�ĕۑ�����悤�ύX�B
//
//////////////////////////////////////////////////////////////////

//=======================
//�C���N���[�h��
//=======================
#include "PlayerPoint.h"
#include "InputDot.h"
#include "CScreen.h"
#include "Beam.h"
#include "mp3.h"

//=======================
//�f�t�@�C����
//=======================

//=======================
//�v���g�^�C�v�錾
//=======================

//=======================
//�O���[�o���錾
//=======================
PLAYERPOINT g_point;	//�v���C���[���
PLAYERLINE g_line;		//���C�����
bool gCntFlg;

void InitPoint(void)
{
	//----- g_point�̏����� -----
	g_point.fPosX	   = 50.0f;
	g_point.fPosY	   = 40.0f;
	g_point.fPosOldX   = 0.0f;
	g_point.fPosOldY   = 0.0f;
	g_point.fPosFirstX = 0.0f;
	g_point.fPosFirstY = 0.0f;
	g_point.bMove	   = true;
	g_point.bKey	   = false;
	g_point.nLorR	   = 0;
	g_point.nFlag	   = 1;
	
	//----- g_line�̏����� -----
	for(int i = 0; i < LINE_MAX; i ++)
	{
		g_line.fPosX[i] = 0.0f;
		g_line.fPosY[i] = 0.0f;
	}
	g_line.pPosSaveX = g_line.fPosX;	//�A�h���X�����ʒu��ۑ�(X���W)
	g_line.pPosSaveY = g_line.fPosY;	//						(Y���W)
	g_line.pMPosSaveX = g_line.fPosX;	//�A�h���X�r���ʒu��������(X���W)
	g_line.pMPosSaveY = g_line.fPosY;	//			 			  (Y���W)
	g_line.nPosCnt = 0;

	gCntFlg = false;
}

void UpdatePoint(void)
{
	float fCenterPosX = 0.0f;	//�����l

	//----- ���ݍ��W�̑ޔ� -----
	g_point.fPosOldX = g_point.fPosX;
	g_point.fPosOldY = g_point.fPosY;

	//----- �L�[���� -----
	switch(g_point.nFlag)
	{
	case 1: if(INP(PK_RIGHT))
			{//�E�ړ�
				g_point.fPosX += 2.0f;
				g_point.bMove = true;
			}
			else if(INP(PK_LEFT))
			{//���ړ�
				g_point.fPosX -= 2.0f;
				g_point.bMove = true;
			}
			else if(INP(PK_UP))
			{//��ړ�
				g_point.fPosY -= 1.0f;
				g_point.bMove = true;
			}
			else if(INP(PK_DOWN))
			{//���ړ�
				g_point.fPosFirstX = g_point.fPosX; //������W��ۑ�(X���W)
				g_point.fPosFirstY = g_point.fPosY; //				(Y���W)
				g_point.fPosY += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 2;
			}
			break;

	case 2: if(INP(PK_RIGHT))
			{//�E�ړ�
				g_point.fPosX += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 3;
				g_point.nLorR = 2;
				g_point.fPosBaseY = g_point.fPosY;
			}
			else if(INP(PK_LEFT))
			{//���ړ�
				g_point.fPosX -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 3;
				g_point.nLorR = 1;
				g_point.fPosBaseY = g_point.fPosY;

			}
			else if(INP(PK_DOWN))
			{//���ړ�
				g_point.fPosY += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			break;

	case 3: if(INP(PK_RIGHT) && g_point.nLorR == 2)
			{//�E�ړ�
				g_point.fPosX += 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			else if(INP(PK_LEFT) && g_point.nLorR == 1)
			{//���ړ�
				g_point.fPosX -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			else if(INP(PK_UP))
			{//��ړ�
				g_point.fPosY -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
				g_point.nFlag = 4;
			}
			break;
	case 4: if(g_point.fPosFirstY + 2 > g_point.fPosY && gCntFlg == false)
			{//��ړ�����Ńr�[��
				if(g_point.fPosFirstX <= g_point.fPosX)
				{
					fCenterPosX = g_point.fPosX - g_point.fPosFirstX;
					fCenterPosX = (int)fCenterPosX / 2 + g_point.fPosFirstX;
				}
				else
				{
					fCenterPosX = g_point.fPosFirstX - g_point.fPosX;
					fCenterPosX = (int)fCenterPosX / 2 + g_point.fPosX;
				}

				SetBeam(fCenterPosX, g_point.fPosBaseY);
				gCntFlg = true;
				INPCLEAR();
				g_point.nFlag = 5;
				break;
			}
		
			if(INP(PK_UP))
			{//��ړ�
				g_point.fPosY -= 1.0f;
				g_point.bMove = true;
				g_point.bKey = true;
			}
			break;
	}

	//------ ���W�̕␳ ------
	if(g_point.fPosX < LIMIT_LEFT)
		g_point.fPosX = LIMIT_LEFT;		//���[
	if(g_point.fPosX > LIMIT_RIGHT)
		g_point.fPosX = LIMIT_RIGHT;	//�E�[
	if(g_point.fPosY > LIMIT_DOWN)
		g_point.fPosY = LIMIT_DOWN;		//���[
	if(g_point.fPosY < LIMIT_UP)
		g_point.fPosY = LIMIT_UP;		//��[

	if(g_point.bKey)
	{
		//----- ���Ԉʒu�A�h���X�ē� -----
		g_line.pPosSaveX = g_line.pMPosSaveX;
		g_line.pPosSaveY = g_line.pMPosSaveY;

		//----- ���W�ۑ� -----
		*g_line.pPosSaveX = g_point.fPosX;	  
		*g_line.pPosSaveY = g_point.fPosY;

		//----- �㏈�� -----
		g_line.pMPosSaveX ++;
		g_line.pMPosSaveY ++;
		g_line.nPosCnt ++;
	}
}


void DrawPoint(void)
{
	//----- �����Ă��Ȃ��ꍇ -----
	if(!g_point.bMove) return; //�����Ă��Ȃ���Ζ߂�

	//----- �������ꍇ -----
	PointB((int)g_point.fPosOldX - 2, (int)g_point.fPosOldY - 1); //�O��ʒu��point������

	//----- DotW�J��Ԃ� -----
	if(g_point.bKey)
	{
		g_line.pPosSaveX = g_line.fPosX;
		g_line.pPosSaveY = g_line.fPosY;

		for(int i = 0; i < g_line.nPosCnt; i ++ ,g_line.pPosSaveX ++, g_line.pPosSaveY ++)
		{
			PlayMp3(S_BEAM, 0, 0);
			DotW((int)*g_line.pPosSaveX, (int)*g_line.pPosSaveY);
		}
	}

	Point((int)g_point.fPosX - 2, (int)g_point.fPosY - 1);

	g_point.bMove = false;
	g_point.bKey = false;

}

void UninitPoint(void)
{

}

PLAYERPOINT GetPoint(void)
{
	return g_point;
}

PLAYERLINE GetLine(void)
{
	return g_line;
}