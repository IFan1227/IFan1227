#include <stdio.h>
int main
{
    int a,b,c,i;
    a=0,b=1;
    printf ("%d",a);//输出0
    printf ("%d",b);//输出1
    for (i=1,i<=100,i++)
    {
        c=a+b;
        printf( "%d",c);
        a=b,b=c;
    }
}