#include <stdio.h>
#include <string.h>

void main(){

    FILE *evenfile, *oddfile;

    evenfile = fopen("evenfile.txt","w");
    oddfile = fopen("oddfile.txt","w");

    if(evenfile==NULL || oddfile==NULL){
        printf("Error");
    }

    for (int i = 50 ; i <= 70 ; i++)
    {
        if( i % 2 == 0){
            fprintf(evenfile,"%d, ",i);
        }
        else{
            fprintf(oddfile,"%d, ",i);
        }
    }

    fclose(evenfile);
    fclose(oddfile);
    
}
