#include <stdio.h>

// Function to print odd elements from an array
void printOddElements(int arr[], int size) {
    printf("Odd elements in the array are:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n"); // New line for better output formatting
}

int main() {
    int size;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    // Input elements for the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Call the function to print odd elements
    printOddElements(array, size);

    return 0;
}
