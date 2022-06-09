#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int square(int number) //return-type function-name(parameter list)
{
    int squared = number * number;
    return squared;
}

double CelToFahr(double celTemp)
{
    double Fahr = celTemp * (9.0 / 5.0) + 32.0;
    return Fahr;
}

int Maximum(int number1, int number2)
{
    if (number1 >= number2)
    {
        return number1;
    }
    else
    {
        return number2;
    }
}

int Minimum(int number1, int number2)
{
    if (number1 <= number2)
    {
        return number1;
    }
    else
    {
        return number2;
    }
}

bool IsGreaterThan100(int number)
{
    return number > 100;
}
bool IsLessThan100(int number)
{
    return number < 100;
}

int main()
{
    /*int base = 2;
    int exp = 3;
    cout << pow(base, exp) << endl; //pow is a value-returning function
    int n = pow(base, exp);

    string name;
    cout << "Enter your name: ";
    getline(cin, name); //getline is a void function
    int num = 2;
    cout << square(num); //function call

    double tempC;
    cout << "Enter a temperature in Celsius: ";
    cin >> tempC;
    double Fahr = CelToFahr(tempC);
    cout << tempC << " converted to Fahrenheit is " << Fahr;*/

    /*int num1 = 11;
    int num2 = 12;
    cout << Maximum(num1, num2) << " is greater than " << Minimum(num1, num2) << endl;
    int sum = Maximum(num1, num2) + Minimum(num1, num2);*/

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (IsGreaterThan100(num))
    {
        cout << num << " is greater than 100";
    }
    else if (IsLessThan100(num))
    {
        cout << num << " is less than 100";
    }
    else
    {
        cout << num << " equals 100";
    }
    return 0;
}
