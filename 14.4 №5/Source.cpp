
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a,a1,a2;
    string b,b1;
    cout<<"Введите количество дней: ";
    cin >> a;
    a1 = a / 7;
    a2 = a % 7;
    if ((a1 / 10) % 10 == 1)
    {
        if (a1 % 10 == 0) b =" недель ";
        else if (a1 % 10 == 1) b = " недель ";
        else if (a1 % 10 == 2)  b =  " недель ";
        else if (a1 % 10 == 3)  b =  " недель ";
        else if (a1 % 10 == 4)  b =  " недель ";
        else if (a1 % 10 == 5)  b =  " недель ";
        else if (a1 % 10 == 6)  b = " недель ";
        else if (a1 % 10 == 7)  b = " недель ";
        else if (a1 % 10 == 8)  b = " недель ";
        else if (a1 % 10 == 9)  b = " недель ";
    }

    if ((a1 / 10) % 10 != 1)
    {
        if (a1 % 10 == 0)  b = " недель ";
        else if (a1 % 10 == 1)  b = " неделя ";
        else if (a1 % 10 == 2)  b = " недели ";
        else if (a1 % 10 == 3)  b = " недели ";
        else if (a1 % 10 == 4)  b = " недели ";
        else if (a1 % 10 == 5)  b = " недель ";
        else if (a1 % 10 == 6)  b = " недель ";
        else if (a1 % 10 == 7)  b = " недель ";
        else if (a1 % 10 == 8)  b = " недель ";
        else  b = " недель ";
 
    

    }
    
    if (a2 % 10 == 1) b1 = " день ";
    else if (a2 % 10 == 2)  b1 = " дня ";
    else if (a2 % 10 == 3)  b1 = " дня ";
    else if (a2 % 10 == 4)  b1 = " дня ";
    else if (a2 % 10 == 5)  b1 = " дней ";
    else if (a2 % 10 == 6)  b1 = " дней ";


    if (a2 == 0)cout << "Это " << a1 << b;
    else cout << "Это " << a1 << b << " и " << a2 << b1;
    return 0;
}