#include <stdio.h>

int main()
{
    bool exitEarly = false;

    for (int i = 0; i <= 10; i++)   // potentially loop from 1 to 10  
    {
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if ((c == 'q') || (c == 'Q'))
        {
            printf("\tUser stopped the loop early at %d\n", i);
            exitEarly = true;
            break;                  // break out of the for loop
        }
        printf("Loop counter = %d\n", i);
    }
    printf("Done - ");
    if (exitEarly)
    {
        printf("Loop exited early");
    }
    else
    {
        printf("Loop finished");
    }
}
