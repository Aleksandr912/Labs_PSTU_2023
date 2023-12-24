#include <iostream>
#include <string>
using namespace std;
int main() {
	string c, a, b;
	cin >> c >> a >> b;
	int z = 0;
	int x = 0;
	int k = 0;
	int l = c.length();
	for (int i = 0; i < l; i++) {
		string sim = c.substr(i, 1);
		if (sim == a)
			z++;
		else if (sim == b)
			x++;
		else
			k++;
	}
	cout << z << endl;
	cout << x << endl; 
	cout << k << endl;
	cout << c.length();
	return 0;
}