#include <iostream>

using namespace std;

int gcd(int x,int y){
    if(x==0)
        return y;
    return gcd(y%x,x);
}

int main()
{
    cout<<"";
    int a=12;
    int b=16;
    cout<<"GCD = "<<gcd(a,b);
    return 0;
}
