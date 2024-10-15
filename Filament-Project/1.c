#include <stdio.h>
#include <string.h>

void main(){

    char str[20];

    printf("Enter string : ");

    gets(str);
  

    int length=0,i=0;

    while(str[i]!='\0')
    {
        i++;
        length++;
    }

     
    int left = 0;
    int right = length-1;
    int count=0;

    while(left<right){

        if (str[left]!=str[right])
        {
            count++;
        }
        left++;
        right--;


    }
    
    if(count>0){
        printf("Not palindrom \n");
    }
    else{
        printf("plaindrom");
    }

}