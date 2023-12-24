
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int max=-999999;
	int min=99999;
	int sum;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		if (a >= max) {
			max = a;
		}
		if (a <= min) {
			min = a;
		}
	}
	sum = min + max;
	cout << sum;
	return 0;
}

