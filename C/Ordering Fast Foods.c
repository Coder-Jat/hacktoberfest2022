#include<stdio.h>
#include<conio.h>
int main(){

int fastfood;
printf("Fast Foods :: \n");
printf(" 1 : pizza \n 2 : burger \n 3 : bread \n 4 : momos \n 5 : pasta \n ");
printf(":- Thali Combo :: \n");
printf(" 6 : Chappati , Aachar , Salad , Dal , Raayta , seasonal vegetables , Rasgulla \n");
printf(" :- Thali Combo -2 \n");
printf(" 7 : Chappati , Aachar , Salad , Dal Makhani , Raayta , seasonal vegetables , Gulab Jamun , Naan , Rice \n");
printf("\n");
printf("\n");
printf("\t");
printf("What do you want to order :");
scanf("%d", &fastfood);

switch(fastfood){

    case 1: printf("\nPizza = 99 \n");
      break;

    case 2: printf("\nBurger = 49 \n");
      break;

    case 3: printf("\nBread = 35 \n");
     break;

    case 4: printf("\nMomos = 50 \n");
     break;

    case 5: printf("\nPasta = 120 \n");
     break;

    case 6: printf("\nThali Combo = 210\n");
     break;

    case 7: printf("\nThali Combo -2 = 360\n");
     break;

    default: printf("\nNot Available Right Now \n");
   
}
getch();
return 0;
}
