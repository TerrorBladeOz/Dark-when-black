#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a,b,c,m2;
	int m1;
	int m;
	int s;
	cout << "<<<I am speed...\n";
	cout << "<<<Какая дистанция(метров): ";
	cin >> a;
	cout << "<<<Какое время(мин.сек): ";
	cin >> b;
	cout << "<<<Ваша дистанция: " << a << " метров\n";
	m = (int)b;
	s = (int)(b * 100) - m * 100;
	m1 = m * 60 + s;
	m1 = (double)m1;
	a = (double)a;
	printf ("<<<Время пробежки %d минут %d секунд  = %d секунд\n",m ,s ,m1);
	m2 = a / m1;
	m2 = m2 * 3.6;
	cout << "<<<Вы бежали со скоростью " << m2 << " км.час";
	return 0;
}