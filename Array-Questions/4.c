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

    int min , max=0;

    for(int i=0 ; i< size ; i++){
        
        if(a[i]>max){

            max=a[i];

        }
        if(a[i]<min){

            min=a[i];

        }
    }

    printf("max is %d \n",max);
    printf("min is %d \n",min);

}