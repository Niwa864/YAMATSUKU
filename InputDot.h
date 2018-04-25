#ifndef __INPUTDOT_H__
#define __INPUTDOT_H__

//=======================
//インクルード部
//=======================
#include <stdio.h>
#include "CScreen.h"

//=======================
//プロトタイプ宣言
//=======================
//------ TitleDot ------
void HuDotW(int, int);
void RinDotW(int, int);
void KaDotW(int, int);
void ZanDotW(int, int);
void HuDotC(int, int);
void RinDotC(int, int);
void KaDotC(int, int);
void ZanDotC(int, int);
void TitleDotB(int, int);
void HuDot8(int, int);
void HuDot7(int, int);
void RinDot8(int, int);
void RinDot7(int, int);
void KaDot8(int, int);
void KaDot7(int, int);
void ZanDot8(int, int);
void ZanDot7(int, int);
//------ GameMainDot ------
void Point(int, int);
void PointB(int, int);
void DotW(int, int);
void X(void);
//------ ResultDot ------
void ResultTitle1(void);
void ResultTitle2(void);
void ResultTitle3(void);
void ScoreDotCase(int);
void TypeDotCase(int, int);
void RorT1Dot(void);
void RorT2Dot(void);
//------ HTUDot ------
void HTU1Dot(void);
void HTU2Dot(void);
void HTU3Dot(void);
void KeyRDot(void);
void KeyUDot(void);
void KeyDDot(void);
void KeyGDot(void);
void NextDot(int, int);
//----- SubTitleDot -----
void Ya1Dot(void);
void Ya2Dot(void);
void Ma1Dot(void);
void Ma2Dot(void);
void Tu1Dot(void);
void Tu2Dot(void);
void Ku1Dot(void);
void Ku2Dot(void);
void GTKDot(void);
void Start1Dot(void);
void Start2Dot(void);
void End1Dot(void);
void End2Dot(void);

#endif