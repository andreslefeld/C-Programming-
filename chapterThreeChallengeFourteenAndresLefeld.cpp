// Name: Andres Lefeld
// Chapter Three Programing Challenges #14

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main ()
{

 // Make variables for user inputs.

    string month;
    double year;
    double cash;

    cout << "Please input Month of sales? \n";
    cin >> month;

    cout << "Please input year? \n";
    cin >> year;

    cout << "Please input amount collected " << month << ", " << year << endl;
    cin >> cash;

// make variables and equations for each variable asked.

    double sales;
    double countyTax;
    double stateTax;
    double totalTax;

    sales = cash / 1.06;
    countyTax = cash * 0.02;
    stateTax = cash * 0.04;
    totalTax = cash * 0.06;

// Display a table with each variable assigned. added setw to 8 align each value.

    cout << "\n Month: " << month;
    cout << "\n-------------\n";
    cout << "Total Collected:  $" << setw(8) << cash << endl;
    cout << "Sales:            $" << setw(8) << sales << endl;
    cout << "County Sales Tax: $" << setw(8) << countyTax << endl;
    cout << "State Sales Tax:  $" << setw(8) << stateTax << endl;
    cout << "Total Sales Tax:  $" << setw(8) << totalTax << endl;

    return 0;
}
