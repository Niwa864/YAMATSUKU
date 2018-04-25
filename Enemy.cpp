//=======================
//�C���N���[�h��
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
//�f�t�@�C����
//=======================

//=======================
//�v���g�^�C�v�錾
//=======================
bool CheckCollisionBeam(void);

//=======================
//�O���[�o���錾
//=======================
ENEMYPOINT g_enemy;	//�G���

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

	//----- ���ݍ��W�̑ޔ� -----
	g_enemy.fPosOldX = g_enemy.fPosX;
	g_enemy.fPosOldY = g_enemy.fPosY;

	//----- �ړ��� -----
	g_enemy.fPosY += 0.1f;

	//----- �����蔻�� -----
	if(CheckCollisionBeam())
	{
		WAIT(1000);			//�v���[���p
		CollisionFlg();		//�Փ˃t���O�𗧂Ă�
		GetGameCnt();
	}

	//----- ���W�̕␳ -----
	if(g_enemy.fPosX < LIMIT_LEFT)
		g_enemy.fPosX = LIMIT_LEFT;		//���[
	if(g_enemy.fPosX > LIMIT_RIGHT)
		g_enemy.fPosX = LIMIT_RIGHT;	//�E�[
	if(g_enemy.fPosY > LIMIT_DOWN)
	{
		g_enemy.fPosY = LIMIT_DOWN;		//���[

		X();
		WAIT(400);

		GetGameCnt();
	}
	if(g_enemy.fPosY < LIMIT_UP)
		g_enemy.fPosY = LIMIT_UP;		//��[

}


void DrawEnemy(void)
{
	//----- �g���Ă��Ȃ��ꍇ -----
	if(!g_enemy.bExist) return; //�g���Ă��Ȃ���Ζ߂�

	//----- �������ꍇ -----
	PointB((int)g_enemy.fPosOldX - 2, (int)g_enemy.fPosOldY - 1); //�O��ʒu��point������

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

	//----- �����蔻�� ------
	//�o�E���f�B���O�T�[�N���@�~�̓����蔻��
	a = aBeam.fPosX - g_enemy.fPosX;
	b = aBeam.fPosY - g_enemy.fPosY;
	r1 = 1.0f; //�G
	r2 = 1.0f; //�e

	if((r1 + r2) * (r1 + r2) > a * a + b * b) //�G���a+�e���a�̓�� > �G����e�܂ł̋����̓��@...�O�����̒藝
	{//���������ꍇ
		
		DotW((int)aBeam.fPosX, (int)aBeam.fPosY + 1);
		DotW((int)aBeam.fPosX, (int)aBeam.fPosY);
		aBeam.bExist = false;

		return true;
	}

	return false;
}
