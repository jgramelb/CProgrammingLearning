/*CHALLENGE: Print out the perimeter and area of a rectangle

This is the basic example that reads nothing from the command line
*/
#include <stdio.h>

int main()
{

    double width = 12;
    double height = 4;
    //printf("Width is: %f\n",width);
    //printf("Height is: %f\n",height);
    double perimeter = 2.0*(width+height);
    printf("Perimeter is: %f\n", perimeter);
    double area = width*height;
    printf("Area is: %f\n", area);

    return 0;

}


