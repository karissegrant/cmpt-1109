#include <iostream>

using namespace std;

void draw_right_triangle(int rows, char x)
{
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j <= i; j++)
        cout << "*";
    cout << endl;
}
}

void draw_left_triangle(int rows, char x)
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
            cout << " ";

        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << endl;
    }
}

void draw_bottom_left(int rows, char x)
{
    for (int i = 4; i >= 1; i--)
    {
        for (int k = i - 0; k >= 0; k--)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
}

void draw_bottom_right(int rows, char x)
{
    for (int i = 4; i <= 1; i--)
    {
        for (int k = i - 0; k >= 0; k--)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
}

int main()
{

    draw_right_triangle(4, '*');
    draw_left_triangle(4, '*');
    draw_bottom_left(4, '*');

    return -1;
}