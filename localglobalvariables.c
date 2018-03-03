/* LOCAL & GLOBAL VARIABLES

Local Variables -
Variables defined inside a function are known as automatic local variables
The values are local to the function
Value cannot be accessed by any other function
Initial value is given to a variable inside a function, that initial value is assigned to the variable each time the function is called
Local variables are also applicable to any code where the variable is created in the block

Global variables -
Opposite of the local
Can be accessed by any function in the program
Has the lifetime of the program
Declared outside of any function. Does not belong to any particular function
Any function in the program can change the value of a global variable
If there is a local variable declared in a function with the same name, then, within that function, the local variable will mask the global variable.
GLOBAL VARIABLE IS NOT ACCESSIBLE
*/

/*EXAMPLE
#include <stdio.h>

int myglobal = 0; //global

int main()
{
    int myLocalMain=0; //local
    //Can access my global and myLocal
    return 0;
}

void myFunction()
{
    int x; //local variable
    //can access myGlobal and x, cannot access myLocal

}
*/

/*GLOBAL VARIABLES SHOULD BE AVOIDED
Promotes coupling between functions
Hard to find the location of the bug
Hard to debug
