#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

void arrayFunction(int array[], int n, int newArray[], int &t)
{
    for (int i = 0; i < n; i++)
    {
        if (!(array[i] % 2))
        {
            newArray[t++] = array[i];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");

    const int n = 100000;
    int *array = new int[n];  
    int *newArray = new int[n]; 
    int randomDigits[n] = {};
    cout << "Исходный массив: ";
    clock_t start = clock();
    for (int i = 0; i < n; i++)
    {
        randomDigits[i] = 1 + rand() % 100;
        array[i] = randomDigits[i];
        cout << "\t" << array[i];
    }
    int t = 0;
    arrayFunction(array, n, newArray, t);
    cout << "\nРазмер полученного массива = " << t << endl;
    if (t > 0)
    {
        for (int i = 0; i < t; i++)
        {
            cout << "\t" << newArray[i]; 
        }
    }
    else
    {
        cout << "error" << endl;
    }
    delete[] array;
    delete[] newArray;
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nThe time: %f seconds\n", seconds);
}
