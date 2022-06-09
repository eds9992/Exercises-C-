#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

/*char last_letter(string word)
{
    return word[word.length()-1];
}*/

string MySubString(string str, int start, int NumChars)
{
    string s = "";
    int count = 0;
    while(count < NumChars)
    {
        s += str[start];
        ++start;
        ++count;
    }
    return s;
}

string Replace(string str, int start, int NumChars, string newstr)
{
    string s = str;
    int count = 0;
    int i = 0;
    while(count < NumChars)
    {
        str[start] = newstr[i];
        ++start;
        ++count;
        ++i;
    }
    for (int i = start-1; i < str.length(); ++i)
    {
        s[i] = str[i];
    }
    return str;
}

int main()
{
    /*string word = "Hello ";
    //char first_letter = word[0]; //Use char for letters only
    cout << word << endl;
    int index = 0;

    cout << "For Loop: ";
    for (int i = 0; i < word.length(); ++i) //length is a built function for string
    {
        cout << word[i];
    }

    cout << endl << "While Loop: ";
    while (index < word.length())
    {
        cout << word[index];
        ++index;
    }

    cout << endl << "Function:" << last_letter(word);

    cout << word.find(" ") << endl;

    for (char c : word)
    {
        cout << c;
    }

    string greet = word + "world!";
    cout << endl << greet << endl;
    cout << isalpha(word[0]) << endl;*/
    string word = "Hello World";
    string newword = "Eric ";
    cout << word << endl;;
    cout << MySubString(word, 3, 9) << endl;
    word.replace(5, 6, " Eric");
    cout << word << endl;
    word = Replace(word, 0, 4, newword);
    cout << word;
    return 0;
}

//Homework: write a custom find function that find the nth occurance. Return -1 if no occurance
//Write custom find function that can start anywhere in string
//Using [] operator, write a function that reverses a string
//Write a function that count occurances of a character in a string
