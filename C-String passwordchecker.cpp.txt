// Question 1

#include <iostream>
using namespace std;
#include <cstring>
#include <cctype>

//mmmDDYY.fl

const int MAX_CHARS = 14;
char password[MAX_CHARS];

bool PasswordChecker(const char password[]){
    if (strlen(password) != 10){
        cout << "Error: Password is not exactly 10 characters long." << endl;
        return false;
    }
    
    for (int i=0; i<3; i++){
        if (!islower(password[i])){
            cout << "Error: First three characters are not lowerse." << endl;
            return false;
        }
    }
    if (!isdigit(password[3]) || !isdigit(password[4])){
        cout << "Error: The DD are not digits." << endl;
        return false;
    }
    
    
    if (!isdigit(password[5]) || !isdigit(password[6])){
        cout << "Error: The YY are not digits." << endl;
        return false;
    }
    if (password[7] != '.'){
        cout << "Error: After the mmmDDYY fomrmat, there must immediately be a period (.) following the password." << endl;
        return false;
    }
    if (!islower(password[8]) || !islower(password[9])){
        cout << "Error: The last two letters are not lowercase letters." << endl;
        return false;
    }
    return true;
    
    
}

int main()
{
    const int MAX_CHARS = 14;
    char password[MAX_CHARS];
    
    // get password from user 
    cout << "Please enter your hills password in the format, i.e. mmmDDYY.fl, where:" << endl;
    cout << "mmm is the lowercase letters for month." << endl;
    cout << "DD is two digits for day." <<endl;
    cout << "YY is two digits for year." << endl;
    cout << ".- a period." << endl;
    cout << "fl- two lower case characters for first and last initials: "<< endl;
    cin.getline(password,MAX_CHARS);
    
    //anatomy check
    if(PasswordChecker(password)){
        cout << "Valid Password!" << endl;
    }
    else {
        cout<< "Invalid Password!" << endl;
    }
    
    
 
    return 0;
}