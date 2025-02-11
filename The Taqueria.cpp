#include <iostream>
using namespace std;
int main()
{
    const int NUM_TYPES = 4;
    string burritoType[NUM_TYPES] = {"carnitas", "beef", "shrimp", "veggie"};
    int numSold[NUM_TYPES];
    int highest = 0;
    int index = 0;
    int total = 0;
    
    for (int count = 0; count<NUM_TYPES; count++){
        cout << "Enter the number of " <<burritoType[count] << " sold: " ;
        cin >> numSold[count];
        
        if (numSold[count]>highest) {
            highest = numSold[count];
            index = count;
        }
    }
    
    // for (int count=1; count<NUM_TYPES; count++){
    //     if (numSold[count]>highest){
    //         highest = numSold[count];
    //     }
        
    
    
    for (int val: numSold){
            total += val;
        }
        
        cout << "You sold " << total << " burritos today. The most sold was " << burritoType[index] << "." <<endl;
    
    

    return 0;
}
/* Sample output:
Enter the number of carnitas sold: 1
Enter the number of beef sold: 2
Enter the number of shrimp sold: 1
Enter the number of veggie sold: 1
You sold 5 burritos today. The most sold was beef.
*/