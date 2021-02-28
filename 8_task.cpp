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
// 8) Шаблоны классов. 

#include <iostream>

using namespace std;


template<typename T>
class Template_Class {
    
    public:
    
    	Template_Class(T value) {
    		this->value = value;
    	}
    	
    	
    	void Data_Output() {
    		cout << value << endl;
    	 }
    	 
    private:
    	
    	T value;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	int a = 1;
	Template_Class<int> integer_data(a);
	integer_data.Data_Output();
	
	
	double b = 2.3456;
	Template_Class<double> double_data(b);
	double_data.Data_Output();
	

	char c = ('7');
	Template_Class<char> char_data(c);
	char_data.Data_Output();


	string d = ("Some string");
	Template_Class<string> string_data(d);
	string_data.Data_Output();
	
	cout << endl;
	cout << endl <<"Завершение программы" << endl;
	cout << endl;
	
	return 0;
}
