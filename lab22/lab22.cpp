//Macy Thomas
//Lab 2.2
//Random Number Generator

#include <iostream>
#include <time.h> //allows for us to use srand
using namespace std;

void Random(){
    cout << "Your Random Number is: "<< endl; //outputs the phrase "Your Random Number is:"
    srand (time(NULL)); //produces random number
    int number = rand() % 100 + 1; //sets boundary between 0-100
    cout << number; //outputs our random number
}
int main(){
    Random(); //runs our function
    
}



