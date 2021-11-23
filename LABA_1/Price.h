#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct CarPrice
{
	string price = "";
};
CarPrice InitPrice(string price);
CarPrice InputPrice();
void OutputPrice(CarPrice price);
CarPrice DeletePrice(CarPrice price);