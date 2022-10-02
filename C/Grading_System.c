#include<stdio.h>
#include<conio.h>


int main(){
    // Gradeing System acc to marks 
    // Made By Umesh Badsara :)
    
    printf("*Maximum Marks are 100* \n");
    int marks;

    printf("Enter Marks :");
    scanf("%d/n", &marks);

    if(marks>=90){
        printf("A+\n");

    }
    else if (marks<90 && marks>=75){
        printf("A\n");

    }
    else if (marks>=60 && marks<75){
        printf("B\n");

    }
    else if (marks>=45 && marks<60){
        printf("C\n");
    
    }
    else if (marks>=35 && marks<45){
        printf("D\n");
    
    }
    else {
        printf("Fail\n");
        printf("Try To Improve Next Time\n");
    }
    printf("Thank You ");

getch();

return 0;
}
