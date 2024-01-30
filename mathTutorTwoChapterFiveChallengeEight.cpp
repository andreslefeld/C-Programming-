// Math Tutor Updated
// Chapter 5 Programming Challenge #8
// Andres Lefeld

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 99;
    double userAnswer;
    unsigned seed = time(0);
    srand(seed);
    int choice;
    double randomNumberOne;
    double randomNumberTwo;
    double realAnswer;

    randomNumberOne = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    randomNumberTwo = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;


    cout << "Math Tutor\n"
         << "1. Addition\n"
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division\n"
         << "5. Quit\n";

    cin >> choice;

    while (choice < 1 || choice > 5)

        {
          cout << "Please select either 1, 2, 3, 4, or 5." << endl;

          cout << "Math Tutor\n"
               << "1. Addition\n"
               << "2. Subtraction\n"
               << "3. Multiplication\n"
               << "4. Division\n"
               << "5. Quit\n";

          cin >> choice;

        }

    switch (choice)

        {
           case 1: cout << setw(4) << randomNumberOne << endl << "+ "<< randomNumberTwo << endl << "------" << endl;
                   cin >> userAnswer;

                   realAnswer = randomNumberOne + randomNumberTwo;

                   if (userAnswer == realAnswer) cout << "You are a GENIUS!!!" << endl;

                   else cout << "WRONG! Right Answer is:" << endl << setw(5) << randomNumberOne << endl << "+ "
                            << randomNumberTwo << endl << "------" << endl << setw(5) << realAnswer << endl;
                   main();
                   break;

           case 2: cout << setw(4) << randomNumberOne << endl << "- "<< randomNumberTwo << endl << "------" << endl;
                   cin >> userAnswer;

                   realAnswer = randomNumberOne - randomNumberTwo;

                   if (userAnswer == realAnswer) cout << "You are a GENIUS!!!" << endl;

                   else cout << "WRONG! Right Answer is:" << endl << setw(5) << randomNumberOne << endl << "- "
                            << randomNumberTwo << endl << "------" << endl << setw(5) << realAnswer << endl;
                   main();
                   break;

           case 3: cout << setw(4) << randomNumberOne << endl << "x "<< randomNumberTwo << endl << "------" << endl;
                   cin >> userAnswer;

                   realAnswer = randomNumberOne * randomNumberTwo;

                   if (userAnswer == realAnswer) cout << "You are a GENIUS!!!" << endl;

                   else cout << "WRONG! Right Answer is:" << endl << setw(5) << randomNumberOne << endl << "x "
                            << randomNumberTwo << endl << "------" << endl << setw(5) << realAnswer << endl;
                   main();
                   break;

           case 4: cout << setw(4) << randomNumberOne << endl << "% "<< randomNumberTwo << endl << "------" << endl;
                   cin >> userAnswer;

                   realAnswer = randomNumberOne / randomNumberTwo;

                   if (userAnswer == realAnswer) cout << "You are a GENIUS!!!" << endl;

                   else cout << "WRONG! Right Answer is:" << endl << setw(5) << randomNumberOne << endl << "% "
                            << randomNumberTwo << endl << "------" << endl << setw(5) << realAnswer << endl;
                   main();
                   break;

           case 5: return 0;

        }



}
