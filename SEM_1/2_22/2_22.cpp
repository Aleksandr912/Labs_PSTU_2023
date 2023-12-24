#include <iostream>
using namespace std;
#include <cmath>;

int main()
{
    int n;
    cin >> n;
    float max = -99999999.9;
    float a;
    int b;
    for (int i = 1; i <= n; i++) {
        a = sin(n + (i / n));
        if (a > max) {
            max = a;
            b = i;
        }
    }
    cout << max << endl;
    cout << b;
    return 0;
}


