#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    private:
        double width;
        double length;
        
    public:
        void setWidth(double w);
        void setLength(double l);
        void setPerimeter(double p);
        //void Square;
        double getWidth() const;
        double getLength() const;
        double getArea() const;
        double getPerimeter() const;
        bool isSquare() const;
};

    //Width Set Function
    void Rectangle::setWidth(double w){
        width = w;
    }
    
    //Width Set Function
    void Rectangle::setLength(double l){
        length = l;
    }
    
    //Width Get Function
    double Rectangle::getWidth() const{
        return width;
    }
    
    
    //Width Get Function
    double Rectangle::getLength() const{
        return length;
    }
    
    //Get Area Function
    double Rectangle::getArea() const{
        return length * width;
    }
    
    //Get Perimeter
    double Rectangle::getPerimeter() const{
        return (2*length)+(2*width);
    }

    //Square?
    bool Rectangle::isSquare() const{
        if (length==width)
            return true;
        else
            return false;
    }
    
    
int main()
{
    Rectangle example1;
    Rectangle example2;
    example1.setWidth(10);
    example1.setLength(10);
    example2.setWidth(100);
    example2.setLength(200);
    
    cout<< "Rectangle example #1 has an area of: " << example1.getArea()<< " unit(s)."<< endl;
    cout<< "Rectangle example #1 has a perimeter of: " <<example1.getPerimeter() << " unit(s)"<<endl;
    if (example1.isSquare()){
        cout << "This rectangle is in fact a square."<< endl;
    } else{
        cout << "This rectangle is not a square." << endl;
    }

    cout<<"\nRectangle example #2 has an area of: " <<example2.getArea()<< " unit(s)." << endl;
    cout<< "Rectangle example #1 has a perimeter of: " <<example2.getPerimeter() << " unit(s)"<<endl;
    if (example2.isSquare()){
        cout << "This rectangle is in fact a square."<< endl;
    } else{
        cout << "This rectangle is not a square." << endl;
    }

    return 0;
}

/* Output:
Rectangle example #1 has an area of: 100 unit(s).
Rectangle example #1 has a perimeter of: 40 unit(s)
This rectangle is in fact a square.

Rectangle example #2 has an area of: 20000 unit(s).
Rectangle example #1 has a perimeter of: 600 unit(s)
This rectangle is not a square.

*/
