/*The local taqueria wants you to write a program which tracks the number of burritos they sell each day and help them 
analyze their business.

Your program should ask the user for the number of different burrito types sold, then get the names of the types 
and the number of burritos sold of each type of that day.  Print out a daily report listing sales for each burrito type 
and total number of all burritos sold.

So far, this sounds very similar to a previous exercise!  This difference this time is that you must use a struct 
called SalesRecord which has two fields -- a string containing the name of the burrito, and an int containing the number 
of burritos sold of this type.  You must have one dynamically allocated array of SalesRecord structs.  */

#include <iostream>
using namespace std;


// Struct that stores different burrito types sold & number sold
struct SalesRecord
{
    string burritoType;
    int numSold;
    
    
};
// function that prints burrito type and burrito type sold
void printRecord(SalesRecord t)
{
    cout << "Type: " << t.burritoType << " ----- Sold: " << t.numSold << endl;
}

int main()
{
    
    int typesSold;
    cout << "How many different burrito types were sold today?"<< endl;
    cin >> typesSold;
    
    SalesRecord *sales = new SalesRecord[typesSold];
    
    for (int i=0; i < typesSold; i++)
    {
        cout << "Enter the names of burrito type " << i +1 << " sold:\n";
        cin >> sales[i].burritoType;
        cout << "How many " << sales[i].burritoType << " were sold:\n";
        cin >> sales[i].numSold;
    }
    
    /*Print out a daily report listing sales for each burrito type 
        and total number of all burritos sold.
    */
    
    
    int total = 0;
    cout << "\n--- Daily Burrito Sales Report ---\n";
    for (int i = 0; i < typesSold; i++)
    {
        printRecord(sales[i]);
        total += sales[i].numSold;
        
    }
    cout << "Total burritos sold today: " << total << endl;
    return 0;
}

/* Sample Output

How many different burrito types were sold today?
2
Enter the names of burrito type 1 sold:
Steak
How many Steak were sold:
9
Enter the names of burrito type 2 sold:
Carnitas
How many Carnitas were sold:
4

--- Daily Burrito Sales Report ---
Type: Steak ----- Sold: 9
Type: Carnitas ----- Sold: 4
Total burritos sold today: 13

*/