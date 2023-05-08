#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int  y;
    int quotient;
    int  remainder;
    scanf("%i",&x);
    scanf("%i",&y);
    quotient=x/y;
    remainder=x%y;
    printf("%i \n ",quotient);
    printf("%i \n ",remainder);
}
