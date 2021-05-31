#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

using namespace std;

void input(string s, string s0, char &c)
{
    cout << "Выведем исходный массив символов S0:" << endl;
    cout << s0;
    cout << endl;
    cout << "Вставить S0 перед всеми вхождениями символа ", c;
    cout << endl;
}

void transform(string &s, string s0, char c, string &d)
{
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == c)
        {
            s.insert(i, s0);
            i += 7;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    char c[2];

    string s = "Ya bezumno rad chto rabotaet";
    string s0 = "  --  ";
    cout << "Выведем исходный массив символов S:" << endl;
    cout << s;
    cout << endl;
    cout << endl;
    cout << "Введите символ перед которым необходимо вставить строку S0\n";
    cin >> c;
    string d;
    clock_t start = clock();
    input(s, s0, *c);
    transform(s, s0, *c, d);
    cout << "Полученная строка: " << endl;
    cout << *&s << endl;
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The time: %f seconds\n", seconds);
    cout << endl;
    return 0;
}
