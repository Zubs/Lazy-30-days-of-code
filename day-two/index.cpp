#include <iostream>

using namespace std;

int isLeapYear(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) return true;
            else return false;
        } else return true;
    } else return false;
}

int* LeapYear(int year, int numOfYears)
{
    int* leapYears = new int[numOfYears];

    int count = 0;
    for (int i = year; count < numOfYears; i++) {
        if (isLeapYear(i)) {
            leapYears[count] = i;
            count++;
        }
    }

    return leapYears;
}

int main()
{

    int i = 0;
    int* x = LeapYear(2020, 4);

    while (i < sizeof x) {
        cout << x[i] << endl;
        i++;
    }
    return 0;
}