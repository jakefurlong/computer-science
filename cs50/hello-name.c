#include <stdio.h>
#define MAX_NAME_LENGTH 100

int main(void)
{   
    char first_name[MAX_NAME_LENGTH];
    char last_name[MAX_NAME_LENGTH];

    printf("What is your first name? ");
    scanf("%99s", first_name);

    printf("What is your last name? ");
    scanf("%99s", last_name);

    printf("Hello, %s %s!\n", first_name, last_name);
}