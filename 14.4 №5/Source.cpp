
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a,a1,a2;
    string b,b1;
    cout<<"������� ���������� ����: ";
    cin >> a;
    a1 = a / 7;
    a2 = a % 7;
    if ((a1 / 10) % 10 == 1)
    {
        if (a1 % 10 == 0) b =" ������ ";
        else if (a1 % 10 == 1) b = " ������ ";
        else if (a1 % 10 == 2)  b =  " ������ ";
        else if (a1 % 10 == 3)  b =  " ������ ";
        else if (a1 % 10 == 4)  b =  " ������ ";
        else if (a1 % 10 == 5)  b =  " ������ ";
        else if (a1 % 10 == 6)  b = " ������ ";
        else if (a1 % 10 == 7)  b = " ������ ";
        else if (a1 % 10 == 8)  b = " ������ ";
        else if (a1 % 10 == 9)  b = " ������ ";
    }

    if ((a1 / 10) % 10 != 1)
    {
        if (a1 % 10 == 0)  b = " ������ ";
        else if (a1 % 10 == 1)  b = " ������ ";
        else if (a1 % 10 == 2)  b = " ������ ";
        else if (a1 % 10 == 3)  b = " ������ ";
        else if (a1 % 10 == 4)  b = " ������ ";
        else if (a1 % 10 == 5)  b = " ������ ";
        else if (a1 % 10 == 6)  b = " ������ ";
        else if (a1 % 10 == 7)  b = " ������ ";
        else if (a1 % 10 == 8)  b = " ������ ";
        else  b = " ������ ";
 
    

    }
    
    if (a2 % 10 == 1) b1 = " ���� ";
    else if (a2 % 10 == 2)  b1 = " ��� ";
    else if (a2 % 10 == 3)  b1 = " ��� ";
    else if (a2 % 10 == 4)  b1 = " ��� ";
    else if (a2 % 10 == 5)  b1 = " ���� ";
    else if (a2 % 10 == 6)  b1 = " ���� ";


    if (a2 == 0)cout << "��� " << a1 << b;
    else cout << "��� " << a1 << b << " � " << a2 << b1;
    return 0;
}