#include<stdio.h>
 int main()
{
    int a,b,temp;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
    printf(" swaping values:%d %d\n",a,b);
    return 0;
}