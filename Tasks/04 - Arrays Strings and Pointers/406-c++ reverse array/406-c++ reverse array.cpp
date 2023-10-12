#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    const int length = sizeof(nums) / sizeof(int);
    int reversed[length];

    for (int n = length-1, count = 0; n >= 0; n--, count++)
    {
        reversed[count] = nums[n];
    }

    for (int n = 0; n < length; n++)
    {
        cout << reversed[n] << "\t";
    }
    cout << endl << endl;

    for (int n = 0; n < length/2; n++) {
        int temp = nums[length - n - 1];
        nums[length - n - 1] = nums[n];
        nums[n] = temp;
    }
    for (int n = 0; n < length; n++)
    {
        cout << nums[n] << "\t";
    }

}