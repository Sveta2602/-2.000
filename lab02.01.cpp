

// Lab_02.cpp
//Яшина Світлана
//Лабораторна робота №2.
//Лінійні програми.
//Варіант 24

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;  // 
	double z1;  // результат обчислення 1-го виразу
	double z2;  // результат обчислення 2-го виразу
	
	cout << "a = "; cin >> a;


		z1 = (sin(a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
		z2 = sin(3 * a) / cos(3 * a);

		cout << endl;
		cout << "z1 = " << z1 << endl;
		cout << "z2 = " << z2 << endl;

		cin.get();
		return 0;
}

