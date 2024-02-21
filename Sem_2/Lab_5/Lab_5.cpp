#include <iostream>
using namespace std;
int main()
{
    // Написать функцию для вычисления суммы элементов квадратной матрицы, которые расположены ниже главной диагонали. 
    // С ее помощью найти максимальное значение такой суммы в n матрицах.
    setlocale(LC_ALL, "ru_RU");
    int n,m;
    cout << "Число матриц = ";
    cin >> n;
    cout << endl;
    cout << " Размерность квадратной матрицы = "<< endl;
    cin >> m;
    int const x = m;
    int max = 0;
    for (int z = 0; z < n; z++) {
        int a[20][20];
        int sum = 0;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                a[i][j] = rand() % 101;
                cout << a[i][j]<<" ";
            }
            cout << endl;
        }
        int k = 0;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                if (i > 0 and j!=(x-1) and j<k) {
                    sum = sum + a[i][j];
                    
                }
            }
            k = k + 1;
        }
        cout << "sum = " << sum << endl;
        if (max < sum) {
            max = sum;
        }
        cout <<"max = " << max << endl;
        cout << endl;
    }
    return 0;
}

