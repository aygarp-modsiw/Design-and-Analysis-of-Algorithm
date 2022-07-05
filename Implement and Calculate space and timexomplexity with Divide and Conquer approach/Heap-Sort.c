#include <stdio.h>
void heapify(int A[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child
    // If left child is larger than root
    if (left < n && A[left] > A[largest])
        largest = left;
    // If right child is larger than largest so far
    if (right < n && A[right] > A[largest])
        largest = right;
    // If root is not largest
    if (largest != i) {
		//swap A[i] with A[largest]
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(A, n, largest);
    }
}
void HeapSort(int A[], int n)
{
    // Build heap
    for(int i = n/2-1; i >= 0; i--)
        heapify(A, n, i);
    // One by one extract an element from heap
    for(int i = n-1; i >= 0; i--) {
        // Swap current root element to end
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        // call max heapify on the reduced heap
        heapify(A, i, 0);
    }
}
int main(){
	int A[100], n, i;
	printf("Enter number of elements to be sorted: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	HeapSort(A,n);
	printf("Sorted Array: ");
	for(i = 0; i < n; i++)
		printf("%d ", A[i]);
	return 0;
}
