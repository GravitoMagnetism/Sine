#include <stdio.h>
#include <math.h>
#include "proto.h"


int cos_main()
{
    double b;
    printf("Type in a value to take the cosine of: ");
    scanf("%lf", &b);
    printf("\nb is now equal to %lf.\n", b);
    cosine(b);
    return 0;
}

void cosine(double x)
{
    double c;
    c = cos(x);
    printf("\nThe cosine of the given value is %f\n", c);
}