#include <iostream>
using namespace std;
const int Size = 8;
int board[Size][Size];
int resultN = 1;
void func_1()
{
    for (int a = 0; a < Size; a++)
    {
        for (int b = 0; b < Size; b++)
        {
            cout << ((board[a][b]) ? "Q " : ". ");
        }
        cout << endl;
    }
}
bool func_2(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        if (board[i][b] == 1)
        {
            return false;
        }
    }
    for (int i = 1; i <= a && b - i >= 0; i++)
    {
        if (board[a - i][b - i] == 1)
        {
            return false;
        }
    }
    for (int i = 1; i <= a && b + i < Size; i++)
    {
        if (board[a - i][b + i] == 1)
        {
            return false;
        }
    }
    return true;
}
void func_3(int a)
{
    if (a == Size)
    {
        func_1();
        cout << "Результат номер " << resultN++ << endl << endl;
        return;
    }
    for (int i = 0; i < Size; i++)
    {
        if (func_2(a, i))
        {
            board[a][i] = 1;
            func_3(a + 1);
            board[a][i] = 0;
        }
    }
    return;
}
int main()
{
    setlocale(LC_ALL, "ru_RU");
    cout << "Q - queen" << endl << ". - пустая клетка поля" << endl << endl;
    func_3(0);
    return 0;
}