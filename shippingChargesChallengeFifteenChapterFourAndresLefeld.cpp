// Shipping Charges
// Chapter 4 Challenge 15
// Andres Lefeld

#include <iostream>
using namespace std;

 int main()
 {
double weight;
double shipDistance;
double shippingRate;
double shippingPrice;


cout << "What is the weight of the freight? (In Kg) " << endl;
cin >> weight;

cout << "What is the distance for shipment? (In miles) " << endl;
cin >> shipDistance;

if (shipDistance < 10 || shipDistance > 3000)
   {
    cout << "Please provide distance between 10 miles and 3000 miles. " << endl;
   }

if (weight <= 0)
    {
      cout << "invalid weight. ";
    }

else if (weight <= 2)
    {
      shippingRate = 1.10;
      shippingPrice = (shipDistance / 500) * shippingRate;
      cout << "Your shipping cost is: $ " << shippingPrice << endl;
    }
else if (weight <= 6)
    {
      shippingRate = 2.20;
      shippingPrice = (shipDistance / 500) * shippingRate;
      cout << "Your shipping cost is: $ " << shippingPrice << endl;
    }
else if (weight <= 10)
    {
      shippingRate = 3.70;
      shippingPrice = (shipDistance / 500) * shippingRate;
      cout << "Your shipping cost is: $ " << shippingPrice << endl;
    }
else if (weight <= 20)
    {
      shippingRate = 4.80;
      shippingPrice = (shipDistance / 500) * shippingRate;
      cout << "Your shipping cost is: $ " << shippingPrice << endl;
    }

 return 0;
 }
