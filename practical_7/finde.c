#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function to calculate the factorial of a number
int factorial(int n);

int main(void) {
    long int i, order;
    double e, *terms;

    // Prompt the user to enter the required polynomial order
    printf("Enter the required polynomial order:\n");

    // Validate user input
    if (scanf("%ld", &order) != 1) {
        printf("Didn't enter a number.\n");
        return 1;
    }

    // Allocate memory for an array to store the terms of the Taylor series
    terms = malloc(order * sizeof(double));

    // Calculate and display each term of the Taylor series
    for (i = 0; i < order; i++) {
        terms[i] = 1.0 / (double)factorial(i + 1);
        printf("e term for order %ld is: %1.14lf\n", i + 1, terms[i]);
    }

    // Initialize the estimated value of 'e' to 1.0
    e = 1.0;

    // Sum up the terms to estimate the value of 'e'
    for (i = 0; i < order; i++) {
        e = e + terms[i];
    }

    // Free the allocated memory for the "terms" array
    free(terms);

    // Display the estimated value of 'e' and the difference from the actual value
    printf("e estimated: %.15lf\n Difference: %e\n", e, e - exp(1.0));

    return 0;
}

// function to calculate the factorial of a number
int factorial(int a) {
    if (a < 0) {
        printf("Error: negative number passed to factorial. \n");
        return -1;
    } else if (a == 0) {
        return 1;
    } else {
        return (a * factorial(a - 1));
    }
}
