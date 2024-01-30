// TEST SCORES # 2
// Chapter Nine Challenge # 4
// Andres Lefeld
#include <iostream>
using namespace std;

int sortArray(int [], int);
int arrayAverage(int [], int);
int makeTable(int [], string []);

int main()
{
    int numStudents;
    int *survey = nullptr;
    string *surveyNames = nullptr;

    cout << "Amount of students: ";
    cin >> numStudents;

    survey = new int [numStudents];
    surveyNames = new string[numStudents];

    for(int count = 0; count < numStudents; count++)
    {
        cout << "Student " << count +1 << " name: ";

        cin >> surveyNames[count];

        cout << " score: ";

        cin >> survey[count];
    }

    sortArray(survey, numStudents);

    arrayAverage(survey, numStudents);


    delete [] survey;

    return 0;
}

sortArray(int survey[], int numStudents)
{
    int sortNum;
    bool sortBool;

    do
    {
        sortBool = false;
        for (int count = 0; count < (numStudents - 1); count++)
        {
            if (survey[count] > survey[count + 1])
            {
                sortNum = survey[count];
                survey[count] = survey[count + 1];
                survey[count + 1] = sortNum;
                sortBool = true;
            }
        }
    } while (sortBool);

    for(int x = 0; x < numStudents; x++)
    {
        cout << survey[x] << endl;
    }

    return 0;
}

arrayAverage(int survey[], int numStudents)
{
    int total = 0;
    int average;


    for(int x = 0; x < numStudents; x++)
    {
        total += survey[x];
    }

    average = total / numStudents;

    cout << "Scores average is : " << average;

    return 0;
}
