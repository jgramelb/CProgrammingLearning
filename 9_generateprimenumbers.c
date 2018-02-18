/*
We will be finding all of the prime numbers from 3-100
There will be no input to the program
The output will be each prime number separated by a space on a single line
You will need to create an array that will store each prime number as it is generated
You can hard code the first two prime numbers (2 and 3) in the primes array
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void)
{
    int p;
    int i; //To check previous primes
    int countprimes = 0;

    int arrayprimes[100] = {0};
    int primeIndex = 2; //Because we've hard coded the first two prime numbers

    bool isPrime;

    // Hardcode first two prime numbers:

    arrayprimes[0] = 2;
    arrayprimes[1] = 3;

    //For loop to set data as ~
    //Loops through, skipping even numbers
    for (int p = 5; p <= 100; p = p + 2 )
    {
        isPrime = true;

        //For prime numbers and numbers less than the limit (the square root of primes)
        for (i = 1; isPrime && p / arrayprimes [i] >= arrayprimes[i]; i++)
        {
            //If the number is even,
            if (p%arrayprimes[i]==0)
            {
                //Even is not prime
                isPrime = false;
            }
            //If the number is in fact prime,
            if (isPrime == true)
            {
                //For the number in the array, at the iteration, call it p.
                arrayprimes[primeIndex] = p;
                //Raise up the index
                primeIndex++;
            }
        }
    }
    //Print out the prime numbers in a separate for loop
    for (i = 0; i<primeIndex ; i++)
    {
        countprimes++;
        printf("%i ",arrayprimes[i]);
    }
    printf("\nThere are %i prime numbers in this array", countprimes);
    return 0;

}
