#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("   please Enter your number  ");
    int x , y , z ;
    scanf( "%i" ,&x  );
    scanf( "%i" ,&y  );
    scanf( "%i" ,&z  );

    if( x>=y && x>=z    )
    {
        printf( "x is largest"  );
    }

    else if ( y>=x  && y>=z      )
    {
        printf(" y is largest   ");
    }
    else{

        printf("z is largest");
    }




    return 0;
}
