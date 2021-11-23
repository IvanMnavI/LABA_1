#include "InfAbaCar.h"
string Date = "";
//Инициализация
CarInfo InitCarInfo(int color, int carCondition, int DTP)
{
	CarInfo info;
	info.color = color;
	info.carCondition = carCondition;
	info.DTP = DTP;
	return info;
}
//ввод
CarInfo InputCarInfo()
{
	CarInfo info;
	printf_s("Введите цвет автомобиля\n1)Черный\n2)Белый\n3)Красный\n4)Синий\nВаш выбор:");
	cin >> info.color;
	printf_s("Введите состояние автомобиля\n1)Отличное\n2)Хорошие\n3)неудворительное\nВаш выбор:");
	cin >> info.carCondition;
	printf_s("Попадала ли машина в ДТП(0-нет,1-да):");
	cin >> info.DTP;
	if (info.DTP==1)
	{
		printf_s("Введите дату ДТП: ");
		cin >> Date;
	}
	return info;
}
//вывод
void OutputCarInfo(CarInfo info)
{
	if ((info.color == 0) && (info.carCondition == 0) && (info.DTP == 0)) {
		cout << "цвет автомобиля: Пусто" << endl;
		cout << "состояние автомобиля: Пусто" << endl;
		cout << "Попадала ли машина в ДТП: Пусто" << endl;
	}
	else
	{
		if (info.color==1)
		{
			cout << "цвет автомобиля: Черный" << endl;

		}
		if (info.color == 2)
		{
			cout << "цвет автомобиля: Белый" << endl;
		}
		if (info.color == 3)
		{
			cout << "цвет автомобиля: Красный" << endl;
		}
		if (info.color == 4)
		{
			cout << "цвет автомобиля: Синий" << endl;
		}
		if (info.carCondition == 1)
		{
			cout << "состояние автомобиля: Отличное" << endl;
		}
		if (info.carCondition == 2)
		{
			cout << "состояние автомобиля: Хорошие" << endl;
		}
		if (info.carCondition == 3)
		{
			cout << "состояние автомобиля: неудворительное" << endl;
		}
		if (info.DTP==0)
		{
			cout << "Попадала ли машина в ДТП: Нет" << endl;
		}
		if (info.DTP == 1)
		{
			cout << "Попадала ли машина в ДТП: Да, " << "Дата аварии: " << Date << endl;

		}

	}

}
//удаление данных
CarInfo DeleteDate(CarInfo info)
{
	info.color = 0;
	info.carCondition = 0;
	info.DTP = 0;
	return info;
}
