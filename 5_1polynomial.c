#include <stdio.h>

int main() {
    int d, i;
    float pol[5] = {0}; // Initialize the array with zeroes
    printf("\n Enter the degree:\n");
    scanf("%d", &d);

    if (d < 1) {
        printf("Degree should be at least one\n");
    } else {
        printf("Enter the coefficients of the polynomial in order starting from x^%d: ", d);
        for (i = d; i >= 0; i--) {
            scanf("%f", &pol[i]); // Read and store the coefficients in the array
        }

        printf("The polynomial is:");
        for (i = d; i >= 0; i--) {
            if (pol[i] != 0) {
                if (i == d) {
                    printf(" %.2f x^%d", pol[i], i);
                }
				 else {
                    if (pol[i] > 0) {
                        printf(" + ");
                    } else {
                        printf(" - ");
                        pol[i] = -pol[i]; // Make the coefficient positive for printing
                    }

                    if (i == 1) {
                        printf("%.2f x", pol[i]);
                    } else if (i == 0) {
                        printf("%.2f", pol[i]);
                    } else {
                        printf("%.2f x^%d", pol[i], i);
                    }
                }
            }
        }
    }
    return 0;
}

