#include<stdio.h>
 
void main() {
	int arr[] = {7, 3, 11, 8, 5, 1};
 
	//# bubble sort
	int n = sizeof(arr)/sizeof(arr[0]);
    for (int j=0;j<n;j++){
           for(int i=0; i < n-j-1 ; i++)
    {
		  if (arr[i] > arr[i+1])
        {
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp	;		
		}	
	}
    }
	
	for(int i=0; i < n ; i++){
		printf("\n%d", arr[i]);
	}
}