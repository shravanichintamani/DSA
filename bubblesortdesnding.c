#include<stdio.h>
 
void main() 
{
	int arr[] = {1,5,8,3,11,4};
 
	//# bubble sort
	int n = sizeof(arr)/sizeof(arr[0]);
    for (int j=0;j<n-1;j++){
           for(int i=0; i < n-j-1 ; i++)
    {
		  if (arr[i] < arr[i+1])
        {
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp	;		
		}	
	}
    }
