// This program displays which team won based on highest score!
#include <iostream>
using namespace std;

int main(){
    char go_again = 'y'; //Initialize the loop

while (go_again == 'y')
{
    int home_score; //the score for the home team
    int away_team; // the score for the "away" team
    
    cout<< "What is the score for the home team? ";
    cin>> home_score;
    cout<< "What is the score for the away team? ";
    cin>> away_team;
    
    if(home_score>away_team) {
        cout<< "Looks like the home team took the win!" << endl;
    }
    else if(away_team>home_score) {
        cout<< "Looks like the away team took the win!" << endl;
    }
    else {
        cout<< "Looks like the game was a draw!" <<endl;
    }
    cout<<"Would you like to run this program again? Select (y/n): ";
    cin>>go_again;
}

    return 0;

}