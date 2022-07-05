#include <stdio.h>
int binarySearch(int arr[], int n, int data)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right)/2;   
      
        if (data == arr[mid]) {
            return mid;
        }
        else if (data < arr[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}
 
int main(){
    int arr[] = {2, 5, 6, 8, 9, 10, 25,64,100};
    int data = 64;
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = binarySearch(arr, n, data);
    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }
    return 0;
}
