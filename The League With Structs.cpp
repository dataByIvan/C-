#include <iostream>
using namespace std;
#include <cstring>


struct WinRecord{
    int wins;
    char* name;
};

void initializeData(WinRecord* standings, int size);

void sortData(WinRecord* standings, int size);

void displayData(WinRecord* standings, int size);

int main()
{
    int Teams;
    cout<<"How many teams were there? Enter: ";
    cin >> Teams;
    cin.ignore();
    
    WinRecord* standings = new WinRecord[Teams]; //array
    
    initializeData(standings, Teams);
    sortData(standings, Teams);
    displayData(standings, Teams);
    
    for(int i=0; i<Teams;i++){
        delete[] standings[i].name;
    }
    
    delete [] standings;

    return 0;
}

void initializeData(WinRecord* standings, int size){
    for(int i=0; i<size; i++){
        char temp[100];
        cout << "Enter the team #" <<i+1<<":";
        cin.getline(temp, 100);
        
        standings[i].name = new char[strlen(temp) + 1];
        strcpy(standings[i].name, temp);
        cout << "Enter the wins for team #" << i+1<< ":";
        cin >> standings[i].wins;
        cin.ignore();
        
    }
}

void sortData(WinRecord* standings, int size){
    for(int i= 0; i<size-1; i++){
        for(int k= i+1; k <size; k++){
            if (standings[i].wins < standings[k].wins){
                swap(standings[i], standings[k]);
            }
        }
    }
}

void displayData(WinRecord* standings, int size){
    cout<< "League standings:" << endl;
    for(int i=0; i<size; i++){
        cout << standings[i].name << ": " << standings[i].wins << endl;
    }
}

/*
Sample Output:
How many teams were there? Enter: 5
Enter the team #1:padres
Enter the wins for team #1:75
Enter the team #2:dodgers
Enter the wins for team #2:91
Enter the team #3:rockies
Enter the wins for team #3:65
Enter the team #4:giants
Enter the wins for team #4:92
Enter the team #5:diamondbacks
Enter the wins for team #5:70
League standings:
giants: 92
dodgers: 91
padres: 75
diamondbacks: 70
rockies: 65
*/
