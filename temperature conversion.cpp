//Question 1 :

#include <iostream>
#include<iomanip>
using namespace std;

float toCelcius(float F){
    float C = (5.0/9.0) * (F-32);
    return C;
}


int main()
{
    cout<<"Welcome to the temperature table! \n";
    cout << setw(5) << "F" << setw(10) << "C" << endl;
    cout << "-------------------------" << endl;
    
    for (float F=60; F<=80; F++){
        float C = toCelcius(F);
        cout << setw(5) << F << setw(10) << fixed << setprecision(1) << C << endl; 
    }
    return 0;
}
