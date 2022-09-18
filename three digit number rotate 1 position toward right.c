#include<stdio.h>
int main()
{
    int x,y,z,j,m ;
    printf("enter three digit  number = ");
    scanf("%d",&x);
    y=x%100;
    z=y/10;
    j=x/100;
    m=x%10;
    printf(" rotating number one position toward right =%d%d%d",m,j,z);

 return 0;
}
