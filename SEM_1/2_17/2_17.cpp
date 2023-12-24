#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    float sum = 1;
    for (int i = 1; i < n; i++) {
        int y = 1;
        for (int a = 1; a < i; a++) {
            y = y * (y + 1);
        }
        sum = sum + pow(x, i) / (y);
    }
    cout << sum;
    return 0;
}