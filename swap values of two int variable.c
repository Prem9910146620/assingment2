#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" enter the two numbers \n");
    scanf(" \n %d%d",&a,&b);
    printf(" \n A=%d \n B=%d",a,b);
    c=a;

    a=b;
    b=c;
    printf(" \n A=%d \n B=%d",a,b);
    return 0;
}

