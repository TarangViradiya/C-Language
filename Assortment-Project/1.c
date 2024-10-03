#include <stdio.h>

void main(){

    int size;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the elements of array : \n ");
    for(int i=0 ; i<size ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    int nelements ;
    printf("Negative elements from an Array: ");
    for(int i=0 ; i<size ; i++){

        if (a[i]<0)
        {
        printf("%d ",a[i]);
        if( i < size - 1){
            printf(",");
        }
        }
        
    }

    
}