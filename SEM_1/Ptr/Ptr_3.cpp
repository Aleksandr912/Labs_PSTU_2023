#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	float* ptr_1;
	float* ptr_2;
	ptr_1 = &a;
	ptr_2 = &b;
	cout << *ptr_1 + *ptr_2;
	return 0;
}
