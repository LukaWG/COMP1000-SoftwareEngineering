#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    {
        printf("(%d)\n", i);

        // Inner loop
        for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\t%d x %d = %d\n", i, j, i * j); // Display i*j

            //Task - Write another level of nesting here

        }
    }
}
