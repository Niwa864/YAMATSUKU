//////////////////////////////////////////////////////////////////
// 
// ファイル名：InputDot.cpp
// ＜解説＞HEWに向けてのゲームプログラム（ドットインプット部）です。
//
// 制作者：CP11S902-23-NIWA
//
// ～～～更新履歴～～～
// 2016/02/12 プログラム制作開始。
// 2016/02/15 タイトルドットを追加。
// 2016/02/17 ゲームメインドットを追加。
// 2016/02/24 リザルトドットを追加。
// 2016/03/04 サブタイトルドットを追加。
//
//////////////////////////////////////////////////////////////////

//=======================
//インクルード部
//=======================
#include "main.h"
#include "InputDot.h"

//=======================
//定数・マクロ定義
//=======================

//=======================
//プロトタイプ宣言
//=======================
void ZeroDot(int, int);
void OneDot(int, int);
void TwoDot(int, int);
void ThreeDot(int, int);
void FourDot(int, int);
void FiveDot(int, int);
void SixDot(int, int);
void SevenDot(int, int);
void EightDot(int, int);
void NineDot(int, int);
void Type1Dot(int, int);
void Type2Dot(int, int);
void Type3Dot(int, int);
void Type4Dot(int, int);
void Type5Dot(int, int);

//=======================
//グローバル宣言
//=======================
//------ TitleDot ------
void HuDotW(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/huw_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void RinDotW(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/rinw_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void KaDotW(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/kaw_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void ZanDotW(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/zanw_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void HuDotC(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/huc_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void RinDotC(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/rinc_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void KaDotC(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/kac_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void ZanDotC(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/zanc_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void TitleDotB(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/black_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void HuDot8(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/hu8_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void HuDot7(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/hu7_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void RinDot8(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/rin8_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void RinDot7(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/rin7_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void KaDot8(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/ka8_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void KaDot7(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/ka7_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void ZanDot8(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/zan8_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void ZanDot7(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[9][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/zan7_9x18.txt","r");
	for(int i = 0; i < 9; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 9; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
//------ GameMainDot ------
void Point(int ndotX, int ndotY)
{
	int work;
	char szPointDot[3][5 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/point_3x5.txt","r");
	for(int i = 0; i < 3; i ++)
		fscanf(fp, "%s", szPointDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 3; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 6; x ++)
		{
			work  =  szPointDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void PointB(int ndotX, int ndotY)
{
	int work;
	char szPointDot[3][5 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/pointb_3x5.txt","r");
	for(int i = 0; i < 3; i ++)
		fscanf(fp, "%s", szPointDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 3; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 6; x ++)
		{
			work  =  szPointDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void DotW(int ndotX, int ndotY)
{
	LOCATE(ndotX, ndotY);
	BACKCOLOR(WHITE);
	printf(" ");
}
void X(void)
{
	int ndotX = 24;
	int ndotY = 8;
	int work;
	char szXDot[37][54 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/X_37x54.txt","r");
	for(int i = 0; i < 37; i ++)
		fscanf(fp, "%s", szXDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 37; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 55; x ++)
		{
			work  =  szXDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
//------ ResultDot ------
void ResultTitle1(void)
{
	int ndotX = 23;
	int ndotY = 1;
	int work;
	char szResultDot[8][58 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Result1_58x8.txt","r");
	for(int i = 0; i < 8; i ++)
		fscanf(fp, "%s", szResultDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 8; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 59; x ++)
		{
			work  =  szResultDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void ResultTitle2(void)
{
	int ndotX = 23;
	int ndotY = 1;
	int work;
	char szResultDot[8][58 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Result2_58x8.txt","r");
	for(int i = 0; i < 8; i ++)
		fscanf(fp, "%s", szResultDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 8; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 59; x ++)
		{
			work  =  szResultDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void ResultTitle3(void)
{
	int ndotX = 23;
	int ndotY = 1;
	int work;
	char szResultDot[8][58 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Result3_58x8.txt","r");
	for(int i = 0; i < 8; i ++)
		fscanf(fp, "%s", szResultDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 8; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 59; x ++)
		{
			work  =  szResultDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void ZeroDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/0_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void OneDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/1_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void TwoDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/2_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void ThreeDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/3_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void FourDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/4_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void FiveDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/5_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void SixDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/6_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void SevenDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/7_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void EightDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/8_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void NineDot(int nX,int nY)
{
	int work;
	int dotX = nX;
	int dotY = nY;
	char szBulletDot[6][8 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/9_6x8.txt","r");
	for(int i = 0; i < 6; i ++)
		fscanf(fp, "%s", szBulletDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 6; y ++)
	{
		LOCATE(dotX, dotY + y);
		for(int x = 0; x < 9; x ++)
		{
			work  =  szBulletDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(dotX + x + 1, dotY + y);
			}
		}
	}
}
void ScoreDotCase(int nScore)
{
	int nX = 0;
	int nY = 36;
	int k = 10000;
	int nScoreDigit[5];

	for(int i = 0; i < 5; i ++, k /= 10)
	{
		nScoreDigit[i] = nScore / k;
		nScore = nScore % k;
	}

	for(int i = 0; i < 5; i ++)
	{
		switch(i){
		case 0: nX = 28;
			break;
		case 1: nX = 37;
			break;
		case 2: nX = 46;
			break;
		case 3: nX = 55;
			break;
		case 4: nX = 64;
			break;
		case 5: nX = 73;
			break;
		}
		switch(nScoreDigit[i]){
		case 0: ZeroDot(nX, nY);
			break;
		case 1: OneDot(nX, nY);
			break;
		case 2: TwoDot(nX, nY);
			break;
		case 3: ThreeDot(nX, nY);
			break;
		case 4: FourDot(nX, nY);
			break;
		case 5: FiveDot(nX, nY);
			break;
		case 6: SixDot(nX, nY);
			break;
		case 7: SevenDot(nX, nY);
			break;
		case 8: EightDot(nX, nY);
			break;
		case 9: NineDot(nX, nY);
			break;
		}
	}
}
void Type1Dot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[10][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type1_30x10.txt","r");
	for(int i = 0; i < 10; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 10; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type2Dot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[10][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type2_30x10.txt","r");
	for(int i = 0; i < 10; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 10; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type3Dot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[10][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type3_30x10.txt","r");
	for(int i = 0; i < 10; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 10; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type4Dot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[10][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type4_30x10.txt","r");
	for(int i = 0; i < 10; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 10; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type5Dot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[10][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type5_30x10.txt","r");
	for(int i = 0; i < 10; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 10; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type1ValDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[5][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type1Val_30x5.txt","r");
	for(int i = 0; i < 5; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 5; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type23ValDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[5][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type2・3Val_30x5.txt","r");
	for(int i = 0; i < 5; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 5; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type4ValDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[5][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type4Val_30x5.txt","r");
	for(int i = 0; i < 5; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 5; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type5ValDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[5][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type5Val_30x5.txt","r");
	for(int i = 0; i < 5; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 5; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type1ScoDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[4][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type1Sco_30x4.txt","r");
	for(int i = 0; i < 4; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 4; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type23ScoDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[4][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type2・3Sco_30x4.txt","r");
	for(int i = 0; i < 4; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 4; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type4ScoDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[4][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type4Sco_30x4.txt","r");
	for(int i = 0; i < 4; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 4; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void Type5ScoDot(int ndotX, int ndotY)
{
	int work;
	char szTitleDot[4][30 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Type5Sco_30x4.txt","r");
	for(int i = 0; i < 4; i ++)
		fscanf(fp, "%s", szTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 4; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 30; x ++)
		{
			work  =  szTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}
}
void TypeDotCase(int nType, int nCntGame)
{
	int nX = 0;
	int nY = 0;

	switch(nCntGame){
		case 1: nX = 5;
				nY = 10;
			break;
		case 2: nX = 37;
				nY = 10;
			break;
		case 3: nX = 69;
				nY = 10;
			break;
		}

		switch(nType){
		case 0: Type5Dot(nX, nY);
				Type5ValDot(nX, nY + 12);
				Type5ScoDot(nX, nY + 19);
			break;
		case 1: Type1Dot(nX, nY);
				Type1ValDot(nX, nY + 12);
				Type1ScoDot(nX, nY + 19);
			break;
		case 2: Type2Dot(nX, nY);
				Type23ValDot(nX, nY + 12);
				Type23ScoDot(nX, nY + 19);
			break;
		case 3: Type3Dot(nX, nY);
				Type23ValDot(nX, nY + 12);
				Type23ScoDot(nX, nY + 19);
			break;
		case 4: Type4Dot(nX, nY);
				Type4ValDot(nX, nY + 12);
				Type4ScoDot(nX, nY + 19);
			break;
		}
	}
void RorT1Dot(void)
{
	int ndotX = 1;
	int ndotY = 44;
	int work;
	char szResultDot[7][100 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/RorT1_7x100.txt","r");
	for(int i = 0; i < 7; i ++)
		fscanf(fp, "%s", szResultDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 7; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 101; x ++)
		{
			work  =  szResultDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void RorT2Dot(void)
{
	int ndotX = 1;
	int ndotY = 44;
	int work;
	char szResultDot[7][100 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/RorT2_7x100.txt","r");
	for(int i = 0; i < 7; i ++)
		fscanf(fp, "%s", szResultDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 7; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 101; x ++)
		{
			work  =  szResultDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
//------ HTUDot ------
void HTU1Dot(void)
{
	int ndotX = 27;
	int ndotY = 2;
	int work;
	char szHTUDot[5][45 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/HTU1_5x45.txt","r");
	for(int i = 0; i < 5; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 5; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 46; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void HTU2Dot(void)
{
	int ndotX = 27;
	int ndotY = 2;
	int work;
	char szHTUDot[5][45 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/HTU2_5x45.txt","r");
	for(int i = 0; i < 5; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 5; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 46; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void HTU3Dot(void)
{
	int ndotX = 27;
	int ndotY = 2;
	int work;
	char szHTUDot[5][45 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/HTU3_5x45.txt","r");
	for(int i = 0; i < 5; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 5; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 46; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void KeyRDot(void)
{
	int ndotX = 6;
	int ndotY = 30;
	int work;
	char szHTUDot[19][50 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Key→_50x19.txt","r");
	for(int i = 0; i < 19; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 19; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 51; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void KeyUDot(void)
{
	int ndotX = 6;
	int ndotY = 30;
	int work;
	char szHTUDot[19][50 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Key↑_50x19.txt","r");
	for(int i = 0; i < 19; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 19; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 51; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void KeyDDot(void)
{
	int ndotX = 6;
	int ndotY = 30;
	int work;
	char szHTUDot[19][50 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Key↓_50x19.txt","r");
	for(int i = 0; i < 19; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 19; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 51; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void KeyGDot(void)
{
	int ndotX = 6;
	int ndotY = 30;
	int work;
	char szHTUDot[19][50 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/KeyG_50x19.txt","r");
	for(int i = 0; i < 19; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 19; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 51; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void NextDot(int ndotX, int ndotY)
{
	int work;
	char szHTUDot[3][11 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/HowToUse→3x11.txt","r");
	for(int i = 0; i < 3; i ++)
		fscanf(fp, "%s", szHTUDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 3; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 12; x ++)
		{
			work  =  szHTUDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
//----- SubTitleDot -----
void Ya1Dot(void)
{
	int ndotX = 9;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][20 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Ya1_13x20.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 21; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Ya2Dot(void)
{
	int ndotX = 9;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][20 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Ya2_13x20.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 21; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Ma1Dot(void)
{
	int ndotX = 31;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][20 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Ma1_13x20.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 21; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Ma2Dot(void)
{
	int ndotX = 31;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][20 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Ma2_13x20.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 21; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Tu1Dot(void)
{
	int ndotX = 53;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Tu1_13x18.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Tu2Dot(void)
{
	int ndotX = 53;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][18 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Tu2_13x18.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 19; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Ku1Dot(void)
{
	int ndotX = 73;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][19 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Ku1_13x19.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 20; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Ku2Dot(void)
{
	int ndotX = 73;
	int ndotY = 10;
	int work;
	char szSubTitleDot[13][19 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Ku2_13x19.txt","r");
	for(int i = 0; i < 13; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 13; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 20; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void GTKDot(void)
{
	int ndotX = 88;
	int ndotY = 46;
	int work;
	char szSubTitleDot[4][11 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/gtk_4x11.txt","r");
	for(int i = 0; i < 4; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 4; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 12; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Start1Dot(void)
{
	int ndotX = 26;
	int ndotY = 35;
	int work;
	char szSubTitleDot[12][46 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Start1_12x46.txt","r");
	for(int i = 0; i < 12; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 12; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 47; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void Start2Dot(void)
{
	int ndotX = 26;
	int ndotY = 35;
	int work;
	char szSubTitleDot[12][46 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/Start2_12x46.txt","r");
	for(int i = 0; i < 12; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 12; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 47; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void End1Dot(void)
{
	int ndotX = 26;
	int ndotY = 35;
	int work;
	char szSubTitleDot[12][46 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/End1_12x46.txt","r");
	for(int i = 0; i < 12; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 12; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 47; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}
void End2Dot(void)
{
	int ndotX = 26;
	int ndotY = 35;
	int work;
	char szSubTitleDot[12][46 + 1];

	//------------描画前処理-------------
	FILE *fp;
	fp = fopen("image/End2_12x46.txt","r");
	for(int i = 0; i < 12; i ++)
		fscanf(fp, "%s", szSubTitleDot[i]);
	fclose(fp);

	//-------------描画処理--------------
	for(int y = 0; y < 12; y ++)
	{
		LOCATE(ndotX, ndotY + y);
		for(int x = 0; x < 47; x ++)
		{
			work  =  szSubTitleDot[y][x];
			if(work != 90 && work != 0)
			{
				work -= (work >= 65)? 55: 48; //三項演算子
				BACKCOLOR(work);
				printf(" ");
			}
			else
			{
				LOCATE(ndotX + x + 1, ndotY + y);
			}
		}
	}

}