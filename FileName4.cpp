#include <iostream>
#include <fstream> 
#include <string>
#include <windows.h>
#include "course.h"

using namespace std;


string text;

//лишние пробелы
void NOPROBEL(string ctext) {

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == ' ' && ctext[i + 1] == ' ')
            while (ctext[i + 1] == ' ')
                ctext.erase((i + 1), 1);
    }
    text = ctext;
    cout << "2.1) Убраны лишние пробелы: " << text << "\n";
}
//повторяющиеся знаки
void NOZNAK(string ctext) {

    for (int i = 0; i <= ctext.size(); i++)
    {
        if ((ctext[i] == '.' || ctext[i] == ',' || ctext[i] == '?' || ctext[i] == '!' || ctext[i] == ':' || ctext[i] == ';') && (ctext[i + 1] == '.' || ctext[i + 1] == ',' || ctext[i + 1] == '?' || ctext[i + 1] == '!' || ctext[i + 1] == ':' || ctext[i + 1] == ';'))
            if (ctext[i] == '.' && ctext[i + 1] == '.' && ctext[i + 2] == '.' && ctext[i + 3] == ' ')
                i += 3;
            else
            {
                while (ctext[i + 1] == '.' || ctext[i + 1] == ',' || ctext[i + 1] == '?' || ctext[i + 1] == '!' || ctext[i + 1] == ':' || ctext[i + 1] == ';')
                    ctext.erase((i + 1), 1);
            }
    }
    text = ctext;
    cout << "2.2) Убраны лишние знаки : " << text << "\n";
}
//неправильное написание ПрИмЕр
void Proverka(string ctext)
{

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == ' ')
            i += 2;
        ctext[i] = tolower(ctext[i]);
    }
    text = ctext;
    cout << "2.3) Исправлена запись слова : " << text << "\n";
}
//вывод наоборот 
void Obratno() {

    int a = 0;
    text += " ";//добавляю в конец пробел

    for (int i = text.length(); i >= 0; i--)
    {
        if (text[i] == ' ')
        {
            for (int j = i + 1; j <= (i + a); j++)
            {
                cout << text[j];
            }
            a = 0;
        }
        a++;
    }
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') break;
        cout << text[i];
    }

}

char n;
void deleteCim(string ctext) {

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == n)
            while (ctext[i] == n)
                ctext[i] = ' ';
    }
    text = ctext;
    cout << "Убран сивол << " << n << " >> : " << text << "\n";
}

void cpp4main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    //  1 задание 
    {
        int input;
    Menu: {
        cout << "Что вы хотите сделать \n"
            "1. Записать слова вручную \n";
        cin >> input;
        }
    if (input == 1) { // Введение текста
        cout << "Введите строку " << "\n";
        

        cin.ignore();
        getline(cin, text);
    }

    else if (input == 2) { // я усталн
        cout << "Иди поспи " << "\n";
        text = "He IS gOnE     tO bEd     ,,,,,,,,,,,,,   DoNT WAKE HiM UP";
    }
    else
        goto Menu;
    cout << "\n";
    cout << "1) Исходная строка выглядит так: " << text << "\n";
    }
    // 2 задание
    {
        NOPROBEL(text);
        NOZNAK(text);
        Proverka(text);
        cout << "2(итог)) В итоге получаем: " << text << "\n";
    }
    // 3 задание
    {
        cout << "3) Cтрока в обратном порядке: ";
        Obratno();
    }
    // 4 Задание
    {
        cout << "\n";
        cout << "4)Введите символ который хотите удалить : ";
        cin >> n;
        cout << "\n";
        deleteCim(text);
    }
    // конец
    {
        cout << "\n";
        cout << "\n";
        cout << "           .'\   /`." << "\n";
        cout << "         .'.-.-'.-.." << "\n";
        cout << "    ..._:   .-. .-.   :_..." << "\n";
        cout << "  .'    '-.(o ) (o ).-'    `." << "\n";
        cout << " :  _    _ _~(_)~_ _    _  :" << "\n";
        cout << ":  /:   ' .-=_   _=-. `   ;\  :" << "\n";
        cout << ":   :|-.._  '     `  _..-|:   :" << "\n";
        cout << " :   :| |:-:-.-:-:'| |:'   :" << "\n";
        cout << "  .   .| | | | | | |.'   .'" << "\n";
        cout << "     -._   ```    _.-'" << "\n";
        cout << "         ``-------''" << "\n";
        cout << "Поставьте 4, пожалуйста" << "\n";
    }


 
}