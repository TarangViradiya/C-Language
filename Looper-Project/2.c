#include <stdio.h>

int main() {
    
    long long number; 
    int count = 0;   

    
    printf("Enter a number: ");
    scanf("%lld", &number);

    
    if (number < 0) {
        number = -number; 
    }

    
    do {
        count++;
        number /= 10; 
    } while (number != 0); 


    printf("Total number of digits: %d\n", count);
    return 0;
}
