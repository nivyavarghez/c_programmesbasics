#include <stdio.h>

int main() {
    int d, i;
    float pol1[5] = {0}; // Initialize the first polynomial's coefficients with zeroes
    float pol2[5] = {0}; // Initialize the second polynomial's coefficients with zeroes

    printf("\nEnter the degree of the first polynomial:\n");
    scanf("%d", &d);

    if (d < 1) {
        printf("Degree should be at least one\n");
        return 1; // Exit the program with an error code
    } else {
        printf("Enter the coefficient of the first polynomial in order starting from x^%d: ", d);
        for (i = d; i >= 0; i--) {
            scanf("%f", &pol1[i]); // Read and store the coefficients of the first polynomial
        }
    }

    printf("\nEnter the degree of the second polynomial:\n");
    scanf("%d", &d);

    if (d < 1) {
        printf("Degree should be at least one\n");
        return 1; // Exit the program with an error code
    } else {
        printf("Enter the coefficient of the second polynomial in order starting from x^%d: ", d);
        for (i = d; i >= 0; i--) {
            scanf("%f", &pol2[i]); // Read and store the coefficients of the second polynomial
        }
    }

    printf("\nThe first polynomial is:");
    for (i = d; i >= 0; i--) {
        if (pol1[i] != 0) {
            if (i == d) {
                printf(" %.2f x^%d", pol1[i], i);
            } else if (i == 1) {
                printf(" + %.2f x", pol1[i]);
            } else if (i == 0) {
                printf(" + %.2f", pol1[i]);
            } else {
                printf(" + %.2f x^%d", pol1[i], i);
            }
        }
    }

    printf("\nThe second polynomial is:");
    for (i = d; i >= 0; i--) {
        if (pol2[i] != 0) {
            if (i == d) {
                printf(" %.2f x^%d", pol2[i], i);
            } else if (i == 1) {
                printf(" + %.2f x", pol2[i]);
            } else if (i == 0) {
                printf(" + %.2f", pol2[i]);
            } else {
                printf(" + %.2f x^%d", pol2[i], i);
            }
        }
    }

    // Perform addition of the two polynomials and print the result
    printf("\nThe sum of the two polynomials is:");
    for (i = d; i >= 0; i--) {
        float sum = pol1[i] + pol2[i];
        if (sum != 0) {
            if (i == d) {
                printf(" %.2f x^%d", sum, i);
            } else if (i == 1) {
                printf(" + %.2f x", sum);
            } else if (i == 0) {
                printf(" + %.2f", sum);
            } else {
                printf(" + %.2f x^%d", sum, i);
            }
        }
    }

    return 0;
}

