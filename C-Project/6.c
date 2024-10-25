#include <stdio.h>
#include <stdlib.h>

// Define the Laptop structure
struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

int main() {
    int n;

    // Input the number of laptops
    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    // Dynamically allocate an array of Laptop structures
    struct Laptop *laptops = (struct Laptop *)malloc(n * sizeof(struct Laptop));
    if (laptops == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details for each laptop
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Laptop %d:\n", i + 1);
        printf("Company Name: ");
        scanf(" %[^\n]", laptops[i].company_name); // Read string with spaces
        printf("Processor: ");
        scanf(" %[^\n]", laptops[i].processor); // Read string with spaces
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    // Display the details of all laptops
    printf("\nLaptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Laptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }

    // Free allocated memory
    free(laptops);

    return 0;
}

