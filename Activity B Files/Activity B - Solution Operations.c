// For implementation of functions

#include <stdio.h>
#include "Activity B - Solution Operations.h"

// Reprompt on invalid input
static int accepted_range(const char *prompt, int min, int max) {
    int n;
    int c;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            // clear input buffer
            while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }
        if (n < min || n > max) {
            printf("Out of range. Enter a value from %d to %d.\n", min, max);
            continue;
        }
        return n;
    }
}

// Arithmetic Operation Functions
int op_add(void) {
    printf("\nSelected operation is Addition. Please enter two numbers from 0 to 100 only.\n");
    int firstNum  = accepted_range("First number: ", 0, 100);
    int secondNum = accepted_range("Second number: ", 0, 100);
    int sum = firstNum + secondNum;
    return sum;
}

int op_subtract(void) {
    printf("\nSelected operation is Subtraction. Please enter two numbers from 0 to 100 only.\n");
    int firstNum  = accepted_range("First number: ", 0, 100);
    int secondNum = accepted_range("Second number: ", 0, 100);
    int difference = firstNum - secondNum;
    return difference;
}

int op_multiply(void) {
    printf("\nSelected operation is Multiplication. Please enter two numbers from 0 to 100 only.\n");
    int firstNum  = accepted_range("First number: ", 0, 100);
    int secondNum = accepted_range("Second number: ", 0, 100);
    int product = firstNum * secondNum;
    return product;
}

double op_divide(void) {
    printf("\nSelected operation is Division. Please enter two numbers from 0 to 100 only.\n");
    int firstNum  = accepted_range("First number: ", 0, 100);

    int secondNum;
    while (1) {
        secondNum = accepted_range("Second number (non-zero): ", 0, 100);
        if (secondNum == 0) {
            printf("Division by zero is not allowed. Please enter a non-zero second number.\n");
            continue;
        }
        break;
    }

    double quotient = (double)firstNum / (double)secondNum; // floating point division
    return quotient;
}

void op_quit(void) {
    printf("Selected Operation: Quit\n");
    printf("Exiting now... Goodbye!\n");
}


