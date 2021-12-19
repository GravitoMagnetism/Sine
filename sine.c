#include <stdio.h>
#include <math.h>
#include "proto.h"


int sin_main()
{
    double a;
    printf("Type in a value to take the sine of: ");
    scanf("%lf", &a);
    printf("\na is now equal to %lf.\n", a);
    sine(a);
    return 0;
}

void sine(double x)
{
    double s;
    s = sin(x);
    printf("\nThe sine of the given value is %f\n", s);
}