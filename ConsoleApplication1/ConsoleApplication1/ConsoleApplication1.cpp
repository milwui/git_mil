#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "module_3.h"
#include "module_2.h"
#include "module_1.h"
using namespace std;
int main()
{
    int choice;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    do
    {
        cout << "\n  Меню  \n";
        cout << "1. Ввод данных\n";
        cout << "2. Поиск книги \"Инфомартика\"\n";
        cout << "3. Сохранение результата\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            save();
            break;
        case 0:
            cout << "Выход...\n" << endl;
            break;
        default:
            cout << "Неверный номер!\n" << endl;
            break;
        }
    } while (choice != 0);
   
    return 0;
}