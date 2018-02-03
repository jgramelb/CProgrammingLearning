/*
We will display the byte size of basic data types
int, char, long, long long, double, long double

*/

#include <stdio.h>

int main()
{
    printf("The byte size of int is: %d\n ", sizeof(int));
    printf("The byte size of float is: %d\n ", sizeof(float));
    printf("The byte size of _Bool is: %d\n ", sizeof(_Bool));
    printf("The byte size of char is: %d\n ", sizeof(char));
    printf("The byte size of long is: %d\n ", sizeof(long));
    printf("The byte size of long long is: %d\n ", sizeof(long long));
    printf("The byte size of double is: %d\n ", sizeof(double));
    printf("The byte size of long double is: %d\n ", sizeof(long double));
}
