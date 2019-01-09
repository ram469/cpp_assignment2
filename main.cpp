#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    const int MINUTES_PER_HOUR = 60;
    int numHours = 5;
    //MINUTES_PER_HOUR++;
    numHours++;
    cout << "There are " << MINUTES_PER_HOUR * numHours<<" minutes in "<<numHours<<" hours" << endl;
    unsigned int zeroHour = 0;
    zeroHour--;
    cout << "One hour before zero hour is "<< zeroHour << endl;
    return 0;
}
