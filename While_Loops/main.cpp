#include <iostream>
#include <string>
#include <fstream> //Two types: ofstream(output file, creates file in directory) and ifstream(input file,

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("numbers.txt"); // Use "\\" for directory paths, ex. C:\\User\\Documents
    outfile << 1 << endl;
    outfile << 2 << endl;
    outfile << 3 << endl;
    outfile << 4 << endl;
    outfile.close();
    ifstream infile;
    infile.open("Numbers.txt");
    int sum = 0;
    int number;
    while (infile >> number)
    {
        cout << number << endl;
        sum += number;
    }
    cout << "sum is: " << sum << endl;
    infile.close();
    return 0;
}
