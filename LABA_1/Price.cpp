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
	printf_s("\nВведите Цену автомобиля:");
	cin >> price.price;
	return price;
}

void OutputPrice(CarPrice price)
{
	if (price.price[0] ==0 )
	{
		cout << "Цена автомобиля: Пусто" << endl;
	}
	else
		cout << "Цена автомобиля: " << price.price << endl;
}

CarPrice DeletePrice(CarPrice price)
{
	price.price = "";
	return price;
}
