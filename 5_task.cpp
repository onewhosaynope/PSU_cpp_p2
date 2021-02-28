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
// 5) Наследование.

#include "string.h"
#include "iostream"
#include <sstream>
#include <vector>
#include <array>
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <stdlib.h>

using namespace std;

class Sentence {

	protected:
		
		string sentence;
		
	public:
		
		Sentence() { 
			sentence = "Hello!, wo/rld!"; 
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
			cout << this -> sentence << endl;
		}


		void Add_Word() {
				cout << endl << "Добавление слова:" << endl;
				string word_to_add;
				int begin_end = 1;
				
				cout << "Введите слово которое вы хотите добавить: " << endl; 
				cin >> word_to_add;
				
				cout << "Добавить слово в начало текста - 1, если в конец - 2\n" << endl; 
				cin >> begin_end;
				
				switch(begin_end) {
					case 1:
						word_to_add = word_to_add;
						sentence = word_to_add + " " + sentence;
						cout << sentence << endl;
						break;
					case 2:
						sentence += " " + word_to_add;
						cout << sentence << endl;
						break;
					default:
						cout << "Неправильно введено число" << endl;
						break;
				}
			}

		
		void Delete_Word() {
				cout << endl << "Удаление слова: " << endl;
				string new_sentence = sentence;
				char word_to_delete(' ');
				int count_spaces = 0;
				int total_spaces = 0;

				cout << "Введите номер слова которое вы хотите удалить: " << endl; 
				cin >> total_spaces;

				total_spaces - 2;
				
				for (int i = 0; i < new_sentence.length(); i++) {
					if (new_sentence[i] != word_to_delete) {
						count_spaces == count_spaces;
					} else {
						count_spaces++;
						if (count_spaces == total_spaces) {
							new_sentence[i++];
						}
						while (new_sentence[i] != word_to_delete && new_sentence[i] != NULL) {
							new_sentence.erase(i, 1);
						}
					}
		
				}
				cout << "Исходное предложение: " << sentence << endl;
				cout << "Предложение с удаленным словом: " << new_sentence << endl;
			}

		
		
		void Trailing_sign() {
			char Tr_sign('!');
			int stop = 0;
			for (int i = 0; i < sentence.length(); i++)
			{
				if (sentence[i] == Tr_sign)
				{
					stop = i;
					i = sentence.length();
				}

			}
			for (int i = 0; i < stop; i++)
				cout << sentence[i];
		}
};


void Sentence::Number_Of_Letters() {
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


class Inheritance_From_Sentence : public Sentence {
	
	char punctuation;
	
    public:
    	
    	Inheritance_From_Sentence(char pun = ('!')) { 
    	    punctuation = pun; 
    	    
    	};
    	
    	
		Inheritance_From_Sentence(Inheritance_From_Sentence& M) : Sentence(M) { 
    	    punctuation = M.punctuation; 
    	    
    	};
    	
    	
		void Trailing_sign() {
    		switch(punctuation) {
                    case '.':
                        cout << "Белый " << sentence << endl;
                        break;
                    case '!':
                        cout << "Желтый " << sentence << endl;
                        break;
                        
                    case '?':
                        cout << "Зеленый " << endl;
                        break;
                    
                    default:
                        cout << "Неизвестный символ" << endl;
                        break;
                }
    	}
};

class Do_Have_Letters : public  Sentence {
    
	public:
    	
		void Number_Of_Letters() override {
    		cout << "В предложении есть буквы!" << endl;
    	}
};


int main() {
	
	setlocale(LC_ALL, "RUS");
	
	Sentence withoutParams;
	Sentence withParams("One1 Two2 Three333");
	
	Sentence ab = withParams;
	
	cout << endl;
	
	ab.Print();
	withParams.Print();
	
	cout << endl;
	
	withParams.Number_Of_Letters();
	
	cout << endl;
	
	withoutParams.Trailing_sign();
	
	cout << endl;
	
	Inheritance_From_Sentence nasl;
	nasl.Trailing_sign();
	
	cout << endl;
	
	Do_Have_Letters conc_letters;
	Sentence* pointer = &conc_letters;
	pointer->Number_Of_Letters();

	cout << endl;
	cout << endl <<"Завершение программы" << endl;
	cout << endl;

	return 0;
};
