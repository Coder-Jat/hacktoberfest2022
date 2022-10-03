#include<stdio.h>
#include<conio.h>

int main(){
    // Stop on odd input
    
    int n;
    do{
    printf("Enter A Number :");
    scanf("%d", &n);
    
    if (n%2 != 0)
    {
        printf("It's An Odd Number \n ");
        break;
    }
    else{
        printf("It's An Even Number \n ");
    }
    

    } while (1);
    printf("Thank You \n");
    getch();
}
