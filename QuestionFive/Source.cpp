#include <iostream>
using namespace std;
#include <Windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ch;
	cout << "������� �������������� �����: ";
	cin >> ch;
	cout << "�� �����: "<< ch;
	cout << "\n������������ �����: ";
		while (ch > 0) {
			int last_number = ch % 10;
			cout << last_number;
			ch /= 10;
		}
		return 0;
}