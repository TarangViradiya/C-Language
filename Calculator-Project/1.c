#include <stdio.h>
#include <string.h>

void addition(float a, float b){
    printf("Result : %.2f \n\n", a + b );
}

void subtraction(float a , float b){
    printf("Result : %.2f \n\n", a - b );
}

void multiplication(float a , float b){
    printf("Result : %.2f \n\n", a * b );
}

void division(float a , float b){
    if (b!=0)
    {
        printf("Result : %.2f \n\n", a / b );
    }
    else{
        printf("Error");
    }
}

void modulus(int a , int b){
    if (b!=0)
    {
        printf("Result : %d \n\n", a % b );
    }
    else{
        printf("Error");
    }
}

int main(){

    int choice ;
    float n1,n2;

    do
    {
        printf("press 1 for addition (+) \n ");
        printf("press 2 for subtraction (-) \n ");
        printf("press 3 for multiplication (*) \n ");
        printf("press 4 for divison (/) \n ");
        printf("press 5 for modulus (%%) \n ");
        printf("press 0 for exit :) \n\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        if(choice >= 1 && choice <= 5){
            printf("\nEnter first number : ");
            scanf("%f",&n1);
            printf("Enter second number : ");
            scanf("%f",&n2);
        }

        switch (choice)
        {

        case 1:
            addition(n1,n2);
            break;
        
        case 2:
            subtraction( n1 , n2 );
            break;

        case 3:
            multiplication( n1 , n2 );
            break;    

        case 4:
            division( n1 , n2 );
            break;  

        case 5:
            modulus( n1 , n2 );
            break;      
        
        case 0:
            printf("Exit the program.");
            break;

        default:
            printf("Enter valid choice. \n");
            break;
        }
    } while (choice != 0);
    
}