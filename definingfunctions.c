/*
Function header 
{ 
  *Put the code here, how to implement the task
}


Function header - Defines the name of the function 
  - parameters
  - the type for the value that the function returns
 
Function body contains the statements that are executed when the function is called
  - have access to any values that are passed as arguments to the function

WHAT DO FUNCTIONS LOOK LIKE IN C?

Return_type Function_name(Parameters, separated by commas)
{
  STATEMENTS GO HERE
}

type of value it returns, its name, the arguments it takes
*/
/*
HEY- 
-choose meaningful names is just as important
- eeds braces to define function - functions can be empty 
-cannot have two functions of the same name
-cannot have names of standard library functions
-name functions using camelCase, underline_case, CapitalCase


void printMessage(void) //void doesn't pass any data
{
  printf("Programming is fun\n")
}

*/

/*FUNCTION PROTOTPYES
function prototypes - statement that defines a function
  -defines its name, its return value type, and type of each of its parameters
  -provides all the external specifications for the function
You can write a prototype for a function exactly the same as the function header
  -only differnce is that you add a semicolon at the end
  */
/* Example

#include & #define directives...
Function prototypes
double Average(double_data_values[], size_t_count);
double Sum(double *x, size_t n);
size_t GetData(double*, size_t);

int main(void)
{
 codein main()
}

*/

#include <stdio.h>

void add()
{
}

int main()
{
  add();
 return 0;
}
