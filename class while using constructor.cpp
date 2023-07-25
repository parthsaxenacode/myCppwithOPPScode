# include<iostream>
using namespace std;
    
/*program for creating default constructors

*/
class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    }
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    rectangle(rectangle (&r))
    {
        length = r.length;
        breadth = r.breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r1;
    rectangle r(10, 5);
    rectangle r2(r);
    cout << r1.area() << endl;
    cout << r.area() << endl;
    cout << r2.area() << endl;
}
