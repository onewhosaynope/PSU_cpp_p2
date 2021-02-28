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
// 6) Полиморфизм. Виртуальные функции.

#include "string.h"
#include "iostream"
#include <sstream>
#include <vector>
#include <array>
#include <stdio.h>
#include <conio.h>

using namespace std;


class Sentence {
    
    protected:
    	
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
    
    	
        Sentence(const Sentence& other) {
    		sentence = other.sentence;
    	}
    	
    	
        virtual void Number_Of_Letters();
    
    	
        void Print() {
    		cout << this->sentence << endl;
    	}
    
};


void Sentence :: Number_Of_Letters() {
	
    cout << endl << "Подсчет количества букв:" << endl;
    int count_letters = 0;
    char Space(' ');
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != Space) {
            count_letters++;
        }
    }
    
    cout << "Исходное предложение: " << sentence << endl;
    cout << "Количество букв: " << count_letters << endl;
}


class Do_Have_Letters : public  Sentence {
    
    public:
    	
        void Number_Of_Letters() override {
    		cout << "В предложении есть буквы!\n" <<"Само предложение - " << sentence <<endl;
    	}
};


int main() {
	setlocale(LC_ALL, "RUS");
	
	Sentence withoutParams;
	Sentence withParams("One1 Two2 Three333");
	
	withParams.Print();
	withParams.Number_Of_Letters();
	
	Do_Have_Letters do_have_letters;
	Sentence* pointer = &do_have_letters;
	pointer->Number_Of_Letters();

    cout << endl;
	cout << endl <<"Завершение программы" << endl;
	cout << endl;
	
	return 0;
};
