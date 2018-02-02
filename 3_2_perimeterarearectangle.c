
/*CHALLENGE: This program will calculate the perimeter and area of a rectangle given its width and height

This is the basic example that reads input from the command line
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 0;
    double area = 0;

    printf("Width is: %f", width);
    printf("Height is: %f", height);

    perimeter = 2*width + 2*height;
    printf("\nPerimeter is: %f\n", perimeter);
    area = width*height;
    printf("\nArea is: %f\n", area);

    return 0;

}


