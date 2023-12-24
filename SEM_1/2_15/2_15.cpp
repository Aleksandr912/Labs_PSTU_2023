
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	int n , s;
	bool k = 0;
	cin >> n;
	cin >> s;
	while (n != 0)
	{
		if (n % 10 == s) {
			k = 1;
		}
		n = n / 10;
	}
	if (k == 1) {
		cout << "входит число " << s;
	}
	if (k == 0) {
		cout << "нет таких чисел";
	}
	return 0;
 
}

