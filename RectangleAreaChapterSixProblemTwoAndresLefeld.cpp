// Rectangle Area - Complete the Program
// Chapter 6, Programming Challenge 2
// Andres Lefeld

#include <iostream>
using namespace std;

// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
double displayData(double length, double width, double area);

int main()
{
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area

   // Get the rectangle's length.

   length = getLength();

   // Get the rectangle's width.
   width = getWidth();

   // Get the rectangle's area.
   area = getArea(length, width);

   // Display the rectangle's data.
   displayData(length, width, area);

   return 0;
}

 double getLength()
{
    double num1;
    cout << "Enter rectangle's length: ";
    cin >> num1;
    return num1;
}

double getWidth()
{
    double num2;
    cout << "Enter rectangle's width: ";
    cin >> num2;

    return num2;
}

double getArea(double length, double width)
{
    double num3;

    num3 = length * width;

    return num3;
}

double displayData(double length, double width, double area)
{
    cout << "Length: " << length << endl
         << "Width:  "  << width  << endl
         << "Area:   "   << area   << endl;
         return 0;
}

//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************
