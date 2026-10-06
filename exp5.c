#include <stdio.h>

int main() {
    int choice, i, j, k, n, temp, key, found;
    int arr[50];
    int a[10][10], b[10][10], res[10][10];
    int r1, c1, r2, c2;

    printf("----- MENU -----\n");
    printf("1. Sort an array (Bubble sort)\n");
    printf("2. Search an element (Linear search)\n");
    printf("3. Matrix addition\n");
    printf("4. Matrix subtraction\n");
    printf("5. Matrix multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:   /* Sorting a 1D array */
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements: ", n);
            for (i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array: ");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 2:   /* Searching in a 1D array */
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements: ", n);
            for (i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Enter element to search: ");
            scanf("%d", &key);
            found = 0;
            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    printf("Element %d found at position %d\n", key, i + 1);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
                printf("Element %d not found\n", key);
            break;

        case 3:   /* Matrix addition */
        case 4:   /* Matrix subtraction */
            printf("Enter rows and columns: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter first matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &a[i][j]);
            printf("Enter second matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &b[i][j]);

            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++) {
                    if (choice == 3)
                        res[i][j] = a[i][j] + b[i][j];
                    else
                        res[i][j] = a[i][j] - b[i][j];
                }

            printf("Result matrix:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++)
                    printf("%d\t", res[i][j]);
                printf("\n");
            }
            break;

        case 5:   /* Matrix multiplication */
            printf("Enter rows and columns of first matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter rows and columns of second matrix: ");
            scanf("%d %d", &r2, &c2);

            if (c1 != r2) {
                printf("Multiplication not possible (columns of A must equal rows of B)\n");
                break;
            }

            printf("Enter first matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &a[i][j]);
            printf("Enter second matrix:\n");
            for (i = 0; i < r2; i++)
                for (j = 0; j < c2; j++)
                    scanf("%d", &b[i][j]);

            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    res[i][j] = 0;
                    for (k = 0; k < c1; k++)
                        res[i][j] = res[i][j] + a[i][k] * b[k][j];
                }
            }

            printf("Product matrix:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++)
                    printf("%d\t", res[i][j]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}