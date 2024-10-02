#include <stdio.h>

void main(){

    int size ;

    printf("Enter size of array : ");
    scanf("%d",&size);

    int a[size];

    printf("Enter elements of array : \n");
    for(int i=0 ; i<size ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("a[%d] = ",size);
    for(int i=0 ; i<size ; i++){
       
        printf("%d",a[i]);
        if( i < size - 1){
            printf(",");
        }
    }
}