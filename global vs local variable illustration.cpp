# include<iostream>
using namespace std;
    
/*program for global and local variables

*/
int g=5;/*g is global variable which is accessable to all part of function as well memory of g 
will stored in code part instead of stack so it will be there till function is running*/
void fun()
{
	int a=10;/*a is local variable cannot access after this block as well its memory also get terminated
	after runningof this  function*/
	a++;
	g++;
	cout<<a<<" "<<g<<endl;
}
int main()
{
	cout<<g<<endl;
	fun();
	cout<<g<<endl;
}