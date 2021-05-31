#include <iostream>
#include <time.h>

using namespace std;

void matrixInitialization(int array[][10000], int n, int m)
{
    srand(time(0));
    int i, j;
    cout << "Исходная матрица:";
    for (i = 0; i < n; i++)
    {
        cout << "\n";
        for (j = 0; j < m; j++)
        {
            array[i][j] = -30 + rand() % 61;
            cout << " "
                 << "\t" << array[i][j];
        }
    }
}

void matrixTransformation(int array[][10000], int n, int m)
{
    int min = 1000;
    int max = -1;
    int i, j;
    int idMin = 0, idMax = 0;
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (min > array[i][j])
            {
                min = array[i][j];
                idMin = i;
            }
            if (max < array[i][j])
            {
                max = array[i][j];
                idMax = i;
            }
        }
        cout << "\n";
        array[idMin][j] = max;
        array[idMax][j] = min;
        min = 1000;
        max = -1;
    }
}

void printResultArray(int array[][10000], int n, int m)
{
    int i, j;
    cout << "Полученная матрица: ";
    for (i = 0; i < n; i++)
    {
        cout << "\n";
        for (j = 0; j < m; j++)
        {
            cout << " "
                 << "\t" << array[i][j];
        }
    }
}

int main()
{
    const int n = 10;
    const int m = 10;
    int array[n][m];
    int k = 0;
    setlocale(LC_ALL, "RUS");
    clock_t start = clock();
    matrixInitialization(array, n, m);
    matrixTransformation(array, n, m);
    printResultArray(array, n, m);
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nThe time: %f seconds\n", seconds);
    return 0;
}
