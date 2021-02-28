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
// 7) Абстрактный класс.

#include <iostream>

using namespace std;

class Weather {
    
    private: 
    	
    	virtual char* sentence() {
    		return (char*) " - базовый класс.";
    	}
    	
    public:
    
    	void weather() {
    		cout << "Сегодня погода " << sentence() << endl;
    	}
    	
    	 
    	 ~Weather() {
    		cout << "Сработал деструктор" << endl;
    	}
};

class Good_Weather : public Weather {
    
    private:
    
    	char* sentence() {
    		return (char*)"хорошая.";
    	}
    };

class Bad_Weather : public Weather {
    
    private:
    
    	char* sentence() {
    		return (char*)"плохая.";
    	}
    };

class Average_Weather : public Weather {
    
    private:
    
    	char* sentence() {
    		return (char*)"средняя.";
    	}
};


int main() {
	setlocale(LC_ALL, "RUS");
	Weather base_weather;
	base_weather.weather();
	
	cout << endl;
	
	Good_Weather good_weather;
	Bad_Weather bad_weather;
	Average_Weather av_weather;
    
	good_weather.weather();
	bad_weather.weather();
	av_weather.weather();
	
	cout << endl;
	cout << endl <<"Завершение программы" << endl;
	cout << endl;
	
	return 0;
}
