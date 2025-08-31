#include <stdio.h>

int binarySearch(int arr[], int size, int element) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid; // Element found
        } else if (arr[mid] < element) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}

int main() {
    int n, element, result;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &element);
    
    result = binarySearch(arr, n, element);
    if (result != -1) {
        printf("Element found at index %d (position %d)\n", result, result + 1);
    } else {
        printf("Element not found in the array\n");
    }
    
    return 0;
}
