#include<iostream>
using namespace std;

// 1. Write a Min() function here to find the minimum of 2 integers
int Min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}

// 2. Write a Min() function here to find the minimum of 3 integers
int Min(int x, int y, int z)
{
     if(x>y && x>z)
    {
        if(y>z)
        {
            return z;
        }
        else
        {
            return y;
        }
    }
    else
        return x;
}

// 3. Write a Min() function here to find the minimum of 2 floats
float Min(float x, float y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    cout << Min(10, 5) << endl;
    cout << Min(12, 7, 9) << endl;
    cout << Min(18.0f, 9.0f) << endl;
    
    return 0;
}
