#include <iostream>

using namespace std;

void full_triangle_top(int rows, char x)
{
    for (int i = 0; i < 4; i++)
    {
        for (int k = 1; k <= (4 - i); k++)

            cout << " ";

       for (int j = 1; j <= i; j++) 

            cout << x;

        for (int y = 0; y <= i; y++)

            cout << x;

        cout << endl;
    }

}

void diamond_bottom(int rows, char x)
{
for (int i = rows; i >= 1; i--)
{
    for (int k = rows; k >= i - 1; k--)
        cout << " ";
    for (int y = i - 1; y > 0; y--)
        cout << x;
    for (int j = i; j > 0; j--)
        cout << x;
    cout << endl;
}
}

int main()
{

    full_triangle_top(4, '*');
    diamond_bottom(3, '*');
    return -1;
}

