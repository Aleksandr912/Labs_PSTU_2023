#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int* ptr_1;
	int* ptr_2;
	ptr_1 = &a;
	ptr_2 = &b;
	cout << *ptr_1 + *ptr_2;
	return 0;
}
