/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Предложение. 
// Хранит строку переменной длины представляющую собой предложение. 
// Методы: добавить слово, удалить слово, вставить слово, количество букв, 
// количество слов, самое длинное слово, самое короткое слово, 
// есть ли в предложении заданное слово, слово под заданным номером, равны ли два предложения.

// Выполненное:
// 3) Перегрузка операций. Обязательно перегрузить операцию ==, дальше по желанию.
// 4) Перегрузка потоков ввода/вывода. Перегрузка операций сдвига » и « обязательна.


#include "string.h"
#include "iostream"
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

class Sentence {

    private:
        
        string sentence;
    
    public:
        
        Sentence() { 
            sentence = "Hello, world"; 
            cout << "Конструктор без параметров: " << sentence << endl;
        }

        
        Sentence(string STR) { 
            sentence = STR; 
            cout << "Конструктор с параметрами: " << sentence << endl; 
        }


        bool operator == (const Sentence& other) {
            return this -> sentence == other.sentence;
        }


        Sentence operator + (const Sentence& other) {
            return this -> sentence + other.sentence;
        }


        ~Sentence() {
            cout << "Сработал деструктор: " << sentence << endl;
        }


        friend ostream& operator << (ostream& cou_t, const Sentence& other) {
            cou_t << other.sentence;
            return cou_t;
        }
        
        
        friend istream& operator>>(istream &ci_n, Sentence &other) {
            cout << "Ввод текста: ";
            ci_n >> other.sentence;
            return ci_n;
        }
};




int main()
{
	setlocale(LC_ALL, "RUS");
	
	Sentence withoutParams;
	Sentence withParams("One1 Two2 Three333");
	
	cout << endl;
	
	Sentence sentence1("Text");
	Sentence sentence2("Text_2");
	
	cout << endl;
	
	cout << "Сравнение " << sentence1 << " и " << sentence2 << endl;
	if (sentence1 == sentence2) {
		cout << "Результат сравнения: равны" << endl;
	} else {
	    cout << "Результат сравнения: не равны" << endl;   
	}
	
	cout << endl;
	
	cout << "Конкатенация " << sentence1 << " и " << sentence2 << endl;
	Sentence result = sentence1 + sentence2;
	cout << "Итог конкатенации: " << result << endl;

    cout << endl;
    
	cin >> sentence2;
	cout << "Вывод введенного текста: \n" << sentence2;
	
	cout << endl;
	cout << endl <<"Завершение программы" << endl;
	cout << endl;

    return 0;
    
};
