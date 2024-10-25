#include <stdio.h>

#define ROWS 3
#define COLS 4

// Function to calculate the average of elements in a 2D array
float calculateAverage(int arr[ROWS][COLS]) {
    int total = 0;
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total += arr[i][j];
            count++;
        }
    }

    return (float)total / count; // Return average
}

int main() {
    int array[ROWS][COLS];
    
    // Input elements for the 2D array
    printf("Enter the elements of the 2D array (%d rows and %d columns):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Calculate and print the average
    float average = calculateAverage(array);
    printf("The average of all elements in the array is: %.2f\n", average);

    return 0;
}
