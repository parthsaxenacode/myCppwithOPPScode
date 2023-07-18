#include <iostream>

using namespace std;
//static variable illustration..!!
void fun()
{
    static int v=10; //in static the memory will not be delete even after running of the function  
    //moreover we can say it will work alike global variable somehow!!
    int a=9;//but in local it will be deleted
    v++;
    a++;
    cout<<a<<"  "<<v<<endl;
}
int main()
{
   fun();//here evey time value of v is updated
   fun();//but value of a remains constant as it memory is deleted after 
   fun();// after execution of that function
   fun();//but static's not get deleted so it is updating how many times we are calling it!!

    return 0;
}