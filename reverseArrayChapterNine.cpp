// Reverse Array
// Chapter 9 Challenge #
// Andres Lefeld
#include <iostream>
using namespace std;

int *reverseArray(int [], const int);

int main()
{
    const int SIZE = 8;
    int originalArray[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int reverseArray[SIZE];

    cout << "The numbers in the array are:\n";

    for (int count = 0; count < SIZE; count++)
    {
        cout << originalArray[count] << endl;
    }

    *reverseArray = reverseArray(originalArray, SIZE);

    cout << reverseArray[0];

    return 0;
}

int reverseArray(int originalArray[], const int SIZE)
{
    int *ptr = nullptr;
    ptr = originalArray;

     for (int count = 0; count < SIZE; count++)
    {
        ptr++;
    }

    for (int count = 0; count < SIZE; count++)
    {
        ptr--;
        cout << *ptr << endl;
    }

    return set;
}
