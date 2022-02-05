// No. guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iosteam>
#include <time.h>
int main()
{
    int n, g, ng = 1;
    srand(time(0));//for generation of randomn no.
    n = rand() % 100;//assigning the no.
    do
    {
        printf("Select a number between 1 to 100\n");
        scanf("%d", &g);
        if (n > g)
        {
            printf("\nPls select a higner no.\n");
            ng++;
        }
        else if (n < g)
        {
            printf("\nPls select a lower no.\n");
            ng++;
        }
        else
            printf("\nYou guesses the no. in %d attempts", ng);
    } while (g != n);

    return 0;
}


