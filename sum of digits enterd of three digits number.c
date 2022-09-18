#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf(" enter three digit  number \n");
    scanf("%d",&a);
    b=a/100;
    c=a%10;
    d=a%100;
    e=d/10;
    f=b+c+e;
    printf(" \n  sum of there digits = %d",f);



    return 0;
}


