#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float a;
    float b,c;
    cout << "������� ����� � ��������: ";
    cin >> a;
    b = a / 60;
    c = a / 3600; 
    cout << "����� � �������� ����� " << a << endl;
    cout << "����� � ������� ����� "<< b <<endl;
    cout << "����� � ����� ����� " << c <<endl;
    
    return 0;
}
