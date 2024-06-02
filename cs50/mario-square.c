// Create a square of blocks (a la Mario Bros)
#include <stdio.h>

void print_length(int height);

int main(void)
{
    // assign input from user to a variable height
    int height;
    printf("Enter height: ");
    scanf("%d", &height);
    
    for (int j = 0; j < height; j++)
        print_length(height); 
}

// generate length blocks
void print_length(int height)
{
    for (int i = 0; i < height; i++)
        printf("#");
        printf("\n");
}