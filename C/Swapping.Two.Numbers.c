#include<stdio.h>
/* This code swap two numbers..
   And this also differentiate between swap by address and by direct number 
   Made By Umesh Badsara :)
*/ 

void swap(int a , int b){
    int t = a;
    a = b;
    b = t;

    printf("a = %d , & b = %d \n", a, b); 
}

void _swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;

    printf("a = %d , & b = %d \n", *a, *b);
}

int main(){
    int x = 3;
    int y = 5;

    swap(x , y);
    printf("X = %d & Y = %d \n", x, y);

    _swap(&x , &y);
    printf("X = %d & Y = %d \n", x, y);

    return 0;
}
