#include <iostream>
#include <limits>
#include "functions.h"


using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    bool checkExit =false;

    while (checkExit ==true) {
        cout << "Введите число:" << endl
            << "1-разница значений кодов в ASCII" << endl
            << "2-разница значений кодов в Windows-1251" << endl
            << "3-вывод в консоль кода символа,соответствующуго введённой цифре" << endl
            << "4-выход из программы" << endl;

        int taskNumber;

        cin >> taskNumber;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (taskNumber == 1) {
            solveAscii();
        }
        else if (taskNumber == 2) {
            solveWindows1251();
        }
        else if (taskNumber == 3) {
            solveNumbers();
        }
        else if (taskNumber == 4) {
            checkExit = true;
        }
        else {
            cout << "Введено неверное число" << endl;
        }
    }

}