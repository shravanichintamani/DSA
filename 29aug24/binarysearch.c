#include <stdio.h> 

int binarySearch(int arr[], int key, int low, int high) 
{
    if (low > high) 
      {
        return -1; 
      } 
       int mid = (low + high) / 2; 
      if (arr[mid] == key) 
      {
         return mid;
      } 
      else if (arr[mid] < key) 
      {
        return binarySearch(arr, key, mid + 1,high); 
      }
       else 
       {
          return binarySearch(arr, key, low, mid - 1); 
       }
} 

int main() 
{
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
     int key;
     printf("\nEnter number to find\n"); 
      scanf("%d", &key); 
      int result = binarySearch(arr, key, 0, sizeof(arr) / sizeof(arr[0]) - 1); 
     if (result != -1) 
     {
       printf("Element found at index %d\n", result);
     }
     else 
      {
         printf("Element not found\n");
      } 

      return 0;
}