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

void half_diamond(int rows, char x)
{
    half_top(rows, x);
    half_bottom(rows - 1, x);
}

void instructions()
{
    cout << "In the arguments of the function, ask for the character you wish the shapes to be comprised of, and the shape you want to draw.\n";

    cout << endl;
}

int menu()
{
    cout << "Enter 1) triangle, 2) diamond, 3) sideways triangle, 4) upside down triangle.\n";
    int num{};
    std::cin >> num;

    return num;

}

void draw_shape(int x)
{
    if (x == 1) 
    {
        draw_triangle(4, '*');
    }
    else if (x == 2)
    {
        draw_diamond(4, '*');
    }
    else if (x == 3)
    {
        half_diamond(4, '*');
    }
    else if (x == 4)
    {
        draw_bottom(4, '*');
    }
    

}

    void main_draw()
    {
            int choice;

            instructions();
            choice = menu();
            if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
            {
            
                cout << "You requested to quit, bye!\n";
           
         
            }

            draw_shape(choice);
            
         

           
    }

    

int main()
{
    main_draw();
   /* instructions();
    menu();*/
   // draw_triangle(4, '*');
   // add_bottom(3, '*');
   // draw_diamond(4, '*');
   // draw_bottom(4, '*');
   // half_top(4, '*');
   // half_bottom(3, '*');
   // half_diamond(4, '*');
    
    return -1;
}

