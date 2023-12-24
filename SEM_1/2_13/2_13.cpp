#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru_RU");
	float a, b, c;
	cin >> a >> b >> c;
	float D = pow(b, 2) - 4 * a * c;
	if (D < 0){
		cout << "нет корней";
	}
	if (D == 0){
		float x = -b / (2 * a);
		cout << x << " корень уравнения";
	}
	else{
		float x1 = (-b + sqrt(D)) / (2 * a);
		float x2 = (-b - sqrt(D)) / (2 * a);
		cout << x1 << " первый корень уравнения";
		cout << x2 << " второй корень уравнения";
	}
	return 0;
}
