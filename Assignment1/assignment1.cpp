//Created by Macy Thomas
//Date created: 9/18/17

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double size;
    double toppings;
    double coupon;
    double tip;
    double cashRegister;
    
    
    cout << "enter yogurt size" << endl;
    cin >> size;
    cout << "enter toppings" << endl;
    cin >> toppings;
    cout <<"coupon"<< endl;
    cin >> coupon;
    cout << "tip" << endl;
    cin >> tip;
    
    cashRegister = (size*.17)+(toppings*.50)+.0725*coupon+tip;
    
    cout << "Yogurt size: "<< size << " Toppings: " << toppings << " Coupon: " << coupon << " Tip: " << tip << endl;
    cout << "Total: " << cashRegister << endl;
    
    

}