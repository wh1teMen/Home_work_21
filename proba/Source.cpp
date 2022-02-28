#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	cout << "Задача\n";
	int x,y;
	cout << "Введите значение Х: ";
	cin >> x;
	cout << "Введите значение Y: ";
	cin >> y;
	int* px = &x;
	int* py = &y;
	cout << "Среденее арифметическое чисел " << x << " и " << y << " = " << (*px + *py)/2;
	cout << "\n\n";
	system("pause");
	


	

	return 0;
}