// lr4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>


using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x, y, a, alpha;
	printf("Введіть х: ");
	scanf_s("%lf", &x);
	printf("Введіть у: ");
	scanf_s("%lf", &y);
	printf("Введіть alpha: ");
	scanf_s("%lf", &alpha);
	a = (2* sin(x-M_PI/6))/ pow(((1./2 + pow(sin(y),2))),3)+ cos(alpha + 1);
	printf("Відповідь: ");
	printf("%lf", a);
}