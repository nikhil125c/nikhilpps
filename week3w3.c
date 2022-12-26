#include<stdio.h>
#include<math.h>
int main()
{
int fact=1,i,x,n;
float sum=1.0;
printf("enter x and n");
scanf("%d%d",&x,&n);

for(i=1;i<=n;i++)
{
    fact=fact*i;
    sum=sum+pow(x,i)/fact;
}
printf("the sum is %f",sum);
return 0;
}