/*The purpose of this lab is to design, implement, and test a series of classes derived from an abstract Employee class.*/

#include <iostream>

using namespace std;

/*First, create an Employee class. The class will have two member variables: theName and payRate.
Create setters and getters for both member variables.
Create a virtual pay() function that takes the hours worked as an argument.
Make the class abstract by specify the pay() function as a pure, virtual function.*/

class Employee
{
protected:
    string theName;
    double payRate;
public:
    Employee(string, double);
    void setTheName(string);
    string getTheName();
    void setPayRate(double);
    double getPayRate();
    virtual void pay(double) = 0;
};

Employee::Employee(string name, double rate)
{
    theName = name;
    payRate = rate;
}

void Employee::setTheName(string name)
{
    theName = name;
}

string Employee::getTheName()
{
    return theName;
}

void Employee::setPayRate(double rate)
{
    payRate = rate;
}

double Employee::getPayRate()
{
   return payRate;
}

/*Create an HourlyEmployee class that is derived from Employee.
This class will add an hourlyRate member variable to the member variables it inherits.
Define the pay() function so that it can correctly calculate pay for an hourly worker.*/

class HourlyEmployee : public Employee
{
protected:
    double hourlyRate;
public:
    HourlyEmployee(string, double, double);
    double getHrRate();
    virtual void pay(double);
};

HourlyEmployee::HourlyEmployee(string name, double rate, double hours) : Employee(theName, payRate)
{
    theName = name;
    payRate = rate;
    hourlyRate = rate * hours;
}

double HourlyEmployee::getHrRate()
{
    return hourlyRate;
}

void HourlyEmployee::pay(double hours)
{
    cout << theName << "'s rate: ";
    cin >> payRate;
    cout << "Hours logged for " << theName << ": ";
    cin >> hours;
    double amount = hours * payRate;
    cout << theName << " paid $" << amount << " for " << hours << " hours" << endl;
}

/*Create a SalariedEmployee class that is derived from Employee.
This class will add a salary member variable to the member variables it inherits and the payRate member variable should be set to 0.
Define the pay() function so that it can correctly calculate pay for a salaried worker.*/

class SalariedEmployee : public Employee
{
protected:
    double payRate = 0;
    double salary;
public:
    SalariedEmployee(string, double);
    double getSalRate();
    virtual void pay(double);
};

SalariedEmployee::SalariedEmployee(string name, double salRate) : Employee(theName, payRate)
{
    theName = name;
    salary = salRate;
}

double SalariedEmployee::getSalRate()
{
    return salary;
}

void SalariedEmployee::pay(double annualSalary)
{
    cout << theName << "'s Salary: ";
    cin >> annualSalary;
    double amount = annualSalary / 52;
    cout << theName << " paid $" << amount << " for two weeks" << endl;
}

/*In your test program, test all of these features by creating at least one object of each type (hourly and salary).
Then store these objects in an array of Employee* type and use polymorphism to correctly display the pay for each type of employee. */

int main()
{
    double hours;
    double pay;
    HourlyEmployee *he1 = new HourlyEmployee("Bill", pay, hours);

    double salary;
    SalariedEmployee *se1 = new SalariedEmployee("Bob", salary);

    Employee *employee[2];
    employee[0] = he1;
    employee[1] = se1;
    for(int i = 0; i < 2; ++i)
    {
        employee[i]->pay(0);
        cout << endl;
    }
    return 0;
}
