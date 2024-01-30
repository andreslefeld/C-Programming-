// Pointer Rewrite
// Chapter 9 Challenge #5
// Andres Lefeld
#include <iostream>
using namespace std;

int doSomething(int * , int *);

int main()
{
    int x;
    int y;
    int *ptr = nullptr;
    int *ptr2 = nullptr;
    int answer;

    x = 10;
    y = 2;

    ptr = &x;
    ptr2 = &y;

    cout << "x twice: " << x << " " << *ptr << endl;
    cout << "y twice: " << y << " " << *ptr2 << endl;

    answer = doSomething(ptr, ptr2);

    cout << "x twice: " << x << " " << *ptr << endl;
    cout << "y twice: " << y << " " << *ptr2 << endl;

    cout << "x + y = " << answer;


}

int doSomething(int *ptr, int *ptr2)
 {
    int temp = *ptr;
    *ptr = *ptr2 * 10;
    *ptr2 = temp * 10;
    return *ptr + *ptr2;
 }
