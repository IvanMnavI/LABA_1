#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
struct CarInfo
{
	int color = 0;//����
	int carCondition = 0;//���������
	int DTP = 0;//���
};
CarInfo InitCarInfo(int color, int carCondition, int DTP);//�������������
CarInfo InputCarInfo();//����
void OutputCarInfo(CarInfo info);//�����
CarInfo DeleteDate(CarInfo info);//�������� ������