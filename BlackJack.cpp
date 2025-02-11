// This program is meant to emulate the card game "black jack"
#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
    
{
    
    srand(time(0));
    int total_card = 0;
    char another = 'y';
    int random_card1 = (rand() % 11) + 1 ; // I added a +1 on each random card to avoid getting a 0 for the card value
    int random_card2 = (rand() % 11) + 1;
    total_card = random_card2 + random_card1;
    cout<<"First cards: " <<random_card1<< "," <<random_card2<< endl;
    cout<<"Card: " <<total_card<< endl;
    
    while(another =='y' || another =='Y'){ // || = "or"
        cout<<"Do you want another card? (y/n): ";
        cin>>another;
        
        if (another=='y' || another =='Y'){
            int new_card = (random() % 10) + 1;
            total_card += new_card;
            cout<< "Card: " <<new_card<< endl;
            cout<< "Total: " << total_card<< endl;
        if(total_card > 21){
            another = 'n'; // Any letter works here, but I just want to stop the loop if there's a "Bust"
            cout<< "Bust" <<endl;
        }
        }
    
    
}
    return 0;
    
}

/*
>First cards: 5,7
>Card: 12
>Do you want another card? (y/n): y
>Card: 8
>Total: 20
>Do you want another card? (y/n): n
>
>First cards: 7,5
>Card: 12
>Do you want another card? (y/n): y
>Card: 4
>Total: 16
>Do you want another card? (y/n): y
>Card: 1
>Total: 17
>Do you want another card? (y/n): y
>Card: 8
>Total: 25
>Bust
*/



