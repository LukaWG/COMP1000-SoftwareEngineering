#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int absDiff(int x, int y);

int main()
{
    int var1, var2;

    //Prompt the user
    cout << endl << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;


    // ***1***
    // create variables to hold the reslts of the calculation
    int diff = 0;

    // Calculate the difference
    diff = absDiff(var1, var2);
    // ***2***
    

    //int diff = absDiff(var1, var2);

    // print out the results
    cout << "Absolute diff = " << diff << endl;
}

// Simple function to subtract
// return result is u-v
int sub(int u, int v)
{
    int y = u - v;
    return y;
}

int absDiff(int x, int y)
{
    if (x > y)
    {
        return sub(x, y);
    }
    else
    {
        return sub(y, x);
    }
}