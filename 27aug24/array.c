#include<stdio.h>
 int main()
 {
    int arr[5];
    printf("enter 5 integers :");
    for (int i = 0; i < 5; i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("displaying integer :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
 }