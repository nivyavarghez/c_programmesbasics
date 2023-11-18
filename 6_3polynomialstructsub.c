/*sub two polynomials */
#include <stdio.h>

struct Term {
    float coefficient;
    int exponent;
};

void inputPolynomial(struct Term polynomial[], int degree) {
    int i;
    for (i = degree; i >= 0; i--) {
        printf("Enter the coefficient of x^%d: ", i);
        scanf("%f", &polynomial[i].coefficient);
        polynomial[i].exponent = i;
    }
}

void displayPolynomial(struct Term polynomial[], int degree) {
    int i;
    for (i = degree; i >= 0; i--) {
        if (polynomial[i].coefficient != 0) {
            if (i == degree) {
                printf("%.2f x^%d", polynomial[i].coefficient, i);
            } else if (i == 1) {
                printf(" + %.2f x", polynomial[i].coefficient);
            } else if (i == 0) {
                printf(" + %.2f", polynomial[i].coefficient);
            } else {
                printf(" + %.2f x^%d", polynomial[i].coefficient, i);
            }
        }
    }
    printf("\n");
}

void subPolynomials(struct Term polynomial1[], struct Term polynomial2[], struct Term result[], int degree) {
    int i;
    for (i = degree; i >= 0; i--) {
        result[i].coefficient = polynomial1[i].coefficient - polynomial2[i].coefficient;
        result[i].exponent = i;
    }
}

int main() {
    int d;
    printf("Enter the degree of the polynomials:\n");
    scanf("%d", &d);

    if (d < 1) {
        printf("Degree should be at least one\n");
        return 1; // Exit the program with an error code
    }

    struct Term polynomial1[d + 1]; // +1 because the degree is inclusive
    struct Term polynomial2[d + 1];
    struct Term result[d + 1];

    printf("Enter coefficients for the first polynomial:\n");
    inputPolynomial(polynomial1, d);

    printf("Enter coefficients for the second polynomial:\n");
    inputPolynomial(polynomial2, d);

    printf("The first polynomial is: ");
    displayPolynomial(polynomial1, d);

    printf("The second polynomial is: ");
    displayPolynomial(polynomial2, d);

    subPolynomials(polynomial1, polynomial2, result, d);

    printf("The subtraction of the two polynomials gives: ");
    displayPolynomial(result, d);

    return 0;
}

