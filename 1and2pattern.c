#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=6;i++)
{
    for(j=1;j<=i;j++)
    {
        if((i==3&&j==1)||(i==4&&j==2)||(i==5&&j==4)||(i==5&&j==5))
        {
            printf("2 ");
        }
        
        else 
        {
            printf("1 ");
        }
    }
    printf("\n");
}
return 0;
}