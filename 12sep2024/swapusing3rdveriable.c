#include<stdio.h>
void main()
{
    int a,b;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf(" swaping values:%d %d\n",a,b);
}