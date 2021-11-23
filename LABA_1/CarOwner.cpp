#include "CarOwner.h"
#include <windows.h>
//Инициализация
CarOwner InitOwner(string name, string surname, string phonNumber) 
{
		CarOwner owner;
		owner.Name = name;
		owner.Surname = surname;
		owner.phonNumber = phonNumber;
		return owner;
}
//ввод
CarOwner InputOwner()
{
	CarOwner owner;
	printf_s("Введите имя владельца:");
	cin >> owner.Name;
	printf_s("Введите фамилию владельца:");
	cin >> owner.Surname;
	printf_s("Введите номер телефона владельца:");
	cin >> owner.phonNumber;
	return owner;
}
//вывод
void OutputOwner(CarOwner owner)
{
	if ((owner.Name[0]==0) && (owner.Surname[0]==0) && (owner.phonNumber[0]==0))
	{
		cout << "имя владельца: Пусто" << endl;
		cout << "фамилию владельца: Пусто" << endl;
		cout << "номер телефона владельца: Пусто" << endl;
	}
	else
	{
		cout << "имя владельца:" << owner.Name << endl;
		cout << "фамилия владельца:" << owner.Surname << endl;
		cout << "номер телефона владельца:" << owner.phonNumber << endl;
	}
	printf_s("\n");
}
//удаление данных
CarOwner DeleteOwner(CarOwner owner)
{
	owner.Name = "";
	owner.Surname = "";
	owner.phonNumber = "";
	return CarOwner();
}
