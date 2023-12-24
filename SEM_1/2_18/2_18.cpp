

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int b;
	while (n != 0) {
		b = n % 10;
		cout << b;
		n = n / 10;
	}
	return 0;
}


