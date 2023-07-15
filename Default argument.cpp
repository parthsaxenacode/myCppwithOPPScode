#include <iostream>

using namespace std;
int add(int x, int y, int z=0)
{
    return x+y+z;
}

int main()
{
    cout << add(8, 9) << endl;
    cout << add(8, 9,23) << endl;

    return 0;
}
