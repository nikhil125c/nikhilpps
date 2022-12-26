#include<stdio.h>
int main()
{
int i,j,k,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    k=i;
    for(j=1;j<=2*n-1;j++)
    {
        if(j>=5-i&&j<=3+i)
        {
            printf("%d",k);
            j<4?k++:k--;
           }
           else
           {
            printf(" ");
          }
    }
    printf("\n");
}
return 0;
}
