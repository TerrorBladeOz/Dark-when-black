
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a; // дробное число
	int r; // цела€ часть числа (рубли)
	int k; // цела€ часть числа (копейки)
	cout<<"ѕреобразование числа в денежный формат\n";
	cout<<"¬ведите число: ";
	cin >> a;
	r = (int)a;
	k = (int)(a * 100) - r * 100;
	cout<< a<<" руб. - это " <<r<<  "руб."<< k  <<"коп.\n";
	return 0;
}