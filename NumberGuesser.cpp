#include <iostream>
using namespace std;

void playOneGame();
bool shouldPlayAgain();
char getUserResponseToGuess(int guess);
int getMidpoint(int low, int high);

int main()
{
    do
    {
        playOneGame(); 
    } while (shouldPlayAgain());

    return 0;
}

void playOneGame() 
{ 
    int low = 1;
    int high = 100;
    char response;
    
    cout << "Think of a number between 1 and 100." << endl;
    
    while (true) 
    {
        int guess = getMidpoint(low, high); // Get midpoint
        response = getUserResponseToGuess(guess); // Get user response
        
        if (response == 'c' || response == 'C')
        {
            break;
        }
        else if (response == 'l' || response == 'L') // Lower
        {
            high = guess ; 
        }
        else if (response == 'h' || response == 'H') // Higher
        {
            low = guess ; 
        }
        else
        {
            cout << "Invalid input. Please enter 'h', 'l', or 'c'." << endl;
        }
    }
}

char getUserResponseToGuess(int guess)
{
    char response;
    cout << "Is it " << guess << "? (h/l/c): ";
    cin >> response;
    return response;
}

int getMidpoint(int low, int high)
{
    return (low + high) / 2;
}

bool shouldPlayAgain()
{ 
    char again;
    cout << "Great! Do you want to play again? (y/n):  ";
    cin >> again;
    return (again == 'y' || again == 'Y');
}

/*
Think of a number between 1 and 100.
Is it 50? (h/l/c): h
Is it 75? (h/l/c): h
Is it 87? (h/l/c): l
Is it 81? (h/l/c): c
Great! Do you want to play again? (y/n):  y
Think of a number between 1 and 100.
Is it 50? (h/l/c): l
Is it 25? (h/l/c): h
Is it 37? (h/l/c): c
Great! Do you want to play again? (y/n):  n
*/
