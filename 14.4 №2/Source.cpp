
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a; // ������� �����
	int r; // ����� ����� ����� (�����)
	int k; // ����� ����� ����� (�������)
	cout<<"�������������� ����� � �������� ������\n";
	cout<<"������� �����: ";
	cin >> a;
	r = (int)a;
	k = (int)(a * 100) - r * 100;
	cout<< a<<" ���. - ��� " <<r<<  "���."<< k  <<"���.\n";
	return 0;
}