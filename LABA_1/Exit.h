#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include "InfAbaCar.h"
#include "CarOwner.h"
#include "setAuto.h"
#include "Price.h"
using namespace std;
struct Exit
{
	string null = "";//������ ������
	int noll = 0;//���� ��� int
};
SetAuto DeleteSetAuto(SetAuto Auto);//�������� ����
CarOwner DeleteCarOwner(CarOwner Owner);//�������� ���������
CarInfo DeleteCarInfo(CarInfo Info);//�������� ��� ����
CarPrice DeleteCarPrice(CarPrice Price);//�������� ����