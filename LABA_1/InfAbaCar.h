#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
struct CarInfo
{
	int color = 0;//цвет
	int carCondition = 0;//состояние
	int DTP = 0;//ДТП
};
CarInfo InitCarInfo(int color, int carCondition, int DTP);//Инициализация
CarInfo InputCarInfo();//ввод
void OutputCarInfo(CarInfo info);//вывод
CarInfo DeleteDate(CarInfo info);//удаление данных