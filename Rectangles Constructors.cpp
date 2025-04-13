using namespace std;
#include <iostream>
#include <cstring>
#include <cstdlib>
class Rectangle
{
  private:
    double width;
    double length;
    char *name;
    void initName(char *n) {
        if (n != nullptr) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        } else {
            name = nullptr;
        }
    }
    
  public:
    //constructors
    Rectangle();
    Rectangle(double, double, char*);
    //destructor
    ~Rectangle();
    void setWidth(double); // done
    void setLength(double); //done
    void setWidth(char *); //done
    void setLength(char *); //done
    void setName(char *); //done
    double getWidth() const; //done
    double getLength() const; // done
    void printName() const{
    if (name)
        cout<<name;
    else
    {
        cout << "No name set.";
    }
    }
};
///////////////////////////////////////
Rectangle::~Rectangle(){
    delete [] name;
}

///////////////////////////////////////
Rectangle::Rectangle(double w, double l, char *n){
    width = w;
    length = l;
    initName(n);
}
///////////////////////////////////////
Rectangle::Rectangle(){
    width = 0;
    length =0;
    name = nullptr;
}

///////////////////////////////////////
void Rectangle::setName(char *n)
{
    delete [] name;
    initName(n);
}
///////////////////////////////////////
void Rectangle::setLength(char *l)
{
    double myLength = atof(l);
    if (myLength>0)
        length = myLength;
    else
    {
        cout<< "Error: invalid length!\n";
    }
}
///////////////////////////////////////
void Rectangle::setWidth(char *w)
{
    double myWidth = atof(w);
    if (myWidth>0)
        width = myWidth;
    else
    {
        cout << "Error: invalid width!\n";
    }
}
////////////////////////////////////////
void Rectangle::setWidth(double w){
    if (w>0)
        width = w;
    else 
    {
        cout << "ERROR: invalid width!\n";
    }
    }
///////////////////////////////////////
void Rectangle::setLength(double l){
    if (l>0)
        length = l;
    else
    {
        cout << "ERROR: invalid width!\n";
    }
}
///////////////////////////////////////
double Rectangle::getWidth() const
{
        return width;
}
///////////////////////////////////////
double Rectangle::getLength() const
{
    return length;
}
///////////////////////////////////////

int main()
{
    Rectangle sample;
    sample.setName((char *)"My Sample");
    sample.setWidth((char *)"100");
    sample.setLength((char *)"200");

    cout << "Rectangle Name: ";
    sample.printName();
    cout << "\nWidth: " << sample.getWidth();
    cout << "\nLength: " << sample.getLength() << endl;

    return 0;

    return 0;
}

/*

Sample output:

Rectangle Name: My Sample
Width: 100
Length: 200

*/