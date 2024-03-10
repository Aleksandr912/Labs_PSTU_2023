#include <iostream>
using namespace std;

float diff(float a, float b) {
	return a - b;
}

double diff(double a, double b) {
	return a - b;
}

int main() {
	setlocale(LC_ALL, "RU");
	float a;
	float b;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	cout << "Разность:" << diff(a, b) << endl;
	return 0;
}