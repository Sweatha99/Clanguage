#include <iostream>
#define p (3.14)
using namespace std;
double ar=0.0;
double area(double c)
{
    ar=p*c*c;
    return ar;
}
double area(double a,double b)
{
    ar=a*b;
    return ar;
}
float area(float a,float b)
{
    ar=0.5*a*b;
    return ar;
}
int main()
{
    int n;
    cout << "**TO FIND AREA'S**" << endl;
    cout << "1.CIRCLE      2.RECTANGLE     3.TRIANGLE"<<endl;
    cout << endl <<"Enter your choice :";
    cin >> n;
    if(n==1)
    {
        int r;
        cout<< "Enter the radius of circle :";
        cin >>r;
        double a=area(r);
        cout << "Area of circle :"<<a;
    }
    else if(n==2)
    {
        double l,b;
        cout<< "Enter the length of rectangle :";
        cin >>l;
        cout<< "Enter the breadth of rectangle :";
        cin >>b;
        double a=area(l,b);
        cout << "Area of rectangle :"<<a;
    }
     else if(n==3)
    {
        float l,b;
        cout<< "Enter the base of triangle :";
        cin >>l;
        cout<< "Enter the height of triangle :";
        cin >>b;
        float a=area(l,b);
        cout << "Area of triangle :"<<a;
    }
    return 0;
}
