#include <stdio.h>

void main(){

    int rows , cols ;

    printf("Enter the rows of array : ");
    scanf("%d",&rows);

    printf("Enter the cols of array : ");
    scanf("%d",&cols);

    int a[rows][cols];

    printf("Enter the elements of array : \n");
    for(int i=0 ; i<rows ; i++){

        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    int t[cols][rows];

    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            t[j][i]=a[i][j];
        }
        
    }

    printf("The transpose matrix of the array:\n");
    for (int i = 0; i < cols; i++) {

        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", t[i][j]);
        }

        printf("\n");
    }
    
}