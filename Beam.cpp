//////////////////////////////////////////////////////////////////
// 
// �t�@�C�����FBeam.cpp
// �������HEW�Ɍ����ẴQ�[���v���O�����i�r�[�����j�ł��B
//
// ����ҁFCP11S902-23-NIWA
//
// �`�`�`�X�V�����`�`�`
// 2016/02/19 �v���O��������J�n�B
// 2016/02/21 �����蔻��ƕ`���ǉ��B
// 2016/02/22 �r�[���̍��W��S�ĕۑ�����悤�ύX�B
//
//////////////////////////////////////////////////////////////////

//=======================
//�C���N���[�h��
//=======================
#include "Beam.h"
#include "PlayerPoint.h"
#include "InputDot.h"
#include "main.h"
#include "GameCnt.h"
#include "mp3.h"

//=======================
//�萔�E�}�N����`
//=======================

//=======================
//�v���g�^�C�v�錾
//=======================

//=======================
//�O���[�o���錾
//=======================
BEAM g_Beam; //�r�[�����

void SetBeam(float fPosX, float fPosY)
{
		g_Beam.fPosX = fPosX;
		g_Beam.fPosY = fPosY;
		g_Beam.fPosOldX = fPosX;
		g_Beam.fPosOldY = fPosY;
		g_Beam.bExist = true;
}
void InitBeam(void)
{
		g_Beam.fPosX = 0.0f;
		g_Beam.fPosY = 0.0f;
		g_Beam.fPosOldX = 0.0f;
		g_Beam.fPosOldY = 0.0f;
		g_Beam.bExist = false;	
		
		for(int i = 0; i < LINE_MAX; i ++)
		{
			g_Beam.afPosX[i] = 0.0f;
			g_Beam.afPosY[i] = 0.0f;
		}
		g_Beam.pPosSaveX = g_Beam.afPosX;	//�A�h���X�����ʒu��ۑ�(X���W)
		g_Beam.pPosSaveY = g_Beam.afPosY;	//						(Y���W)
		g_Beam.pMPosSaveX = g_Beam.afPosX;	//�A�h���X�r���ʒu��������(X���W)
		g_Beam.pMPosSaveY = g_Beam.afPosY;	//			 			  (Y���W)
		g_Beam.nPosCnt = 0;
}	
void UpdateBeam(void)
{
	//----- ���g�p�`�F�b�N -----
	if(!g_Beam.bExist) return;

		//----- �O��ʒu�̑ޔ� -----
		g_Beam.fPosOldX = g_Beam.fPosX;
		g_Beam.fPosOldY = g_Beam.fPosY;

		//----- ���݈ʒu���X�V -----
		g_Beam.fPosY -= 1.0f;

		//----- �e�̕␳ -----
		if(g_Beam.fPosY < LIMIT_UP)
		{
			g_Beam.bExist = false;
			
			X();
			WAIT(400);

			GetGameCnt();
		}
}
void DrawBeam(void)
{
	int i;

	//----- DotW�J��Ԃ� -----
	if(!g_Beam.bExist) return;

	g_Beam.pPosSaveX = g_Beam.afPosX;
	g_Beam.pPosSaveY = g_Beam.afPosY;

	for(i = 0; i < g_Beam.nPosCnt; i ++ ,g_Beam.pPosSaveX ++, g_Beam.pPosSaveY ++)
	{
 		DotW((int)*g_Beam.pPosSaveX, (int)*g_Beam.pPosSaveY);
	}

	//----- ���Ԉʒu�A�h���X�ē� -----
	g_Beam.pPosSaveX = g_Beam.pMPosSaveX;
	g_Beam.pPosSaveY = g_Beam.pMPosSaveY;

	//----- ���W�ۑ� -----
	*g_Beam.pPosSaveX = g_Beam.fPosX;	  
	*g_Beam.pPosSaveY = g_Beam.fPosY;

	//----- �㏈�� -----
	g_Beam.pMPosSaveX ++;
	g_Beam.pMPosSaveY ++;
	g_Beam.nPosCnt ++;
}
void UninitBeam(void)
{

}
BEAM GetBeam(void)
{
	return g_Beam;
}
