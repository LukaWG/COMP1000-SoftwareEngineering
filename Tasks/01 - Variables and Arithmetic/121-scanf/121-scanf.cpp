#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    int y;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf("%d", &x);

    printf("Enter another number\n");

    int found2 = scanf("%d", &y);

    double average = (x+y)/2;

    printf("The average of the two numbers is: %.2f", average);

    //Display how many items were matched
    //printf("Matched %d items\n", found);

    //Display what was typed in
    //printf("x = %d\n", x);
}


