#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct CarOwner
{
	string Name = "";//���
	string Surname = "";//�������
	string phonNumber = "";//����� ��������
};
CarOwner InitOwner(string name, string surname, string phonNumber);//�������������
CarOwner InputOwner();//����
void OutputOwner(CarOwner owner);//�����
CarOwner DeleteOwner(CarOwner owner);//�������� ������