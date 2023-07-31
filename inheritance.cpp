#include <iostream>
using namespace std;
class Base
{
public:
int a;
void display()
 {
     cout<<"Display of Base "<<a<<endl;
 }
};
class Derived:public Base
{
public:
 int b;
 void show()
 {
     cout<<"Display of Base "<<a<<" Show of Derived "<<b<<endl;
 }
};
int main()
{
    Derived d;
    d.a=100;
    d.b=1000;
    d.display();
    d.show();
}