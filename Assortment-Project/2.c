#include <stdio.h>

void main(){

    int rows , cols ;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    printf("Enter number of cols : ");
    scanf("%d",&cols);

    int a[rows][cols];

    printf("Enter the elements of array : \n");
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int largest=a[0][0];

     for(int i=0 ; i<rows ; i++){

        for(int j=0 ; j<cols ; j++){

            if (a[i][j] > largest)
            {
                largest=a[i][j];
            }
            
        }
    }

    printf("largest number is : %d",largest);
    
}