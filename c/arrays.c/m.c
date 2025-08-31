#include <stdio.h>

int main() {
    int n;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int array1[n], array2[n], sumArray[n];

    // Input elements for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Input elements for the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Calculate the sum of corresponding elements
    for (int i = 0; i < n; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    // Print the elements of the third array
    printf("Sum of corresponding elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sumArray[i]);
    }

    return 0;
}
