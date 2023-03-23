#include <stdio.h>

// Function to swap two elements of an array
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* This function selects a pivot element and partitions the array around it
   such that all elements smaller than pivot are on the left and all larger 
   elements are on the right. It then returns the index of the pivot element.
*/
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

/* This function recursively partitions the array until the kth smallest element 
   is found. It returns the kth smallest element.
*/
int quickselect(int arr[], int low, int high, int k)
{
    if (k > 0 && k <= high - low + 1) {
        int pivot_index = partition(arr, low, high);
        if (pivot_index - low == k - 1) {
            return arr[pivot_index];
        }
        if (pivot_index - low > k - 1) {
            return quickselect(arr, low, pivot_index - 1, k);
        }
        return quickselect(arr, pivot_index + 1, high, k - pivot_index + low - 1);
    }
    return -1;
}

// Driver program to test above functions
int main()
{
    int arr[] = { 3, 6, 2, 8, 9, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int kth_smallest = quickselect(arr, 0, n - 1, k);

    printf("%dth smallest element is %d", k, kth_smallest);
    return 0;
}
//output
3th smallest element is 3//