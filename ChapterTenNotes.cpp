// Backward String & Word Counter
// Chapter Ten  #2 & #3
// 10-14 (counter)
#include <iostream>
#include <string>
using namespace std;

void backwardWord (char [], int);

main()
{
    int SIZE = 50;
    char arr[SIZE];

    cout << "Enter a word: ";
    cin.getline(arr, SIZE);

    backwardWord(arr, SIZE);

    return 0;

}

backwardWord(char arr[], int SIZE)
{
    char *newArr = new char[SIZE];
    int position = SIZE;

    for(int x = 0; x < SIZE; x++)
    {
        arr[position] = newArr[x];
        position--;
    }
}
