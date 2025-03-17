#include <iostream>
#include <cstring>
using namespace std;

int lastIndexOf(char *s, char target){
    int nullTarget = -1;
    
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == target){
            nullTarget = i;
        }
    }
    return nullTarget;
}


void reverse(char *s){
    cout << "Assigning the string in reverse:" << endl;
    int len = strlen(s);
    char temp[len+1];
    
    // swap
    for(int i=0; i<len; i++){
        temp[i] = s[len-1-i];
    }
    temp[len] = '\0';
    
    for(int i=0; i<len;i++){
        s[i] = temp[i];
    }
    
    cout <<s << endl;
    }

int replace(char *s, char target, char replacementChar){
    int count = 0; 
    for(int i=0; s[i] !='\0'; i++)
        if(s[i] == target){
            s[i] = replacementChar;
            count++;
    }
    return count;
}

int findSubstring(char *s, char substring[]){
    int len = strlen(s);
    int lenSub = strlen(substring);
    
    for(int i = 0; i <= len - lenSub; i++){
        if (strncmp(&s[i], substring, lenSub)==0){
            return i;
        }
    }
    return -1;
}

bool isPalindrome(char *s){
    int len = strlen(s);
    char temp[len+1];
    
    strcpy(temp, s);
    reverse(temp);
    
    return strcmp(s,temp) == 0;
    }


int main()
{
    cout<< "Function 1 Sample:" << endl;
    char word[] = "Giants";
    char target = 'n';
    cout<< "The last index of " << target<< " in " << word << " is " << lastIndexOf(word, target) <<  "."<< endl;
    
    cout<< "\nFunction 2 Sample:" << endl;
    char str[] = "flower";
    reverse(str);
    cout << "\n";
    
    cout<< "Function 3 Sample:" << endl;
    char FunctionThreeWord[] = "giants";
    char FunctionThreeTarget = 'g';
    char replacer = 'G';
    int replacements = replace(FunctionThreeWord,  FunctionThreeTarget, replacer);
    cout << "The word giants modified into ---> " << FunctionThreeWord << endl;
    cout << "The number of replacement(s): " << replacements<< endl;
    
    cout << "\nFunction 4 Sample:"<<endl;
    char skyscraper[] = "Skyscraper";
    char substring[] = "ysc";
    int FunctionFourIndex = findSubstring(skyscraper, substring);
    if (FunctionFourIndex !=1){
        cout << "The substring is in index: " << FunctionFourIndex << endl;
     }else {
        cout << "Substring was not found :(\n";
     }
    
    cout << "\n Function 5 Sample:" << endl;
    char SampleFiveWord[] = "radar";
    
    if(isPalindrome(SampleFiveWord)){
        cout <<SampleFiveWord<< "is in fact a palindrome!"<< endl;
    }else{
        cout << SampleFiveWord << "is not a palindrome!"<<endl;
    }
    

    return 0;
}

/*
Function 1 Sample:
The last index of n in Giants is 3.

Function 2 Sample:
Assigning the string in reverse:
rewolf

Function 3 Sample:
The word giants modified into ---> Giants
The number of replacement(s): 1

Function 4 Sample:
The substring is in index: 2

 Function 5 Sample:
Assigning the string in reverse:
radar
radaris in fact a palindrome!
*/