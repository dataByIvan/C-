#include <iostream>
#include<iomanip>
using namespace std;

float toCelcius(float F){
    float C = (5.0/9.0) * (F-32);
    return C;
}
int F;

int main()
{
    cout<<"Welcome to the temperature converter! \n";
    cout<<"Please enter a temperature in Farenheight: ";
    cin>> F;
    cout<<"The equivalent Celsius is: " << fixed<< setprecision(1)<<toCelcius(F)<< endl;
    if (F<32) {
        cout<<"This temperature is below freezing\n";
    }
        else{
            cout<<"This temperature is above freezing \n";
        }
    
    
    return 0;
}