#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	cout << "������\n";
	int x,y;
	cout << "������� �������� �: ";
	cin >> x;
	cout << "������� �������� Y: ";
	cin >> y;
	int* px = &x;
	int* py = &y;
	cout << "�������� �������������� ����� " << x << " � " << y << " = " << (*px + *py)/2;
	cout << "\n\n";
	system("pause");
	


	

	return 0;
}