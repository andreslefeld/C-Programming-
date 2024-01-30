// Chapter 3 Programming Challenge #24
// Andres Lefeld

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   // Set variables for all the we'll ask the user to input.

   string userName;
   string userAge;
   string userCity;
   string userCollege;
   string userProfession;
   string userAnimal;
   string userPet;

   // Display one question at a time, with a pause between user's input and the next question.

   cout << "Enter Name: " << endl;
   getline(cin, userName);

   cout << "Enter Age: " << endl;
   getline(cin, userAge);

   cout << "Enter City: " << endl;
   getline(cin, userCity);

   cout << "Enter College: " << endl;
   getline(cin, userCollege);

   cout << "Enter Profession: " << endl;
   getline(cin, userProfession);

   cout << "Enter Animal Type: " << endl;
   getline(cin, userAnimal);

   cout << "Enter Pet's Name: " << endl;
   getline(cin, userPet);

   // cout the story with each variable which we created before and inputed by user.

   cout << "There once was a person named " << userName << " who lived in " << userCity << ". At the age of "
        << userAge << ", " << userName << " went to college at " << userCollege << ". " << userName
        << " graduated and went to work as a " << userProfession << ". Then, " << userName
        << " adopted a(n) " << userAnimal << " named " << userPet << ". They both lived happily ever after!";

   return 0;
}
