#include<stdio.h>
int main()
{
 int i,j,k=0;
 for(i=1;i<=5;i++)
 {
   (i<=3)?(k++):(k--);
   {
      for(j=1;j<=5;j++)
      {
         if(j<=2+k&&j>=4-k)
         {
            printf("*");
         }
         else
         printf(" ");
      }
   }
   printf("\n");
 }
return 0;
}