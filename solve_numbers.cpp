#include<iostream>
#include<string>

using namespace std;

void solveNumbers() {

    cout << "������� �����: " << endl;
    
    string digitalSymbols;

    getline(cin, digitalSymbols);
    
    int sizeString= digitalSymbols.length();

    for (int i = 0; i < sizeString; i++)
    {
        if ((int)digitalSymbols[i] >= 48 && (int)digitalSymbols[i] <= 57) {

            cout << "��� ����� " << digitalSymbols[i] << " � ������� " << (int)digitalSymbols[i] << endl;
        }
        else {
            cout << digitalSymbols[i] << " �� �����" << endl;
        }
    }
}