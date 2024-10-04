#include <stdio.h>
int main()
{
    double number = 20.40;
    printf("%.2lf", number);

    // we use a double variable data types when we need to print a type of data that contain motthan 
    // 2 number before and after the point
    double anotherNumber = 30.444;
    printf("\n%.3lf", anotherNumber);
}