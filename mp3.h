#ifndef __MP3_H__
#define __MP3_H__

#include "CScreen.h"

//=======================
//�萔�E�}�N����`
//=======================
#define PLAY	(0)
#define STOP	(1)
#define NLOOP	(0)
#define YLOOP	(1)

#define S_BEAM		(0)	
#define S_SELECT	(1)
#define S_TRUEE		(2)
#define S_FALSEE	(3)
#define S_TITLE2	(4)
#define	B_SUBTITLE  (5)
#define	B_GAME		(6)

//========================
//�\���̐錾
//========================

//========================
//�v���g�^�C�v�錾
//========================
void InitMp3(void);				//���y�̏�����
void PlayMp3(int, bool, bool);
void UninitMp3(void);			//	�@�@�I��

#endif //__MP3_H__