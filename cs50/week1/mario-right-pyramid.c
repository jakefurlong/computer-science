// Create a left-justified pyramid of blocks (a la Mario Bros)
#include <stdio.h>

void print_pyramid(int height);

int main(void)
{
    // assign input from user to a variable height
    int height;

    do
    {
        printf("Enter height: ");
        scanf("%d", &height);
    }
    while (height <= 0);
    print_pyramid(height);
}

// generate row of blocks
void print_pyramid(int height)
{
    // build the pyramid
    for (int i = 1; i <= height; i++)
    {
        // build the leading spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        // build the blocks
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}