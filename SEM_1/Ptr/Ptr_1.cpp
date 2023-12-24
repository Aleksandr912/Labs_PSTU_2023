#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    int* ptr_1;
    int* ptr_2;
    cin >> a;
    ptr_1 = &a;
    c = *ptr_1;
    cin >> b;
    ptr_2 = &b;
    *ptr_1 = *ptr_2;
    *ptr_2 = c;
    cout << *ptr_1 << endl;
    cout << *ptr_2;
    return 0;
}

