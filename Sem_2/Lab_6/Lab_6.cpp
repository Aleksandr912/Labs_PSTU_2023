#include <iostream>
#include <string.h>
using namespace std;
bool palindrom(char s[100]);
int main()
{
    setlocale(LC_ALL, "ru_RU");
    char s[100];
    cout << "введите строку" << endl;
    cin.getline(s, 100);
    if (palindrom(s))
        cout << "палиндром " << endl;
    else
        cout << "не палиндром" << endl;
    return 0;
}
bool palindrom(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n ; i++)
        if (s[i] != s[n - 1 - i])
            return false;
    return true;
}
