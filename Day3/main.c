#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr1 [4][4];
     printf("please enter the arr1 element \n" );
    for(int i = 0 ; i <4 ; i++){

   for (int j = 0 ; j<4 ; j++){
     scanf("%i",&arr1[i][j]);
   }
    }
   int arr2 [4][4];
        printf("please enter the arr2 element \n" );
   for(int i = 0 ; i <4 ; i++){

   for (int j = 0 ; j<4 ; j++){
     scanf("%i",&arr2[i][j]);
   }
    }

    int sum [4][4];
       for(int i = 0 ; i <4 ; i++){

   for (int j = 0 ; j<4 ; j++){


   }
    sum[i][j]=arr1[i][j]+arr2[i][j];
    }
           printf("sum of 2 array is : \n" );
          for(int i = 0 ; i <4 ; i++){

   for (int j = 0 ; j<4 ; j++){

   }
    printf("%i",sum[i][j]);
    }


      float avar;


    for(int i = 0 ; i <4 ; i++){

   for (int j = 0 ; j<4 ; j++){

   }
    avar = sum[i][j]/16;
    }
 printf("average of 2 array is : \n" );
    for(int i = 0 ; i <4 ; i++){

   for (int j = 0 ; j<4 ; j++){

   }
    printf("%f",avar);
    }


    return 0;
}
