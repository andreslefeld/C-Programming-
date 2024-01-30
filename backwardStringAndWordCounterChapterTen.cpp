// Backward String & Word Counter
// Chapter Ten  #2 & #3
// Gabriel Albarran & Andres Lefeld
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void backwardWord (char *);
int getWords( const char *, char);

main()
{
    int SIZE = 100;
    char arr[SIZE];
    char *arrPtr = nullptr;

    arrPtr = arr;

    cout << "Enter a word: ";
    cin.getline(arr, SIZE);



    backwardWord(arrPtr);

    char sentence[SIZE];
    char space;

    cout << "Enter a sentence: \n";
    cin.getline(sentence,SIZE);

    int number_of_words = getWords(sentence, space);
    cout << "Your sentence have ";
    cout << number_of_words << " words. ";

    return 0;

}

void backwardWord(char *arrPtr)
{
    int SIZE = strlen(arrPtr);

    cout << "Your word backwards: ";

    for(int x = SIZE -1; x >= 0; x--)
    {
       cout << arrPtr[x];
    }

    cout << endl;
}

int getWords(const char *h, char ch)
{
    int spaces = 0;

    while (*h != '\0')
    {
        if (*h == ' ')
            spaces++;
        h++;
    }

    return (spaces + 1);
}
