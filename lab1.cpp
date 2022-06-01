#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double x1, x2, d;

    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Not quadratic >:(" << endl;

        if (b == 0)
        {
            cout << "a = 0, b = 0, bye!";

        }

        else
        {
            x1 = (-1 * c / b);

            cout << "x1\n" << x1 << endl;
        }
    }

    else
    {
        d = b * b - 4 * a * c;
        if (d < 0)
        {
            cout << "No real answer. Fails to take square root of negative value.";
        }
        else
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);

            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

}