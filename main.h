#ifndef __MAIN_H__
#define __MAIN_H__

//=======================
//�C���N���[�h��
//=======================
#include <stdio.h>
#include "CScreen.h"

typedef enum
{
	MODE_TITLE,		//0:�^�C�g��
	MODE_SUBTITLE,  //1:�T�u�^�C�g��
	MODE_HTU,		//2:�g����
	MODE_GAME,		//3:�Q�[�����C��
	MODE_RESULT,	//4:���U���g
	MODE_MAX
} MODE;

//=======================
//�v���g�^�C�v�錾
//=======================
void SetMode(MODE);
void Init(void);	//������

#endif