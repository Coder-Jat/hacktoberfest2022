//Q1 calculator

#include <stdio.h>
int main()
{
    char a;
    int x, y;
    printf("ENTER AN OPERATOR:");
    scanf("%c", &a);
    printf("\nENTER TWO NUMBERS:");
    scanf("%d %d", &x, &y);

    if (a == '+')
    {
        printf("%d+%d=%d", x, y, x + y);
    }
    if (a == '-')
    {
        printf("%d-%d=%d", x, y, x - y);
    }
    if (a == '*')
    {
        printf("%d*%d=%d", x, y, x * y);
    }
    if (a == '/')
    {
        printf("%d/%d=%d", x, y, x / y);
    }
    if (a == '%')
    {
        printf("%d %% %d=%d", x, y, x % y);
    }
    else
    {
        printf("\nPlease give a proper output");
    }

    return 0;
}
//Q2 Quadratic Equation

#include <stdio.h>
#include <math.h>
void quadratic_roots(int a,int b,int c){
    printf("The roots of the equation are:");
    char i;
    int d=sqrt((b*b)-(4*a*c));
    int root1=(-b+d)/(2*a);
    int root2=(-b-d)/(2*a);
    if(d==0){
        printf("both the roots are equal and there value is:%d",root1);
    }
    else if(d>0){
        printf("the value of root 1 is %d and value of root 2 is %d",root1,root2);
    }
    else{
        int realPart = -b / (2 * a);
        int imagPart = sqrt(-d^2) / (2 * a);
        printf("root1 = %d+%di and root2 = %d-%di", realPart, imagPart, realPart, imagPart);
    }
}
int main(){
    int a,b,c;
    printf("enter the value of a ,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    quadratic_roots(a,b,c);
    return 0;
}

//Q3 calender


#include <stdio.h>
void date(int dd, int mm, int yyyy){
    if(mm==4 || mm==6 || mm==9 || mm==11){
        if(dd<31){
            if(dd==30){
                mm+=1;
                dd=1;
            }
            else{
                 dd+=1;
            }
        }
    }
    else if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10){
        if(dd<32){
            if(dd==31){
                mm+=1;
                dd=1;
            }
            else{
                dd+=1;
            }
        }
    }
    else if(mm==2){
        if(yyyy%4==0){
            if(dd<30){
                if(dd==29){
                    mm+=1;
                    dd=1;
                }
                else{
                    dd+=1;
                }
            }
        }
        else{
            if(dd<29){
                if(dd==28){
                    mm+=1;
                    dd=1;
                }
                else{
                    dd+=1;
                }
            }
        }
    }
    else if(mm==12){
         if(dd<32){
            if(dd==31){
                mm=1;
                dd=1;
                yyyy+=1;
            }
            else{
                dd+=1;
            }
        }
    }
    printf("%d %d %d\n",dd,mm,yyyy);
}
int main(){
    int dd,mm,yyyy;
    printf("enter date:");
    scanf("%d %d %d",&dd,&mm,&yyyy);
    printf("tomorrow the date is:");
    date(dd,mm,yyyy);
    return 0;
}
