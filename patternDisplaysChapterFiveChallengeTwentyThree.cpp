// Pattern Displays
// Chapter Five Challenge #23
// Andres Lefeld

#include <iostream>
using namespace std;

int main()
{
    char plusIcon = '+';

    for (int a = 0; a < 1; ++a)

    {
        cout << plusIcon;

        for (int b = 0; b < 10; ++b)
        {
            cout << plusIcon << endl;

        }

    }

     for (int a = 0; a < 1; --a)

     {
        cout << plusIcon;

        for (int b = 0; b < 10; --b)
        {
            cout << plusIcon << endl;

        }

     }


    return 0;
}
