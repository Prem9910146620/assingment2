#include<stdio.h>
int main()
{
    int x,y,r,sum=0;
    printf("enter the number = ");
    scanf("%d",&x);
    y=x;

    while(y>0)
    {
        r=y%10;
        y=y/10;
        sum=sum+r;
    }
     printf(" sum of its digits is = %d",sum);

printf(" \n printing number append of the number =%d%d",x,sum);






    return 0;
}
