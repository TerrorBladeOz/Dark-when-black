#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    double r1, r2, r3, r0;
    cout << "������� ���������� R0 : 1/R0 = 1 / R1 + 1 / R2 + 1 / R3.\n";
    cout << "������� R1;  ";
    cin >> r1;
    cout << "������� R2;  ";
    cin >> r2;
    cout << "������� R3;  ";
    cin >> r3;
    r0 = 1 / r1 + 1 / r2 + 1 / r3;
    cout << "R0 = " << r0 << "\n\n";

    double S, pi = 3.14, L, R;
    cout << "������� ���������� S : S = pi*R2.\n";
    cout << "������� ���������� R : R=L/2pi.\n";
    cout << "������� ����� ����������(L);  ";
    cin >> L;
    R = L / 2 * pi;
    S = pi * R * 2;
    cout << "S = " << S<<"\n\n";
    double a, v, t,S1;
    cout << "������� ����������� ���������� ��� ������������� ��������������� �������� S1 = v * t + (a * t2) / 2\n";
    cout << "������� �������� (v) ";
    cin >> v;
    cout << "������� ����� (t) ";
    cin >> t;
    cout << "������� ��������� (a) ";
    cin >> a;
    S1 = v * t + (a * t*2) / 2;
    cout << "S1 = "<<S1;




}


