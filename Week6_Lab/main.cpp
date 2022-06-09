/*Create a class that stores a person's full name.
Create three constructors - one for all member variables, one for just the first and last name, and a default constructor.
Write getters and setters for all member variables.
Write a member function that allows the user to set the full name.
Write a member function that displays the name in first middle last format.
Write a member function that displays the name in last, first middle format.
Create separate declaration and definition sections and be sure to test all constructors and member functions.*/

#include <iostream>

using namespace std;

class Name
{
private:
    string fName, mName, lName;
public:
    Name(string, string, string);
    Name(string, string);
    Name();
    void displayFML();
    void displayLFM();
    void setFullName();
    void setfName(string);
    string getfName();
    void setmName(string);
    string getmName();
    void setlName(string);
    string getlName();

};

Name::Name(string f, string m, string l)
{
    fName = f;
    mName = m;
    lName = l;
}

Name::Name(string f, string l)
{
    fName = f;
    lName = l;
}

Name::Name()
{
    fName = "";
    mName = "";
    lName = "";
}

void Name::displayFML()
{
    cout << fName << " " << mName << " " << lName << endl;
}

void Name::displayLFM()
{
    cout << lName << ", " << fName << " " << mName << endl;
}

void Name::setFullName()
{
    string Name = fName + mName + lName;
    cout << "Enter your name: ";
    getline(cin, Name);
    cout << Name;
}

void Name::setfName(string f)
{
    fName = f;
}

void Name::setmName(string m)
{
    mName = m;
}

void Name::setlName(string l)
{
    lName = l;
}



int main()
{
    Name aName("David", "J.", "Jameson");
    aName.displayFML();
    aName.displayLFM();

    cout << endl;

    Name someName("John", "Jackson");
    someName.displayFML();
    someName.displayLFM();

    cout << endl;

    Name yourName("", "", "");
    yourName.setFullName();
    return 0;
}
