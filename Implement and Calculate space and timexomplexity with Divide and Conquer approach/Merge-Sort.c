#include <stdio.h>
void Merge(int A[],int l,int mid,int r){
	int i,j,k, B[100];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=r){
        if(A[i] <= A[j])
        {
            B[k]= A[i];
            i++; k++;
        }
        else
        {
            B[k] = A[j];
            j++; k++;
        }
    }
    
    if (i > mid){
	while(j<=r)
    {
        B[k] = A[j];
        j++; k++;
    }
	}
    while(i<=mid){
        B[k] = A[i];
        i++; k++; 
    }
   for(k=l; k<=r;k++){
        A[k] = B[k];
    }
}
void MergeSort(int A[], int l, int r){
    if (l < r){     //Check for base case
	    int mid = (l + r)/2;      //Divide
	    MergeSort(A, l, mid);    //Conquer
	    MergeSort(A, mid+1, r); //Conquer
	    Merge(A,l,mid,r);    //Combine
	    }
         }

int main(){
	int A[100], n, i;
	printf("Enter number of elements to be sorted: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	MergeSort(A, 0, n-1);     
	printf("Sorted Array: ");
	for(i = 0; i < n; i++)
		printf("%d ", A[i]);
	return 0;
}
