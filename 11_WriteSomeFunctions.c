/*We will write some functions in this program.
The first portion finds the greatest common divisor of two non negative integer values and returns the result
The second portion calculates the absolute value of a number
The third portion of the function computes the square root of a number
    if a negative arguments is passed then a message is display and -1.0 should be returned
    should use the absoluteValue function as implemented in the above step
*/

//Caluclate the GCD

#include <stdio.h>

int gcd(int A, int B);
float absoluteValue(float x);

//Function to display the output
int main()
{
    //Tell the user what this program is about:
    printf("This portion of the program finds the greatest common divisor of two non-negative integer values");

    //Code to print out the result
    int A = 0;
    int B = 0;
    int result_gcd;

    printf("\nEnter a value for A: ");
    scanf("%d", &A);
    printf("\nEnter a value for B: ");
    scanf("%d", &B);

    result_gcd = gcd(A,B);
    printf("\nThe greatest common divisor of %d and %d is %d", A,B, result_gcd);



    //Tells the user what this portion is about
    printf("\n\n\n\nThis portion of the program prints out the absolute value of a number given");

    float X = 0;
    float result_absoluteValue = 0;
    printf("\nEnter a value for X: ");
    scanf("%f", &X);

    result_absoluteValue = absoluteValue(X);
    printf("\nThe absolute value of %.2f is %.2f\n\n", X, result_absoluteValue);

    return 0;
}

//Function for GCD
int gcd(A, B)
{
    if (A == 0 || B==0 )
    {
        return 0;
    }
    if (A == B)
    {
        return A;
    }
    if (A > B)
    {
        return gcd(A-B,B);
    }
    if (A < B)
    {
        return gcd(A,B-A);
    }
}

//Function to find the absolute value of number given
float absoluteValue(float x)
{
    if (x<0)
    {
        x = -x;
    }
    return x;
}

//Function to find the square root of number given
float squareRoot(float x)
{
    if (x<0)
    {
        x = -x;
    }
    return x;
}
