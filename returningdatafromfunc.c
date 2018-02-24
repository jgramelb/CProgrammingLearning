
/*
Return_type Function_name(List of parameters - separated by commas)
{
STATEMENTS GO HERE
}

return statement provides the means of exiting from a function 
-similar to break in loops

psuedocode:
return expression;

returns the result of that expression
conversion is possible

int x = myFunctionCall();
whatever the function returns, will be assigned to x

return values returned from function calls

*/

#include <stdio.h>

int multiplyTwoNumbers(int x, int y)
{
  int result = x*y;
  return result;
}

int main(void)
{
  int result = 0;
  result = multiplyTwoNubers(10,20);
  
  printf("result is %d\n", result);
  return 0;
}
