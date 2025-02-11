Question 1:

// A simple driver program in C++
// Put your code below after the line which says "// insert your code here" 
// Ivan Yu, CS110B

#include <iostream>
using namespace std;

int main()
{
    int numInnings; // First variable to store input
    int numRuns; // number of runs for pitcher
    double ERA; //  Baseball: Earned Run Average
    cout<<"What is the number of innings for today's pitcher? \n"; //First prompt
    cin>> numInnings; //Get the number of the first prompt
    cout<<"What is the number of runs for today's pitcher?\n"; //Second prompt
    cin>>numRuns;//Fetched input for number of runs
    ERA = numRuns*9/numInnings;
    cout<<"The number of Earned Run Average is:\n" << ERA << endl;
  
  return 0;
}
