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
	cout << "<<<����� ���������(������): ";
	cin >> a;
	cout << "<<<����� �����(���.���): ";
	cin >> b;
	cout << "<<<���� ���������: " << a << " ������\n";
	m = (int)b;
	s = (int)(b * 100) - m * 100;
	m1 = m * 60 + s;
	m1 = (double)m1;
	a = (double)a;
	printf ("<<<����� �������� %d ����� %d ������  = %d ������\n",m ,s ,m1);
	m2 = a / m1;
	m2 = m2 * 3.6;
	cout << "<<<�� ������ �� ��������� " << m2 << " ��.���";
	return 0;
}