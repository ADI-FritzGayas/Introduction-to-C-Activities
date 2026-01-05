// main

#include <stdio.h>
#include <ctype.h> // for toupper
#include "Activity B - Solution Operations.c" // Separate c file for implementation of functions

int main() {
    char ch;

    // Intro
    printf("Greetings! You may perform Basic Arithmetic Operations here:\n");

    while (1) {
        // Display message to get user input
        printf("------------------------------\n");
        printf("Enter A for addition,\nS for subtraction,\nM for multiplication,\nD for Division,\nor Q to Quit: ");

        if (scanf(" %c", &ch) != 1) { // takes the user input
            int c; 
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        ch = (char)toupper((unsigned char)ch);  // normalize to uppercase in case the user entered lowercase

        if (ch == 'Q') {
            op_quit();
            break; // exit the loop and program
        }

        switch (ch) {
            case 'A':
                int sum = op_add();
                printf("Result:The sum is %d\n", sum);
                break;
            case 'S':
                int difference = op_subtract();
                printf("Result:The difference is %d\n", difference);
                break;
            case 'M':
                int product = op_multiply();
                printf("Result:The product is %d\n", product);
                break;
            case 'D':
                double quotient = op_divide();
                printf("Result:The quotient is %.2f\n", quotient);
                break;
            default: 
                printf("Invalid option. Please choose A, S, M, D, or Q.\n");
                break;
         }
    }
   return 0;
}