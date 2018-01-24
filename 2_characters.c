// Get input from a user

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a value:");

    scanf("%d %s", &i, str);

    printf("\n You entered: %d::::::%s\n", i, str);

    return 0;
}
