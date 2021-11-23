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
	string null = "";//пустая строка
	int noll = 0;//ноль для int
};
SetAuto DeleteSetAuto(SetAuto Auto);//удаление авто
CarOwner DeleteCarOwner(CarOwner Owner);//удаление владельца
CarInfo DeleteCarInfo(CarInfo Info);//удаление доп инфы
CarPrice DeleteCarPrice(CarPrice Price);//удаление цены