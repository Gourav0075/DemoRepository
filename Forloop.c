#include<stdio.h>


int main()
{
    int i,j;

     for(i=0;i<=5;i++)
     {
         for(j=0;j<=i;j++)
         {
         printf("*");
         }
         printf("\n");
     }

     printf("\n");

     for(i=1;i<=10;i++)
     {
         printf("%d\n",i);
     }

     for(i=1;i<=10;i++)
     {
         int num;
         num=num*i;
         printf("num=%d \n ",num);
     }



    //  for(i=0;i<=5;i++)
    //  {
    //     for(j=5;j<=i;j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //  }

      

    return 0;

}