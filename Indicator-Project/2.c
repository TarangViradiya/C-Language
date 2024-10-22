#include <stdio.h>

#define ROWS 3
#define COLS 3

void cubeElements(int (*arr)[COLS], int rows, int cols);

int main() {
    int arr[ROWS][COLS];

    // Input elements for the 2D array
    printf("Enter the elements of the 2D array (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the function to compute cubes
    cubeElements(arr, ROWS, COLS);

    // Output the cubed elements
    printf("\nCubes of the elements in the 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void cubeElements(int (*arr)[COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] *= arr[i][j] * arr[i][j]; // Calculate the cube
        }
    }
}

