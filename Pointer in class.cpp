# include<iostream>
using namespace std;
    
/*program for this pointer

*/
class rectangle
{
private:
	int length;
	int breadth;
public:
	rectangle(int length,int breadth)
	{
		this->length=length;//-> is used to differentiate 2 same name variable.
		this->breadth=breadth;// as it indicate to main in prvt. variable
	}
	int area()
	{
		return length*breadth;
	}
};
int main()
{
	rectangle r1(10,5);
	cout<<r1.area()<<endl;
}