// Dynamic array implementation using malloc() and realloc()

#include <stdio.h>
#include <stdlib.h>

// Function to display elements of the array
void displayArray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr;          // Pointer to hold the base address of the dynamic array
    int capacity = 2;  // Initial capacity of the array
    int size = 0;      // Current number of elements in the array

    // Step 1: Create a dynamic array using malloc()
    arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Sorry, memory allocation failed.\n");
        return 1;
    }

    // Step 2: Add elements to the array
    // Add more than the initial capacity to demonstrate realloc()
    for (int i = 0; i < 5; i++) {
        // If array is full, double its capacity using realloc()
        if (size == capacity) {
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }
        }
        arr[size] = i + 1; // Add element
        size++;
    }

    // Step 3: Display elements
    displayArray(arr, size);

    // Step 4: Modify elements by multiplying each element by 10
    for (int i = 0; i < size; i++) {
        arr[i] *= 10;
    }
    printf("----------After modification:----------\n");
    displayArray(arr, size);

    // Step 5: Free the memory once done
    free(arr);
    printf("----------Memory freed successfully.----------\n");

    return 0;
}