#include <iostream>
#include <string>

using namespace std;

void solveAscii() {

	cout << "������� ��������� �����" << endl;

	string symbols;

	getline(cin, symbols);

	int stringSize = symbols.length();

	for (int i = 0; i < stringSize; i++) {

		if ((int)symbols[i] >= 97 && (int)symbols[i] <= 122 || (int)symbols[i] >= 65 && (int)symbols[i] <= 90) {

			int result = (int)(tolower(symbols[i])) - (int)(toupper(symbols[i]));

			cout << "������� ����� ��������� � �������� ����� " << symbols[i] << " � ASCII: " << result << endl;
		}
		else {
			cout << "������ " << symbols[i] << " �� ��������� �����" << endl;
		}
	}
}