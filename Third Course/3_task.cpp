#include "string.h"
#include "iostream"
#include <sstream>
#include <vector>
#include <array>

using namespace std;

class sentence
{
private:
    string sentence;

public:
    Sentence() { sentence = "Hello, world"; }
    Sentence(string STR) { sentence = STR; }

    void countLetters()
    {
        int count_letters = 0;
        for (int i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] != ' ')
                count_letters++;
        }
        cout << "Количество букв: " << count_letters << "\n";
    }

    void countWords()
    {
        int count_words = 1;
        for (int i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] == ' ')
                count_words++;
        }
        cout << "Количество слов: " << count_words << "\n";
    }

    void searchWord()
    {
        string word_to_find;
        int check_if_end = 0;
        cout << "Введите слово для поиска ";
        getline(cin, word_to_find);
        int word_to_find_len = word_to_find.length();
        int orig_word_len = sentence.length();
        cout << "Слово которое ищем: " << word_to_find << endl;
        for (int i = 0, j = 0; i < orig_word_len - 1, j < word_to_find.length(); i++)
        {
            if (sentence[i] == word_to_find[j])
            {
                check_if_end++;
                j++;
            }
            else
            {
                j = 0;
                check_if_end = 0;
            }
            if ((check_if_end == word_to_find_len) && (sentence[i + 1] == ' ') || (sentence[i + 1] == '\0') && ((check_if_end == word_to_find_len)))
            {

                cout << "Слово присутствует!";
                break;
            }
            if (i + 1 == '\0' || j + 1 > word_to_find.length())
                cout << "Слово отсутствует!";
            if (i == orig_word_len - 1)
            {
                cout << "Слово отсутствует!";
                break;
            }
        }
    }

    void sentenceEquality()
    {
        string sentence_2;
        cout << "\nВведите предложение ";
        getline(cin, sentence_2);
        if (sentence.length() != sentence_2.length())
        {
            cout << "Предложения не равны!";
            return;
        }
        else
            for (int i = 0; i < sentence.length(); i++)
            {
                if (sentence[i] != sentence_2[i])
                {
                    cout << "Предложения не равны!";
                    break;
                }
                if (i + 1 == sentence.length())
                {
                    cout << "Предложения равны!";
                }
            }
    }
};

void main()
{
    setlocale(LC_ALL, "RUS");
    string sentence;
    cout << "Введите предложение ";
    getline(cin, sentence);
    Sentence Pr;
    Sentence Pr2(sentence);
    Pr2.countLetters();
    Pr2.countWords();
    Pr2.searchWord();
    Pr2.sentenceEquality();
}
