#include "setAuto.h"
#include <windows.h>
///�������������
SetAuto	InitAuto(string brand, string series, string numberAuto,int CarBody) 
{
	SetAuto Auto;
	Auto.brand = brand;
	Auto.series = series;
	Auto.numberAuto = numberAuto;
	return Auto;
}
//����
SetAuto	InputAuto()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetAuto Auto;
	printf_s("\n������� ����� ����������(BMW, Mercedes_benz ,Tayota)\n����:");
	cin >> Auto.brand;
	printf_s("\n������� ����� ����������(X,I,B-CLASS)\n����:");
	cin >> Auto.series;
	printf_s("\n������� ����� ����������(X000XX-XXreg)\n����:");
	cin >> Auto.numberAuto;
	printf_s("\n�������� ����� ����������:\n1)����\n2)���������\n3)�����\n4)�������\n��� �����:");
	cin >> Auto.CarBody;
	return Auto;
}
//�����
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
			cout << "CarBody: ����" << endl;
		}
		if (Auto.CarBody == 2)
		{
			cout << "CarBody: ���������" << endl;
		}if (Auto.CarBody == 3)
		{
			cout << "CarBody: �����" << endl;
		}
		if (Auto.CarBody == 4)
		{
			cout << "CarBody: �������" << endl;
		}

	}
	printf_s("\n");
}














































