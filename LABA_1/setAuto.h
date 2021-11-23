#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct SetAuto {
public:
	string brand = "";//марка
	string series = "";//серия
	string numberAuto = "";//серия
	int CarBody = 0;
};
SetAuto InitAuto(string brand, string series, string numberAuto, int CarBody);////Инициализация
SetAuto InputAuto();//ввод
void OutputAuto(SetAuto Auto);//вывод