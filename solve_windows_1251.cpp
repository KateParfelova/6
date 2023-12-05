#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;

void solveWindows1251() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� ������� ������� �����" << endl;

	string symbolsBig;

	getline(cin, symbolsBig);

	cout << "������� ������� ��������� �����" << endl;

	string symbolsSmall;

	getline(cin, symbolsSmall);
	
	int stringSizeBigSymbols= symbolsBig.length();

	int stringSizeSmallSymbols = symbolsSmall.length();

	int stringSize;

	if (stringSizeBigSymbols < stringSizeSmallSymbols) {

		stringSize = stringSizeBigSymbols;
	}
	else {
		stringSize = stringSizeSmallSymbols;
	}

	unsigned char *massiveSymbolsBig = new unsigned char[stringSize];
	unsigned char *massiveSymbolsSmall = new unsigned char[stringSize];

	for (int i = 0; i < stringSize; i++) {
		
		massiveSymbolsBig[i] = symbolsBig[i];
		massiveSymbolsSmall[i] = symbolsSmall[i];

		if (192 <= (int)massiveSymbolsBig[i] && (int)massiveSymbolsBig[i] <= 223 && 
		    224 <= (int)massiveSymbolsSmall[i] && (int)massiveSymbolsSmall[i] <= 256){

			int result = abs((int)massiveSymbolsSmall[i] - (int)massiveSymbolsBig[i]);
			cout << "������� ����� ��������� "<< massiveSymbolsBig[i]<<" � �������� "<< massiveSymbolsSmall[i]
			<<" ���� " << result << " � Windows 1251" << endl;
		}
		else{
			cout << "������,������� �� ������� ����� ��� ������� ���������/�������� ����� �� � ��� ������" << endl;
		}
	}

	delete [] massiveSymbolsBig;
	delete [] massiveSymbolsSmall;

	massiveSymbolsBig = NULL;
	massiveSymbolsSmall = NULL;
}