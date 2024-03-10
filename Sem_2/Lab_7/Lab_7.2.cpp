#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int kvadr(int m, ...) 
{
	int* p = &m + 1;
	int k = 0;
	int kor;
	for (; m != 0; m--)
	{
		kor = sqrt(*p);
		if (kor * kor == *p) k++; 
		p++; 
	}
	return k;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru_RU");
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
	int ch;
	cout << "Сколько чисел вы хотите проверить(3,7 или 11)? ";
	cin >> ch; 
	if (ch == 3)
	{
		cout << ("Введите 3 числа: ");
		cin >> n1 >> n2 >> n3;
		cout << "Количество точных квадратов: " << kvadr(3, n1, n2, n3);
	}

	if (ch == 7)
	{
		cout << ("Введите 7 чисел: ");
		cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
		cout << ("Количество точных квадратов: ") << kvadr(7, n1, n2, n3, n4, n5, n6, n7);
	}
	if (ch == 11)
	{
		cout << ("Введите 11 чисел: ");
		cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10 >> n11;
		cout << ("Количество точных квадратов: ") << kvadr(11, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11);
	}
	return 0;
}