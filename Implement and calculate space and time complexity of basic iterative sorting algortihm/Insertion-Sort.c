#include <stdio.h>
void insertion_sort(int arr[], int n)
{
int i,j,temp; 
for(i = 1; i < n ; i++)
	{
	 temp = arr[i];
	 j = i-1;
	while(j>=0 && arr[j]>temp)
		{
		arr[j+1] = arr[j];
		j--;
		}
	arr[j+1] = temp;
  }
}

int main(){
	int arr[100], n, i;
	printf("Enter number of elements to be sorted: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	    }
	insertion_sort(arr,n);
	printf("Sorted Array: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
