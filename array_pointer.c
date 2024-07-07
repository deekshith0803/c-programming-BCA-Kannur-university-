#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr = arr;  // Pointer to the first element of the array

    // Prompt user to enter values for the array
    printf("Enter number of integers for the array : 3");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", ptr + i);  // Read value and store in array using pointer arithmetic
    }

    // Display elements of the array using pointers
    printf("\nElements of the array using pointers:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  // Accessing array elements using pointer arithmetic
    }
    return 0;
}
