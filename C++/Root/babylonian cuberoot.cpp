#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 1, average, s;
    cout << "Cuberoot a Number: ";
    cin >> s;
    for ( ; ; )
    {
        double t = x * x;
        average = (x + s / t) / 2;
        if (x == average)
        {
            cout << "Answer is : " << average << endl;
            return 0;
        }
        x = average;

    }
}
