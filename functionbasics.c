/* FUNCTIONS
Function - self contained unit of program, perform tasks - causes action or find program value or status of insformation

Functions need to be small and cohesive 
-reduces complexity
-seperate functions are written for each subtask

Functions reduce duplication of code
Helps with readability 

Programmers think of function as a black box:
  Info that goes in (its input)
  The value or action it produces (its output)
  * Hlps u concentrate on the programs overall design rather than the details of what the func should do & how it relates to the program as a whole before worrying about the code

printf()
  First argument is usually a string literal, succeeding arguments are a series of variables or expressions whose vlues are to be displayed
 
 scanf() canr eceive info back from function in two ways
  -Input is stored in an address that you supply as an argument
  -As a return value
  
  
*/

#define SIZE 50
int main(void)
{
  float list[SIZE];
  readlist(list, SIZE);
  sort(list, SIZE);
  average(list, SIZE);
  return 0;
}

/* IMPLEMENT FUNCTIONS
We would have to implement functions readlist(), sort(), average(list, SIZE)
Want to add note to describe functions

We will focus on:   defiine, invoke, pass & return data from functions. 

*/

/*MAIN FUNCTION
main()
-All C programs nust alwashave a main()
Can pass data to it (command line arguments)
Returning data optional (error code)
