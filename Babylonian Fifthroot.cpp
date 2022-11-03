#include <iostream>
using namespace std;
int main()
{
    double x = 1, average, s;
    cout << "Fifthroot a Number: ";
    cin >> s;
    for ( ; ; )
    {
        double t = x * x*x*x;
        average = (4*x + s / t) / 5;
        if (x == average)
        {
            cout << "Answer is : " << average << endl;
            return 0;
        }
        x = average;

    }
}
