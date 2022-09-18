#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=x&1;
    if (y==0)
    {
        printf("even");
    }
    else
        printf("odd");

 return 0;
}
