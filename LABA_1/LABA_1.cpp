// LABA_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <windows.h>
#include "setAuto.h"
#include "CarOwner.h"
#include "InfAbaCar.h"
#include "Exit.h"
#include "Price.h"

#include <string>
int menu()//меню
{
    int i;
    system("cls");
    printf_s(" 1) Ввод данных Авто\n 2) Информацыя владельца\n 3) Доп. информация\n 4) Цена Автомобиля\n 5) Выход и удаление\n 0) Выход из программы\n\n Choose: ");
    scanf_s("%d", &i);
    return i;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //SetAuto
    string brend = "BMW";
    string series = "X";
    string number = "B222MB22reg";
    int _carBody = 0;
    SetAuto Auto;
    //CarOwner
    string name = "Ivan";
    string surname = "Zamyatin";
    string phonNumber = "8983-555-5555";
    CarOwner owner;
    //InfabaCar
    int color = 1;
    int carCondition = 1;
    int DTP = 0;
    CarInfo info;
    //price
    string price = "1.500.000";
    CarPrice CarPrice;
    int n = 0;
    int f = 1;
        do
        {
            switch (menu())
            {
            case 0:
            {
                f = 0;
                break;
            }
            case 1: {
                do
                {
                    system("cls");
                    printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 0 - выход\n\nвыш выбор: ");
                    scanf_s("%d", &n);
                    if (n == 1)
                    {
                        Auto = InitAuto(brend, series, number, _carBody);
                    }
                    if (n == 2)
                    {
                        Auto = InputAuto();
                    }
                    if (n == 3)
                    {
                        OutputAuto(Auto);
                        system("pause");
                    }
                } while (n != 0);
                break;
            }
            case 2:
            {
                do
                {
                    system("cls");
                    printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 4 - Удалить владельца\n 0 - выход\n\nвыш выбор: ");
                    scanf_s("%d", &n);

                    if (n == 1)
                    {
                        owner = InitOwner(name, surname, phonNumber);
                    }
                    if (n == 2)
                    {
                        owner = InputOwner();
                    }
                    if (n == 3)
                    {
                        OutputOwner(owner);
                        system("pause");
                    }
                    if (n == 4)
                    {
                        owner = DeleteOwner(owner);
                    }

                } while (n != 0);
                break;
            }
            case 3:
            {
                do
                {
                    system("cls");
                    printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 4 - Удалить данные\n 0 - выход\n\nвыш выбор: ");
                    scanf_s("%d", &n);
                    if (n == 1)
                    {
                        info = InitCarInfo(color, carCondition, DTP);
                    }
                    if (n == 2)
                    {
                        info = InputCarInfo();
                    }
                    if (n == 3)
                    {
                        OutputCarInfo(info);
                        system("pause");
                    }
                    if (n == 4)
                    {
                        info = DeleteDate(info);
                    }

                } while (n != 0);
                break;
            }
            case 4:
            {
                do
                {
                    system("cls");
                    printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 4 - Удалить цену\n 0 - выход\n\nвыш выбор: ");
                    scanf_s("%d", &n);
                    if (n == 1)
                    {
                        CarPrice = InitPrice(price);
                    }
                    if (n == 2)
                    {
                        CarPrice = InputPrice();
                    }
                    if (n == 3)
                    {
                        OutputPrice(CarPrice);
                        system("pause");
                    }
                    if (n == 4)
                    {
                        CarPrice = DeletePrice(CarPrice);
                    }
                } while (n != 0);
                break;
            }
            case 5:
            {
                do
                {
                    system("cls");
                    printf_s("\n 1 - Выход и удаление\n 0 - Выход\n Ваш выбор: ");
                    scanf_s("%d", &n);
                    if (n == 0)
                    {
                        Auto = DeleteSetAuto(Auto);
                        owner = DeleteCarOwner(owner);
                        info = DeleteCarInfo(info);
                        CarPrice = DeletePrice(CarPrice);
                    }
                } while (n != 0);
                break;
            }
            default:
                break;
            }

        } while (f);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
