#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float a;
    float b,c;
    cout << "Введите время в секундах: ";
    cin >> a;
    b = a / 60;
    c = a / 3600; 
    cout << "Время в секундах равно " << a << endl;
    cout << "Время в минутах равно "<< b <<endl;
    cout << "Время в часах равно " << c <<endl;
    
    return 0;
}
