#include <iostream>
#include "course.h"

using namespace std;
int main() {
Menu: {
    setlocale(0, "");
    system("cls");
    int lab;
    cout << "____________________________________________________________________________________" << "\n";
    cout << "|                                 Меню :                                           |" << "\n";
    cout << "| 1) Лабораторная работа 1 - Работа с паметью                                      |" << "\n";
    cout << "| 2) Лабораторная работа 2 - Сортировки массивов                                   |" << "\n";
    cout << "| 3) Лабораторная работа 3 - Работа с двумерными массивами                         |" << "\n";
    cout << "| 4) Лабораторная работа 4 - Работа со строками                                    |" << "\n";
    cout << "| 0) Выход из программы                                                            |" << "\n";
    cout << "|__________________________________________________________________________________|" << "\n";
    cin >> lab;
    system("cls");
    switch (lab)
    {
    case 1:
        cpp1main();
        main();
        goto Menu;
        break;
    case 2:
        cpp2main();
        main();
        goto Menu;
        break;
    case 3:
        cpp3main();
        main();
        goto Menu;
        break;
    case 4:
        cpp4main();
        main();
        goto Menu;
        break;
    case 0:
        goto Menu;
        exit(1);
    default:
        goto Menu;
        main();
        break;
    }
    return 0;
    }

}
