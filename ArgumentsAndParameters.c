/* Arguments and parameters
Data that you pass thru a function 

Parameter - variable in a function declaration & function definition/implementation
                          ^name                           ^actual code
Names of parameter are local to the function

 
EXAMPLE
#include <atdio.h>

void multiplyTwoNumbers(int x, int y)
{
  int result = x* y;
  printf("The product of %d multiplied by %d is: %d\n", x,y, result);
}

int main(void)
{
  multiplyTwoNumbers(10,20);
  multiplyTwoNumbers(20,30);
  multiplyTwoNumbers(50,2);
  
  return 0;
}

*/
