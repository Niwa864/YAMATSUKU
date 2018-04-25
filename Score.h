#ifndef __SCORE_H__
#define __SCORE_H__

#include "CScreen.h"

//=======================
//�萔�E�}�N����`
//=======================

//========================
//�\���̐錾
//========================
typedef struct
{
	float fPosX;			//�X�R�A�̊�`��X���W
	float fPosY;			//				  Y���W
	float fDisX;			//����X��
	float fDisY;			//�@�@Y��
	int nType[3];			//�R�^�C�v�����p 0...�~�X 1...�����Ȃ��@2...�ق������@3...�ӂƂ����@4...���ꂢ
	int nScore;				//�X�R�A
	bool bVal;				//���������Ƃ�
} SCORE;

//========================
//�v���g�^�C�v�錾
//========================
void InitScore(void);		//�X�R�A�̏�����
void JudgeScore(void);		//�X�R�A����
SCORE GetScore(void);		//�v���C���[��񋤗L
void CollisionFlg(void);	//�����蔻��

#endif //__SCORE_H__