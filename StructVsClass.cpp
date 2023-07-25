# include<iostream>
using namespace std;
    
/*program for creating structure and class

*/
struct demo/*in C struct cannot have function inside it but in C++ it works exactly like class just the
difference is that class have by default private and it is public by default*/
{
	int x;
	int y;
        void display()
 	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	demo d;
	d.x=10;
	d.y=20;
	d.display();
}