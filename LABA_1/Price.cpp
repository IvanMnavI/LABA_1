#include "Price.h"

CarPrice InitPrice(string price)
{
	CarPrice Carprice;
	Carprice.price = price;
	return Carprice;
}

CarPrice InputPrice()
{
	CarPrice price;
	printf_s("\n������� ���� ����������:");
	cin >> price.price;
	return price;
}

void OutputPrice(CarPrice price)
{
	if (price.price[0] ==0 )
	{
		cout << "���� ����������: �����" << endl;
	}
	else
		cout << "���� ����������: " << price.price << endl;
}

CarPrice DeletePrice(CarPrice price)
{
	price.price = "";
	return price;
}
