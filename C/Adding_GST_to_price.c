#include<stdio.h>

int calculatevalue(float value){
    value = value + (0.12*value);

    printf("The final price is : %f \n", value);
}
int calculatevalue2(float value){
    value = value + (0.18*value);

    printf("The final price is : %f \n", value);
}
int calculatevalue3(float value){
    value = value + (0.28*value);

    printf("The final price is : %f \n", value);
}
int main (){
    float value ;
    int percentage ;
    printf("Press the following button for the exact percentage of gst ::--> \n");
    printf(" 1 - 12 o/o \n");
    printf(" 2 - 18 o/o \n");
    printf(" 3 - 28 o/o \n");
    printf("Enter the exact percentage : ");
    scanf("%d", &percentage);
    printf("Enter Value Of the item :");
    scanf("%f", &value);

    if (percentage == 1)
    {
        calculatevalue(value);
    }
    else if (percentage == 2)
    {
        calculatevalue2(value);
    }
    else if (percentage == 3)
    {
        calculatevalue3(value);
    }
    else
    {
        printf("Enter a valid number !!");
    }
    
    
    return 0;
}
