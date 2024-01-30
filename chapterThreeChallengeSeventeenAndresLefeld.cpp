// Chapter 3 Programming Challenge #17
// Andres Lefeld

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // set variables for user inputs.
    // set limit for number to 3 digit numbers.
    // set both number of the addition to be random when code is ran.

    const int MIN_VALUE = 100;
    const int MAX_VALUE = 999;
    double userAnswer;
    unsigned seed = time(0);
    srand(seed);
    double randomNumberOne;
    double randomNumberTwo;

    randomNumberOne = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    randomNumberTwo = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;

    // Display the randomized addition of two number and wait for user input.

    cout << setw(5) << randomNumberOne << endl << "+ "<< randomNumberTwo << endl << "------" << endl;
    cin >> userAnswer;

    // Using "if" statement to determine if the answer inputed was right or wrong.
    // if wrong the real answer will be displayed.

    double realAnswer;
    realAnswer = randomNumberOne + randomNumberTwo;

    if (userAnswer == realAnswer)

    cout << "You are a GENIUS!!!";

    else

    cout << "WRONG! Right Answer is:" << endl << setw(5) << randomNumberOne << endl << "+ "
    << randomNumberTwo << endl << "------" << endl << setw(5) << realAnswer;


    return 0;
}
