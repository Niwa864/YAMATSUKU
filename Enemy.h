#ifndef __ENEMY_H__
#define __ENEMY_H__

//=======================
//�f�t�@�C����
//=======================

//========================
//�\���̐錾
//========================
typedef struct
{
	float fPosX;		//���݈ʒu(X���W)
	float fPosY;		//�@�@�@�@(Y���W)
	float fPosOldX;		//�O��ʒu(X���W)
	float fPosOldY;		//�@�@�@�@(Y���W)
	bool bExist;		//�g�p���Ă��邩�ǂ���
} ENEMYPOINT;

//========================
//�v���g�^�C�v�錾
//========================
void InitEnemy(void);		//�v���C���[�̏�����
void UpdateEnemy(void);		//			�@�X�V
void DrawEnemy(void);		//			�@�`��
void UninitEnemy(void);		//			�@�I��



#endif