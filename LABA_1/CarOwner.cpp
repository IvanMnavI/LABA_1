#include "CarOwner.h"
#include <windows.h>
//�������������
CarOwner InitOwner(string name, string surname, string phonNumber) 
{
		CarOwner owner;
		owner.Name = name;
		owner.Surname = surname;
		owner.phonNumber = phonNumber;
		return owner;
}
//����
CarOwner InputOwner()
{
	CarOwner owner;
	printf_s("������� ��� ���������:");
	cin >> owner.Name;
	printf_s("������� ������� ���������:");
	cin >> owner.Surname;
	printf_s("������� ����� �������� ���������:");
	cin >> owner.phonNumber;
	return owner;
}
//�����
void OutputOwner(CarOwner owner)
{
	if ((owner.Name[0]==0) && (owner.Surname[0]==0) && (owner.phonNumber[0]==0))
	{
		cout << "��� ���������: �����" << endl;
		cout << "������� ���������: �����" << endl;
		cout << "����� �������� ���������: �����" << endl;
	}
	else
	{
		cout << "��� ���������:" << owner.Name << endl;
		cout << "������� ���������:" << owner.Surname << endl;
		cout << "����� �������� ���������:" << owner.phonNumber << endl;
	}
	printf_s("\n");
}
//�������� ������
CarOwner DeleteOwner(CarOwner owner)
{
	owner.Name = "";
	owner.Surname = "";
	owner.phonNumber = "";
	return CarOwner();
}
