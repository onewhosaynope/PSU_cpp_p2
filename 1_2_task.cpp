/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Sentence {
    private:
        string sentence;
    public:
        Sentence() {
            sentence = "Hello, world!";
            cout << endl << "Конструктор без параметров: ";
        }
        
        Sentence(string str) {
            sentence = str;
            cout << endl << "Конструктор с параметрами: ";
        }
        
        Sentence(const Sentence& other) {
            sentence = other.sentence;
        }
        
        void Print() {
            cout << endl << this->sentence << endl;
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
        
        void Number_Of_Letters() {
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
        
        void Number_Of_Words() {
            cout << endl << "Подсчет количества слов:" << endl;
    		char Space(' ');
    		int	count_word = 0, new_const = 0;
    
    
    		for (int i = 0; i < sentence.length(); i++) {
    			if (sentence[i] == Space && sentence[i + 1] == Space) {
    				sentence[i++];
    				count_word++;
    			} else {
    				if (sentence[i] == Space) {
    					count_word++;
    				}
    			}
    		}
    		if (sentence[0] == Space) {
    			count_word--;
    		}
    
    		new_const = sentence.length();
    		if (sentence[new_const - 1] != Space) {
    		    count_word++;
    		}
    		cout << "Исходное предложение: " << sentence << endl;
    		cout << "Количество слов: " << count_word << endl;

        }
        
        void Longest_Word() {
            cout << endl << "Подсчет длины слов:" << endl;
    		char Space(' ');
    		int mass[10];
    		int start_id, count_letters = 0, max_count = 0, count_letters_2 = 0, otd;
    		int j = 0;;
    		for (int i = 0; i < sentence.length(); i++) {
    			otd = sentence[i];
    			count_letters = 0;		
    			while (sentence[i] != Space && i < sentence.length()) {
    				sentence[i++];
    				count_letters++;
    				otd = sentence[i - count_letters];
    			}
    			if (otd != Space) {
    
    				mass[j] = count_letters;
    				if (mass[j - 1] < mass[j]) {
    					max_count = i - count_letters;
    				}
    				mass[j++];
    			}
    		}
    		cout << "Исходное предложение: " << sentence << endl;
    		cout << endl << "Самое длинное слово: " << endl;
    		for (int i = max_count; i < sentence.length(); i++) {
    			while (sentence[i] != Space && i < sentence.length()) {
    				cout << sentence[i];
    				sentence[i++];
    			}
    		}
    	}

};


int main() {
	setlocale(LC_ALL, "RUS");
	
	Sentence sent_without_params;
	sent_without_params.Print();
	
	Sentence sent("word1 word22 word333");
	sent.Print();
	
	sent.Add_Word();
	sent.Delete_Word();
	sent.Number_Of_Letters();
	sent.Number_Of_Words();
	sent.Longest_Word();
	
	return 0;
};

