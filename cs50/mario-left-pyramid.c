// Create a left-justified pyramid of blocks (a la Mario Bros)
#include <stdio.h>

void print_row(int length);

int main(void)
{
    // assign input from user to a variable height
    int height;
    printf("Enter height: ");
    scanf("%d", &height);

    // loop through the height and call the print_row function to produce incrementally longer rows
    for (int j = 0; j < height; j++)
    {
        print_row(j + 1);
    }
}

// generate row of blocks
void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}