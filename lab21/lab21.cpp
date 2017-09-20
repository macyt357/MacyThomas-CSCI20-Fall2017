#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
    double velocity;
    double tempF;
    double OldStyleWindChill;
    double NewStyleWindChill;

    cout << "Enter starting Velocity" << endl;
    cin >> velocity;
    cout << "Enter starting Temperature" << endl;
    cin >> tempF;
    
    OldStyleWindChill = 0.081*(3.71*sqrt(velocity)+5.81-0.25*velocity)*(tempF-91.4)+91.4;
    NewStyleWindChill = 35.74+0.6215*tempF-35.75*(velocity*pow(velocity, 0.16))+0.4275*tempF*pow(velocity,0.16);
    
    cout << "Velocity" << velocity << "Old Formula " << OldStyleWindChill << "New Formula " << NewStyleWindChill << "Difference " << OldStyleWindChill - NewStyleWindChill << endl;

}