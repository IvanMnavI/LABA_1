#include "setAuto.h"
#include <windows.h>
///Инициализация
SetAuto	InitAuto(string brand, string series, string numberAuto,int CarBody) 
{
	SetAuto Auto;
	Auto.brand = brand;
	Auto.series = series;
	Auto.numberAuto = numberAuto;
	return Auto;
}
//ввод
SetAuto	InputAuto()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetAuto Auto;
	printf_s("\nВведите бренд автомобиля(BMW, Mercedes_benz ,Tayota)\nВвод:");
	cin >> Auto.brand;
	printf_s("\nВведите серию автомобиля(X,I,B-CLASS)\nВвод:");
	cin >> Auto.series;
	printf_s("\nВведите номер автомобиля(X000XX-XXreg)\nВвод:");
	cin >> Auto.numberAuto;
	printf_s("\nВыберите кузов автомобиля:\n1)Купэ\n2)Универсал\n3)Седан\n4)Хетчбэк\nВаш выбор:");
	cin >> Auto.CarBody;
	return Auto;
}
//вывод
void OutputAuto(SetAuto Auto)
{
	if ((Auto.brand[0] == 0) && (Auto.series[0] == 0) && (Auto.numberAuto[0] == 0))
	{
			printf_s("\nBrand: empty");
			printf_s("\nSeries: empty");
			printf_s("\nNumber: empty");
	}
	else
	{
		cout << "Brand: " << Auto.brand << endl;
		cout << "Series: " << Auto.series << endl;
		cout << "Number: " << Auto.numberAuto << endl;
		if (Auto.CarBody == 1)
		{
			cout << "CarBody: Купэ" << endl;
		}
		if (Auto.CarBody == 2)
		{
			cout << "CarBody: Универсал" << endl;
		}if (Auto.CarBody == 3)
		{
			cout << "CarBody: Седан" << endl;
		}
		if (Auto.CarBody == 4)
		{
			cout << "CarBody: Хетчбэк" << endl;
		}

	}
	printf_s("\n");
}














































