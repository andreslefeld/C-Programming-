// Andres Lefeld & Greeyfer devies
// greeyfer@gmail.com

#include <iostream>
using namespace std;

int getAverage(int [], int);
int getMedian(int [], int);
int getMode(int [], int);

main()
{
    int numStudents;
    int numMovies;
    int *survey = nullptr;
    double average;

    cout << "How many students were surveyed? ";
    cin >> numStudents;

    survey = new int [numStudents];

    for(int count = 0; count < numStudents; count++)
    {
        cout << "how many movies did student " << count +1 << " saw in a month: ";
        cin >> survey[count];
    }

    average = getAverage(survey, numStudents);

    cout << "The average is: " << average << endl;

    getMedian(survey, numStudents);


    delete [] survey;



    return 0;
}

getAverage(int survey[], int numStudents)
{
    int total = 0;
    double average;
    for (int count = 0; count < numStudents; count++)
    {
        total += survey[count];
    }

    average = total / (numStudents * 1.0);

    return average;

}

getMedian(int survey[], int numStudents)
{
    int sortNum;
    bool sortBool;
    int median;
    int medianPosition;

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


    if (!(numStudents % 2 == 0))
    {
        medianPosition = (numStudents + 1) / 2;
        median = survey [medianPosition - 1];
        cout << "Median is : " << median;
    }
    else
    {
        median = (survey[numStudents / 2] + survey[numStudents / 2 + 1]) / 2.0;
        cout << "Median is : " << median;
    }

    return median;

}

getMode(int survey[], int numStudents)
{
    int sortNum;
    bool sortBool;
    int median;
    int medianPosition;

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


    if (!(numStudents % 2 == 0))
    {
        medianPosition = (numStudents + 1) / 2;
        median = survey [medianPosition - 1];
        cout << "Median is : " << median;
    }
    else
    {
        median = (survey[numStudents / 2] + survey[numStudents / 2 + 1]) / 2.0;
        cout << "Median is : " << median;
    }

    return median;
}
