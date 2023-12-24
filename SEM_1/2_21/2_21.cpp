#include <iostream>
using namespace std;
int main()
{
    int n=-10000000;
    int c;
    bool a = true;
    bool b = true;
    while (b==true) {
        cin >> c;
        if (c >= n) {
            n = c;
        }
        if ((c < n) and (c!=0)) {
            a = false;
        }
        if (c == 0) {
            b = false;
        }
    }
    if (a == true) {
        cout << " po vozrastaniu";
    }
    if (a == false) {
        cout << "ne po vozrastaniu";
    }
    return 0;
}

