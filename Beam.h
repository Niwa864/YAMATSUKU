#ifndef __BEAM_H__
#define __BEAM_H__

#include "CScreen.h"

//=======================
//�萔�E�}�N����`
//=======================
#define BEAM_MAX (50)

//========================
//�\���̐錾
//========================
typedef struct
{
	float fPosX;			//�e�̊�ʒuX���W
	float fPosY;			//            Y���W
	float fPosOldX;			//�e�̉ߋ��ʒuX���W
	float fPosOldY;			//			  Y���W
	float afPosX[BEAM_MAX];	//�ʉߍ��W������(X���W)
	float afPosY[BEAM_MAX];	//				  (Y���W)
	float *pPosSaveX;		//�A�h���X�ۑ��p(X���W)
	float *pPosSaveY;		//				(Y���W)
	float *pMPosSaveX;		//�A�h���X���ԕۑ��p(X���W)
	float *pMPosSaveY;		//                  (Y���W)
	bool  bExist;			//�g�p���Ă��邩�ǂ���
	int nPosCnt;			//�ۑ����J�E���^
} BEAM;

//========================
//�v���g�^�C�v�錾
//========================
void InitBeam(void);	//�e�̏�����
void UpdateBeam(void);	//    �X�V
void DrawBeam(void);	//    �`��
void UninitBeam(void);	//	�@�I��

BEAM GetBeam(void);	//�r�[����񋤗L

void SetBeam(float, float);	 //�Z�b�g

#endif //__BEAM_H__