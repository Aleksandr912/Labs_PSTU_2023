﻿#include <iostream>
using namespace std;

int main()
{
    int a, fact = 1, *ptr = &fact;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        *ptr *= i;
    }
    cout << fact;
    return 0;
}

