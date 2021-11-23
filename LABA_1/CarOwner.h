#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct CarOwner
{
	string Name = "";//Имя
	string Surname = "";//фамилия
	string phonNumber = "";//номер телефона
};
CarOwner InitOwner(string name, string surname, string phonNumber);//Инициализация
CarOwner InputOwner();//ввод
void OutputOwner(CarOwner owner);//вывод
CarOwner DeleteOwner(CarOwner owner);//удаление данных