// Asks the user to enter size of the array and then the integers (both positive and negative),
// stores them in an array, then sorts the array in ascending order   

#include <stdio.h>
#include <stdlib.h>

// Sort the array in ascending order
void sortAscending(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;

    // Ask first the user for the size
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int)); // requests a block of memory from the heap

    if (arr == NULL) {
        printf("Sorry, memory allocation failed.\n");
        return 1;
    }

       printf("Please enter %d integers (positive or negative) separated by space:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    sortAscending(arr, size);

    // Print the sorted array
    printf("Sorted in Ascending Order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
