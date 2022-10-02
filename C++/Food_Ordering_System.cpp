#include<iostream>
using namespace std;
int main(){

int fastfood;
cout<<"\t\t\t\t\t\t\t\t  MENU\n";
cout<<"\n1:PARATHA PIZZA\t\t2:VEG PIZZA\t\t3:NON-VEG PIZZA\t\t4:PIZZA MANIA\t\t5:PARTY COMBOS\t\t6:DESSERT\n";
cout<<"\nWhat do you want to order :";
cin>>fastfood;

switch(fastfood){

    case 1: cout<<"\nPARATHA PIZZA : 150\n";
      break;

    case 2: cout<<"\nVEG PIZZA : 120\n";
      break;

    case 3: cout<<"\nNON-VEG PIZZA : 199\n";
     break;

    case 4: cout<<"\nPIZZA MANIA : 59\n";
     break;

    case 5: cout<<"\nPARTY COMBOS : 169\n";
     break;

    case 6: cout<<"\nDESSERT : 79\n";
     break;


    default: cout<<"Not Available Right Now \n";   
}

cout<<"\nOrder Seccessfully :)\n";

return 0;
}

// Presented By Gautam!
