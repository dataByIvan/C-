// A simple driver program in C++
// Put your code below after the line which says "// insert your code here" 
// Ivan Yu, CS110B

#include <iostream>
using namespace std;

int main()
{
  int homeScore;
  int visitorScore;
  const int low_score = 3 ; // constant low score is 3
  //Declaring variables
  cout<<"Input the score for the home team today: \n";
  cin>> homeScore;
  cout<<"Input the score for the visitor team today: \n";
  cin>>visitorScore;
  //prompts scored the variables
  cout<<"The score for the home team is: " <<homeScore<< endl;
  cout<<"The score for the visitor's team is: " <<visitorScore<< endl;
  if (homeScore>visitorScore) {
      cout<<"Home Team won"<< endl;
  }
      else if(homeScore<visitorScore) {
          cout<<"Vistor Team won"<< endl;
      }
      else{
          cout<<"It looks like it is a tie"<< endl;
      }
      
      // low scores
      if (homeScore < low_score && visitorScore < low_score) {
          cout<< "Both teams had low score" << endl;
      } else if (homeScore<low_score){
          cout<< "The home team had a low score" << endl;
      }
        else if (visitorScore < low_score){
            cout<< "The visitor team had a low score"<< endl;
        }
      
      
      return 0;
  }