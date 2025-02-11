#include <iostream>
using namespace std;

void countFrequency(int hand[], int freq[]);
bool containsPair(int freq[]);
bool containsTwoPair(int freq[]);
bool containsThreeOfaKind(int freq[]);
bool containsStraight(int hand[]);
bool containsFullHouse(int freq[]);
bool containsFourOfaKind(int freq[]);

int main()
{
    const int card = 5;
    int hand[card];
    int count = 0;
    int freq[10] = {0};
    
    cout << "Enter five numeric cards, no face cards. Use 2-9. \n";
    for (int i = 0; i < card; i++){
        cout << "Card " << i + 1 << ": ";
        cin >> hand[i];
        if (hand[i] > 9 || hand[i] < 2) {
            cout << "Please only enter numbers between 2 - 9.";
            return 1;
        }
    }
    
    countFrequency(hand, freq);
    
    if (containsFourOfaKind(freq)) {
        cout << "Four of a Kind!" << endl;
    } else if (containsFullHouse(freq)) {
        cout << "Full House!" << endl;
    } else if (containsStraight(hand)) {
        cout << "Straight!" << endl;
    } else if (containsThreeOfaKind(freq)) {
        cout << "Three of a Kind!" << endl;
    } else if (containsTwoPair(freq)) {
        cout << "Two Pair!" << endl;
    } else if (containsPair(freq)) {
        cout << "Pair!" << endl;
    } else {
        cout << "High Card!" << endl;
    }

    return 0;

    
    return 0;
}


    
    void countFrequency(int hand[], int freq[]){
        for (int i = 2; i<=9; i++){
            freq[0] = 0;
        }
        for (int i =0; i < 5; i++){
            freq[hand[i]]++;
        }
    }
    
    bool containsPair(int freq[]){
    for (int i = 2; i <= 9; i++){
        if (freq[i] == 2){
            return true;
        }
    }
    return false;
}


bool containsTwoPair(int freq[]){
    int count = 0;
    for (int i = 2; i <= 9; i++){
        if (freq[i] == 2){
            count++;
        }
    }
    return (count == 2);
}


bool containsThreeOfaKind(int freq[]){
    for (int i = 2; i <= 9; i++){
        if (freq[i] == 3){
            return true;
        }
    }
    return false;
}


bool containsStraight(int hand[]){
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 5; j++){
            if (hand[i] > hand[j]){
                int replace = hand[i];
                hand[i] = hand[j];
                hand[j] = replace;
            }
        }
    }

    for (int i = 1; i < 5; i++){
        if (hand[i] != hand[i - 1] + 1){
            return false;
        }
    }
    return true;
}


bool containsFullHouse(int freq[]){
    bool containsthree = false, haspair = false;
    for (int i = 2; i <= 9; i++){
        if (freq[i] == 3){
            containsthree = true;
        }
        if (freq[i] == 2){
            haspair = true;
        }
    }
    return (containsthree && haspair);
}


bool containsFourOfaKind(int freq[]){
    for (int i = 2; i <= 9; i++){
        if (freq[i] == 4) {
            return true;
        }
    }
    return false;
}

/*
Enter five numeric cards, no face cards. Use 2-9. 
Card 1: 1
Please only enter numbers between 2 - 9.

Enter five numeric cards, no face cards. Use 2-9. 
Card 1: 2
Card 2: 3
Card 3: 4
Card 4: 5
Card 5: 6
Straight!

Enter five numeric cards, no face cards. Use 2-9. 
Card 1: 8
Card 2: 7
Card 3: 8
Card 4: 2
Card 5: 7
Two Pair!

Enter five numeric cards, no face cards. Use 2-9. 
Card 1: 9
Card 2: 2
Card 3: 3
Card 4: 4
Card 5: 5
High Card!

*/

