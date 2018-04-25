//////////////////////////////////////////////////////////////////
// �u�R�v
// �t�@�C�����FTitle.cpp
// �������HEW�Ɍ����ẴQ�[���v���O����(�^�C�g����)�ł��B
//
// ����ҁFCP11S902-23-NIWA
//
// �`�`�`�X�V�����`�`�`
// 2016/02/15 �v���O��������J�n�B
// 2016/02/17 �A�j���[�V�����ǉ��B
//
//////////////////////////////////////////////////////////////////

//=======================
//�C���N���[�h��
//=======================
#include "InputDot.h"
#include "Title.h"
#include "main.h"
#include "HowToUse.h"
#include "SubTitle.h"
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

void InitTitle(void)
{
	int nAnimeType = 4; //1...���A2...�сA3...�΁A4...�R�@�l�����������肢���܂��B
	int ndotX = 0;
	int ndotY = 0;

	CUROFF();
	rewind(stdin);
	getchar();

	WAIT(300);
	HuDotW(32, 13);
	WAIT(300);
	RinDotW(52, 13);
	WAIT(300);
	KaDotW(32, 24);
	WAIT(300);
	ZanDotW(52, 24);
	WAIT(300);

	switch(nAnimeType)
		{
		case 1: ndotX = 32;
				ndotY = 13;
				RinDot7(52, 13);
				KaDot7(32, 24);
				ZanDot7(52, 24);
				WAIT(100);
				RinDot8(52, 13);
				KaDot8(32, 24);
				ZanDot8(52, 24);
				WAIT(100);
				TitleDotB(42, 3);
				TitleDotB(32, 24);
				TitleDotB(52, 24);
				WAIT(100);

				for(int i = 0; i < 6; i ++, ndotX += 2, ndotY ++) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX - 2, ndotY - 1);
					HuDotC(ndotX, ndotY);
				}
				break;
		case 2: ndotX = 52;
				ndotY = 13;
				HuDot7(32, 13);
				KaDot7(32, 24);
				ZanDot7(52, 24);
				WAIT(100);
				HuDot8(32, 13);
				KaDot8(32, 24);
				ZanDot8(52, 24);
				WAIT(100);
				TitleDotB(32, 13);
				TitleDotB(22, 14);
				TitleDotB(52, 24);
				WAIT(100);
				for(int i = 0; i < 6; i ++, ndotX -= 2, ndotY ++) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX + 2, ndotY - 1);
					RinDotC(ndotX, ndotY);
				}
				break;
		case 3: ndotX = 32;
				ndotY = 24;
				HuDot7(32, 13);
				RinDot7(52, 13);
				ZanDot7(52, 24);
				WAIT(100);
				HuDot8(32, 13);
				RinDot8(52, 13);
				ZanDot8(52, 24);
				WAIT(100);
				TitleDotB(32, 13);
				TitleDotB(52, 13);
				TitleDotB(52, 24);
				WAIT(100);
				for(int i = 0; i < 6; i ++, ndotX += 2, ndotY --) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX - 2, ndotY + 1);
					KaDotC(ndotX, ndotY);
				}
				break;
		case 4: ndotX = 52;
				ndotY = 24;
				HuDot7(32, 13);
				RinDot7(52, 13);
				KaDot7(32, 24);
				WAIT(100);
				HuDot8(32, 13);
				RinDot8(52, 13);
				KaDot8(32, 24);
				WAIT(100);
				TitleDotB(32, 13);
				TitleDotB(52, 13);
				TitleDotB(32, 24);
				WAIT(100);
				for(int i = 0; i < 6; i ++, ndotX -= 2, ndotY --) //(32, 8)
				{
					WAIT(100);
					TitleDotB(ndotX + 2, ndotY + 1);
					ZanDotC(ndotX, ndotY);
				}
				break;
		}
	PlayMp3(S_TITLE2, 0, 0);
}

void UpdateTitle(void)
{
	if(INP(PK_ENTER))
	{
		CLS(WHITE, BLACK);
		InitSubTitle();
		SetMode(MODE_SUBTITLE);
		PlayMp3(B_GAME, 1, 0);
	}
}

void DrawTitle(void)
{

}

void UninitTitle(void)
{

}