#include "InfAbaCar.h"
string Date = "";
//�������������
CarInfo InitCarInfo(int color, int carCondition, int DTP)
{
	CarInfo info;
	info.color = color;
	info.carCondition = carCondition;
	info.DTP = DTP;
	return info;
}
//����
CarInfo InputCarInfo()
{
	CarInfo info;
	printf_s("������� ���� ����������\n1)������\n2)�����\n3)�������\n4)�����\n��� �����:");
	cin >> info.color;
	printf_s("������� ��������� ����������\n1)��������\n2)�������\n3)���������������\n��� �����:");
	cin >> info.carCondition;
	printf_s("�������� �� ������ � ���(0-���,1-��):");
	cin >> info.DTP;
	if (info.DTP==1)
	{
		printf_s("������� ���� ���: ");
		cin >> Date;
	}
	return info;
}
//�����
void OutputCarInfo(CarInfo info)
{
	if ((info.color == 0) && (info.carCondition == 0) && (info.DTP == 0)) {
		cout << "���� ����������: �����" << endl;
		cout << "��������� ����������: �����" << endl;
		cout << "�������� �� ������ � ���: �����" << endl;
	}
	else
	{
		if (info.color==1)
		{
			cout << "���� ����������: ������" << endl;

		}
		if (info.color == 2)
		{
			cout << "���� ����������: �����" << endl;
		}
		if (info.color == 3)
		{
			cout << "���� ����������: �������" << endl;
		}
		if (info.color == 4)
		{
			cout << "���� ����������: �����" << endl;
		}
		if (info.carCondition == 1)
		{
			cout << "��������� ����������: ��������" << endl;
		}
		if (info.carCondition == 2)
		{
			cout << "��������� ����������: �������" << endl;
		}
		if (info.carCondition == 3)
		{
			cout << "��������� ����������: ���������������" << endl;
		}
		if (info.DTP==0)
		{
			cout << "�������� �� ������ � ���: ���" << endl;
		}
		if (info.DTP == 1)
		{
			cout << "�������� �� ������ � ���: ��, " << "���� ������: " << Date << endl;

		}

	}

}
//�������� ������
CarInfo DeleteDate(CarInfo info)
{
	info.color = 0;
	info.carCondition = 0;
	info.DTP = 0;
	return info;
}
