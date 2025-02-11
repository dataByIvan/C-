//This program keeps track of assignment grades and returns the average/letter grade
#include <iostream>
using namespace std;

int main()
{
    int assignment; // The number of assignments
    double grade; // grade letter
    double total = 0; // Track the score 
    double average;
    
    cout<<"How many assignments are there? ";
    cin>> assignment;
    
    for (int i =1; i<=assignment; i++)
    {
        cout<<"What grade did you get for assignment "  << i <<"? ";
        cin>>grade;
        
        while (grade<0 || grade>100) 
        {
            cout<<"That is not a valid grade, enter a grade between 0 and 100: ";
        }
        total = grade + total;
    }
    average = total/assignment;
    
    cout<< "The total score on your assignment accumulates to " <<total << endl;
    cout<< "The average score on your assignmnets is " <<average <<endl;
    
    if (average>=90) {
        cout<< "The letter grade is: A" <<endl;
    }
    else if (average>= 80){
        cout<< "The letter grade is: B" << endl;
    }
    else if (average>= 70){
        cout<< "The letter grade is: C" << endl;
    }
    else if (average>= 60){
        cout<< "The letter grade is: D" << endl;
    }
    else{
        cout<< "The letter grade is: F" << endl;
    }
    

    return 0;
}