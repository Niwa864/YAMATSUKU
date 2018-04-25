#ifndef __PLAYERPOINT_H__
#define __PLAYERPOINT_H__

//=======================
//�f�t�@�C����
//=======================
#define LIMIT_LEFT	( 4.0f)
#define LIMIT_RIGHT	(96.0f)
#define LIMIT_DOWN  (48.0f)
#define LIMIT_UP    ( 4.0f)
#define LINE_MAX	(200)

//========================
//�\���̐錾
//========================
typedef struct
{
	float fPosX;		//���݈ʒu(X���W)
	float fPosY;		//�@�@�@�@(Y���W)
	float fPosOldX;		//�O��ʒu(X���W)
	float fPosOldY;		//�@�@�@�@(Y���W)
	float fPosFirstX;	//���񉺓��͎��ʒu(X���W)
	float fPosFirstY;	//				�@(Y���W)
	float fPosBaseY;	//���(Y���W)
	bool  bMove;		//�����Ă��邩�ǂ���
	bool  bKey;			//�L�[���͂��ꂽ���ǂ���
	int   nLorR;		//0...�����A1...���A2...�E �g�p��2���ڂ̂�
	int   nFlag;		//1...1���ځA2...2����...�A3...3����
} PLAYERPOINT;

typedef struct
{
	float fPosX[LINE_MAX];	//�ʉߍ��W������E�������p(X���W)
	float fPosY[LINE_MAX];	//							(Y���W)
	float *pPosSaveX;	//�A�h���X�ۑ��p(X���W)
	float *pPosSaveY;	//				(Y���W)
	float *pMPosSaveX;  //�A�h���X���ԕۑ��p(X���W)
	float *pMPosSaveY;	//                  (Y���W)
	int nPosCnt;		//�ۑ����J�E���^
} PLAYERLINE;			//��X���o�Ŏg����������Ȃ��̂őS�Ă̍��W���ꉞ�ۑ�

//========================
//�v���g�^�C�v�錾
//========================
void InitPoint(void);		//�v���C���[�̏�����
void UpdatePoint(void);		//			�@�X�V
void DrawPoint(void);		//			�@�`��
void UninitPoint(void);		//			�@�I��

PLAYERPOINT GetPoint(void);	//�v���C���[��񋤗L
PLAYERLINE GetLine(void);	//����񋤗L


#endif