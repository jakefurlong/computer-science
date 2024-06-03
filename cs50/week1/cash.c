// Write a program that gives exact change and counts the coins
#include <stdio.h>

int main(void)
{
    // take a positive integer or zero
    int coins = 0;
    int total;
    do
    {
        printf("Enter an integer: ");
        scanf("%i", &total);
    }
    while (total < 0);

    while (total >= 25)
    {
        if (total >= 25)
        {
            total -= 25;
            coins += 1;
        }
    }

    while (total >= 10)
    {
        if (total >= 10)
        {
            total -= 10;
            coins += 1;
        }
    }

    while (total >= 5)
    {
        if (total >= 5)
        {
            total -= 5;
            coins += 1;
        }
    }

    while (total >= 1)
    {
        if (total >= 1)
        {
            total -= 1;
            coins += 1;
        }
    }

    printf("%i coins\n", coins);
}
        
    
    
