#include<iostream>
using namespace std;
class shape
{
    int radius;
    float base;
    double height;
    public:shape()
    {
        radius = 5; base = 10; height =20;
    }
    void area(int r)
    {
        cout << "Area of circle " << (3.14*r*r) << endl;
    }
    void area(float b, double h)
    {
        cout<<"\n Area of Triangle"<< (0.5*b*h) << endl;
    }
    void area(int r, double h)
    {
        cout<<"\n Volume of cylinder"<< (3.14*radius*radius*height) << endl;
    }
    void area(double h){
        cout<<"\n Area of square"<< (h*h) << endl;
    }
    ~shape()
    {
        cout<<"\n Destroying shape"<< endl;
    }
};
int main(){
    shape s1;
    s1.area(5);
    s1.area(20,4);
    s1.area(5.5f,8.3);
    s1.area(9.95);
    return 0;
}
