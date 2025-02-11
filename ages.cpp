// This program looks at your age and determines if you are a child, teen, an adult, or a retiree
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Please input your age: ";
    cin >> age;

    if (age<0)
    {
        cout<<"Error! Age must be at least 0."<< endl;
    }

    else if (age<13)
    {
        cout<<"You are a child."<< endl;
    }

    else if (age>=13 && age<=17)
    {
        cout<<"You are a teen." << endl;
    }
    else if (age>=18 && age<=64)
    {
        cout<<"You are an adult."<< endl;
    }
    else if (age>=65)
    {
        cout<<"You are a retiree."<< endl;
    }


    return 0;
}

/*
Please input your age: 17
You are a teen.
[iyu26@hills ~]$ 19
-bash: 19: command not found
[iyu26@hills ~]$ ./a.out
Please input your age: 19
You are an adult.
[iyu26@hills ~]$ 19
-bash: 19: command not found
[iyu26@hills ~]$ ./a. out
-bash: ./a.: No such file or directory
[iyu26@hills ~]$ ./a.out
Please input your age: 89
You are a retiree.
*/