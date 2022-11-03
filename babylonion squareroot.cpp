#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 1, average, s;
    cout << "Squareroot a Number: ";
    cin >> s;
    for ( ; ; )
    {
        average = (x + s / x) / 2;
        if (x == average)
        {
            cout << "Answer is : " << average << endl;
            return 0;
        }
        x = average;
    }
}