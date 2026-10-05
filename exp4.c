#include <stdio.h>

int main() {
    int n, i, t, sum = 0, x;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* 1. for loop: multiplication table */
    printf("\nMultiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    /* 2. while loop: sum of digits */
    t = n;
    while (t > 0) {
        sum = sum + t % 10;
        t = t / 10;
    }
    printf("\nSum of digits of %d = %d\n", n, sum);

    /* 3. do-while loop: repeat until input is positive */
    do {
        printf("\nEnter a positive number: ");
        scanf("%d", &x);
    } while (x <= 0);

    printf("You entered: %d\n", x);

    return 0;
}