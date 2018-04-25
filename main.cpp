//////////////////////////////////////////////////////////////////
// �u�R�v
// �t�@�C�����Fmain.cpp
// �������HEW�Ɍ����ẴQ�[���v���O�����i���C�����j�ł��B
//
// ����ҁFCP11S902-23-NIWA
//
// �`�`�`�X�V�����`�`�`
// 2016/01/29 �v���O��������J�n�B
// 2016/02/16 ��܂��ȗ���/�^�C�g����ǉ��B
// 2016/02/17 �v���C���[�|�C���g��ǉ��B
//
//////////////////////////////////////////////////////////////////

//=======================
//�C���N���[�h��
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
//�萔�E�}�N����`
//=======================
#define FRAMERATE (1000 / 60)

//=======================
//�v���g�^�C�v�錾
//=======================
#ifdef _DEBUG
void DispFPS(void);
#endif

void Update(void);	//�X�V
void Draw(void);	//�`��
void Uninit(void);	//�I��
MODE GetMode(void);

//=======================
//�O���[�o���錾
//=======================
int g_nFPS;					//FPS
MODE g_mode = MODE_TITLE;	//�Q�[�����[�h


void main(void)
{
//------ �ϐ��錾 ------
	int nExecLastTime;		//�ŏI���s����
	int nCurrentTime;		//���ݎ���
	int nFPSLastTime;		//FPS�`��ŏI����
	int	nFrameCount;		//�t���[���J�E���^
	
	//------ �O���� ------
	CLS(WHITE, BLACK);		//��ʍĕ`��
	CUROFF();				//�J�[�\��OFF
	timeBeginPeriod(1);		//����\��ݒ�(1�~���b)
	CAPTION("�R");			//�L���v�V����

	//------ ���������� ------
	nExecLastTime = nFPSLastTime = timeGetTime();
	nFrameCount = 0;
	Init();
	InitMp3();
	InitTitle();

	//------ �Q�[������ ------
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
			nExecLastTime = nCurrentTime;	//�ŏI���s���Ԃ��X�V
			//------ �X�V���� ------
			Update();

			//------ �`�揈�� ------
			Draw();

#ifdef _DEBUG
			//DispFPS();
#endif

			nFrameCount ++;
		}
	}

	//------ �㏈�� ------
	Uninit();

	timeEndPeriod(1);		//����\��߂�
	CURON();				//�J�[�\��ON
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