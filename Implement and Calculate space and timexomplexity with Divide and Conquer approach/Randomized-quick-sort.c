#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int Partition(int A[],int l,int r){
    int pivot = A[l];
    int start =l;
    int end =r;
    while(start<end){
    	while(A[start] <= pivot){
	      start++;
                  }
             while(A[end] > pivot){
                 end--;
                }
      	if(start < end){
            // swap(A[start],A[end]);
            int temp = A[start];
            A[start] = A[end];
            A[end] = temp;
          }
        }
        // swap (A[l] = A[end]);
        int temp = A[l];
        A[l] = A[end];
        A[end] = temp;
        return end; //return position of pivot
  }

int RandPartition(int A[],int l,int r){
    int k = (rand() % (r - l + 1)) + l;
    // swap(A[l],A[k]);
    int temp = A[l];
    A[l] = A[k];
    A[k] = temp;
    return Partition(A,l,r);

}


void RandQuickSort(int A[],int l,int r){
    if(l<r)
    {
        int m = RandPartition(A,l,r);
        RandQuickSort(A,l,m-1);
        RandQuickSort(A,m+1,r);
    }
}


int main(){
	int A[100], n, i;
	printf("Enter number of elements to be sorted: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	RandQuickSort(A,0,n-1);
	printf("Sorted Array: ");
	for(i = 0; i < n; i++)
		printf("%d ", A[i]);
	return 0;
}
