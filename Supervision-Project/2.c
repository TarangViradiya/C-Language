#include <stdio.h>
#include <string.h>

struct student{

    int roll_no;
    char name[100];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float Percent;
};  

void main(){

    struct student stu[5];
    {
        for(int i=0 ; i<1 ; i++){
        
        printf("Enter details of student %d : \n",i+1);
       
        printf("Roll no => ");
        scanf("%d",&stu[i].roll_no);
     
        printf("Name => ");
        scanf(" %[^\n]", stu[i].name);

        printf("Chemistry => ");
        scanf("%d",&stu[i].chem_marks);

        printf("Mathematics => ");
        scanf("%d",&stu[i].maths_marks);

        printf("Physics => ");
        scanf("%d",&stu[i].phy_marks);

        printf("\n");
        }

        for (int i = 0; i < 1; i++)
        {
            printf("Details of student %d : \n",i+1);

            printf("Roll no => %d \n",stu[i].roll_no);
            printf("Name => %s \n",stu[i].name);
            printf("Chemistry => %d\n",stu[i].chem_marks);
            printf("Mathematics => %d\n",stu[i].maths_marks);
            printf("Physics => %d\n",stu[i].phy_marks);
            printf("Total => %d/300 \n",stu[i].chem_marks+stu[i].maths_marks+stu[i].phy_marks);

            float Percent = (stu[i].chem_marks+stu[i].maths_marks+stu[i].phy_marks)/3;

            printf("Percent => %.2f \n",Percent);
            printf("\n");
        }
        
    }

    
        

    


    
    
}
