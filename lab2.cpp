#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;

    do
    {
        cout << "a << b << c";

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

                cout << "x1 = " << x1 << endl;
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

        cout << "Please enter your choice!" << endl;
        cout << "To solve a quadratic equation, enter 1" << endl;
        cout << "Enter anthing else to exit!" << endl;
        cin >> x;
    } while (x == 1);

    cout << "Bye!" << endl;
    return 0;

}