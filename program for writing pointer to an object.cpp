# include<iostream>
using namespace std;
    
/*program for writing pointer to an object

*/
class rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;
	}
	int perimeter()
        {
		return 2*(length+breadth);
	}
};
int main()
{	
	rectangle r1;
	rectangle *ptr;
// 	rectangle *ptr=new rectangle; //for running remove line 23,24,26
	ptr=&r1;
	ptr->length=10;
	ptr->breadth=5;
	cout<<ptr->area()<<endl;
	cout<<ptr->perimeter()<<endl;    
}