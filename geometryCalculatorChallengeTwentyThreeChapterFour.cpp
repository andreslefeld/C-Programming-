// Geometry Calculator
// Chapter 4 Programming Challenge #23
// Andres Lefeld

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  int choice;
  double circleRadius;
  double circleArea;
  double pi;
  double rectangleArea;
  double rectangleLength;
  double rectangleWidth;
  double triangleLength;
  double triangleHeight;
  double triangleArea;

  pi = 3.14159;

  cout << "Geometry Calculator\n"
       << "1. Calculate the Area of a Circle\n"
       << "2. Calculate the Area of a Rectangle\n"
       << "3. Calculate the Area of a Triangle\n"
       << "4. Quit\n";

  cin >> choice;

  while (choice < 1 || choice > 4)

    {
      cout << "Please select either 1, 2, 3 or 4." << endl;

      cout << "Geometry Calculator\n"
           << "1. Calculate the Area of a Circle\n"
           << "2. Calculate the Area of a Rectangle\n"
           << "3. Calculate the Area of a Triangle\n"
           << "4. Quit\n";

      cin >> choice;

    }


  switch (choice)

   {
       case 1: cout << "What is the Radius of the Circle?\n" ;
               cin >> circleRadius;

               circleArea = pi * (circleRadius * circleRadius);

               cout << "The area of the circle is: " << circleArea << "." << endl;

               main();
       break;

       case 2: cout << "What is the Length(cm) of the Rectangle?\n";
               cin >> rectangleLength;

               cout << "What is the Width(cm) of the Rectangle?\n";
               cin >> rectangleWidth;

               rectangleArea = rectangleWidth * rectangleLength;

               cout << "The area of the rectangle is: " << rectangleArea << "cm." << endl;

               main();
       break;

       case 3: cout << "What is the Length(cm) of the Triangle?\n";
               cin >> triangleLength;

               cout << "What is the Height(cm) of the Triangle?\n";
               cin >> triangleHeight;

               triangleArea = triangleLength * triangleHeight * 0.5;

               cout << "The area of the Triangle is: " << triangleArea << "cm." << endl;

               main();
       break;

       case 4: return 0;
  }


    return 0;
}
