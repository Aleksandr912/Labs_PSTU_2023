#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru_RU");
    int strok, stolb;
    cout << "Введите количество строк и столбцов соответственно: ";
    cin >> strok >> stolb;
    int** matrix = new int* [strok];
    for (int i = 0; i < strok; i++)
    {
        matrix[i] = new int[stolb];
        for (int j = 0; j < stolb; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < strok; i++)
    {
        for (int j = 0; j < stolb; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int del;
    cout << "Введите номер строки и столбца для удаления: ";
    cin >> del;
    for (int i = del - 1; i < strok - 1; i++)
    {
        for (int j = 0; j < stolb; j++)
        {
            matrix[i][j] = matrix[i + 1][j];
        }
    }
    for (int i = 0; i < strok ; i++)
    {
        for (int j = del-1; j < stolb-1; j++)
        {
            matrix[i][j] = matrix[i][j+1];
        }
    }
    delete[] matrix[strok - 1];
    strok--;
    stolb--;
    cout << "Итоговый массив:" << endl;
    for (int i = 0; i < strok; i++)
    {
        for (int j = 0; j < stolb; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < strok; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}