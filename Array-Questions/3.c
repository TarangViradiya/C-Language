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

    int even=0;

    for(int i=0 ; i<size ; i++){

        if(i%2==0){
            even += a[i];
        }

    }
    printf("sum is %d",even);
}