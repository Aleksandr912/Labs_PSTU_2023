#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int stars = n;
	int spaces = n;
	for (int i = 1; i <= n; i++){
		for (int j = n; j <= spaces; j++){
			cout << " ";
		}
		spaces++;
		for (int j = 0; j < stars; j++){
			cout << "*";
		}
		stars -= 1;
		cout << endl;
	}
	return 0;
}