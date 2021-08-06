
#include <iostream>
#include <String>

using namespace std;

int main()
{
    cout << "Right triangle using (WHILE) Statement";
    cout << "\n_______________________________________\n";

    int height;

    cout << "\nEnter height for right triangle: ";
    cin >> height;

    int i = 0, t;

    while (i<height)
    {
        t = 0;
        while (t <= i)
        {
            cout << " *";
            t = t + 1;
        }
        cout << endl;
        i = i + 1;

    }

    cout << "Right triangle using (FOR) Statement";
    cout << "\n_______________________________________\n";

    int height1;

    cout << "\nEnter height for right triangle: ";
    cin >> height1;


    for (int i=0;i<height1;i++)

    {
        for (int t = 0;t <= i ; t++)
        {
            cout << " *";
        }
        cout << endl;
    }


    cout << "Inverted Equilateral triangle using (DO-WHILE) Statement";
    cout << "\n_______________________________________\n";

    int height2;

    cout << "\nEnter height for right triangle: ";
    cin >> height2;

    int x, s;
    int y = 0;

    do
    {
        x = height2 - y;
        s = 0;
        if (y != 0)
        {
            do
            {
                cout << " ";
                s++;
            } while (s < y);
        }
        if (x != 0)
        {
            do
            {
                cout <<"*" <<  " ";
                x--;
            } while (x > 0);
        }

        cout << endl;
        y++;

    } while (y <= height2);
}
 
