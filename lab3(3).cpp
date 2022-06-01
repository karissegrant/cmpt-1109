#include <iostream>

using namespace std;

void draw_triangle(int rows, char x)
{
    for (int i = 0; i < rows; i++)
    {
       for (int k = 1; k <= (rows - i); k++)

           cout << " ";

       for (int j = 1; j <= i; j++) 

           cout << x;

        for (int y = 0; y <= i; y++)

            cout << x;

        cout << endl;
    }

}

void add_bottom(int rows, char x)
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

void draw_diamond(int rows, char x)
{
    draw_triangle(rows, x);
    add_bottom(rows - 1, x); 
}

void draw_bottom(int rows, char x)
{
    for (int i = rows; i >= 1; i--)
    {
       for (int k = rows; k >= i; k--)

           cout << " ";

        for (int y = i - 1; y > 0; y--)

           cout << x;

       for (int j = i; j > 0; j--)

             cout << x;

        cout << endl;
    }
}

void half_bottom(int rows, char x)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)

            cout << x;

        cout << endl;
    }
}

void half_top(int rows, char x)
{
    for (int i = 0; i < rows; i++)
    {
        for (int y = 0; y <= i; y++)

            cout << x;

        cout << endl;
    }
}

void half_triangle(int rows, char x)
{
    half_top(rows, x);
    half_bottom(rows - 1, x);
}
int main()
{

    draw_triangle(4, '*');
    add_bottom(3, '*');
    draw_diamond(4, '*');
    draw_bottom(4, '*');
    half_top(4, '*');
    half_bottom(3, '*');
    half_triangle(4, '*');
    
    return -1;
}

