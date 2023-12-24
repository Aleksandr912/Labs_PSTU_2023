#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru_RU");
	float b, c, a;
	int i = 1;
	cin >> b >> c;
	bool t = 0;
	while (i <= b and !t){
		a = sin(b + i / b);
		a = round(a * 10) / 10;
		cout << b + i / b << " " << a << endl;
		if (a == c){
			t = 1;
		}
		else{
			i++;
		}
	}
	if (t == 1){
		cout << c << " входит в последовательность  \n";
	}
	else{
		cout << c << " не входит в последовательность \n";
	}
	return 0;
}