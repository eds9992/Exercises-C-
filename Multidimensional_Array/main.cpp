#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    const unsigned rows = 3;
    const unsigned cols = 3;
    int grades[rows][cols] = {{70, 71, 72},
                              {80, 81, 82},
                              {90, 91, 92}};
    int sum =grades[0][0] + grades[0][1] + grades[0][2];
    unsigned row = 0;
    for (unsigned row = 0; row < rows; ++row)
    {
        for (unsigned col = 0; col < cols; ++col)
        {
            sum += grades[row][col];
        }
        cout << sum << endl;
        sum = 0;
    }
    cout << sum;
    return 0;
}
