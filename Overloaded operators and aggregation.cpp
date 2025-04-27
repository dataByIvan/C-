using namespace std;
#include <iostream>
class Rectangle{
    private:
    double width;
    double height;
    
    public:
    Rectangle(double w = 0, double h=0) : width(w), height(h) {}
    
    //overload the equals operator
    Rectangle& operator = (const Rectangle& other) {
        if (this != &other){
            width = other.width;
            height = other.height;
        }
        return *this;
    }
    
    // < 
    bool operator<(const Rectangle& other) const{
        return (width*height)<(other.width * other.height);
    }
    
    //>
    bool operator>(const Rectangle& other) const {
        return (width *height) > (other.width * other.height);
    }
    
    //Display
    void display() const{
        cout << "Width: " << width << ", height: " <<height<< ", Area: "<< (width *height) << endl;
    }
};





int main()
{
    Rectangle r1(6, 5);
    Rectangle r2(3, 10);
    Rectangle r3;

    r3 = r2 = r1; 

    cout << "Rectangle 1: ";
    r1.display();
    cout << "Rectangle 2: ";
    r2.display();
    cout << "Rectangle 3: ";
    r3.display();

    
    if (r1 >r2){
        cout << "Rectangle 1 is bigger than Rectangle 2." << endl;
    } else if (r1< r2){
        cout << "Rectangle 1 is smaller than Rectangle 2." <<endl;
    } else{
        cout << "Rectangle 1 and Rectangle 2 have the same area." <<endl;
    }

    return 0;
}

/*
Sample Output:
Rectangle 1: Width: 6, height: 5, Area: 30
Rectangle 2: Width: 6, height: 5, Area: 30
Rectangle 3: Width: 6, height: 5, Area: 30
Rectangle 1 and Rectangle 2 have the same area.
*/