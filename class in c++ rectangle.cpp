
#include <iostream>

using namespace std;
class rectangle
{
public:
    //data members (attributes)
    int length;
    int breadth;
    //member function
    int area()
    {
        return length*breadth;
    }
    int parameter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    //creating objects of class
    rectangle r1,r2;
    //accessing and setting attributes
    r1.length=10;
    r1.breadth=5;
    r2.length=10;
    r2.breadth=15;
    //calling member function
    cout<<"Area of r1: "<<r1.area()<<endl;
    cout<<"Perimeter of r1: "<<r1.parameter()<<endl;
    cout<<"Area of r2: " <<r2.area()<<endl;
    cout<<"Perimeter of r2: " <<r2.parameter()<<endl;

    return 0;
}