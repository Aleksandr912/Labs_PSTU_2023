#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int k;
    cin >> k;
    for (int i = 0; i < 10; i++) {
        a[i] = rand();
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        a[i] = a[i + 1];
    }
    for (int i = 0; i < 9; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "______________________" << endl;
    int n;
    for (int i = 0; i < k; i++) {
        n = a[8];
        for (int j = 8; j > 0; j--) {
            a[j] = a[j - 1];
        }
        a[0] = n;
        for (int t = 0; t < 9; t++) {
            cout << a[t] << " ";
        }
        cout << endl;
    }
    return 0;
}

