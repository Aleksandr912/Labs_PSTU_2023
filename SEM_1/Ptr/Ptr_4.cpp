#include <iostream>
using namespace std;

int main()
{
    int a, n, min = 99999, max = -99999, * ptr_1, * ptr_2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ptr_1 = &a;
        if (*ptr_1 > max) {
            max = *ptr_1;
        }
        if (*ptr_1 < min) {
            min = *ptr_1;
        }
    }
    ptr_1 = &max;
    ptr_2 = &min;
    cout << *ptr_1 + *ptr_2;
    return 0;
}

