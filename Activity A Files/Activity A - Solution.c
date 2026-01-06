// Fixed 5 elements in an array

#include <stdio.h>

int main() {
    
    int arrLib[] = {20, -20, 50, -50, 100};  
    int arrLibSize = sizeof(arrLib)/sizeof(arrLib[0]); // determine the number of elements in arrLib
    int i, j;

    // Sorting
    for (i = 0; i < arrLibSize - 1; i++) {
        int swapped = 0;
        // Compare first two elements
        for (j = 0; j < arrLibSize - 1; j++) {
            // For ascending order, swap if left > right
            if (arrLib[j] > arrLib[j+1]) {
                int temp = arrLib[j];
                arrLib[j] = arrLib[j+1];
                arrLib[j+1] = temp;
                swapped = 1;
            }
        }
    }

    // Printing
    printf("Sorted in Ascending Order: ");
    for (i = 0; i < arrLibSize; i++) {
        printf("%d ", arrLib[i]);
    }
    printf("\n");

    return 0;
}