#include <iostream>
using namespace std;

int circle();          //Prototype for Circle
int circle()
{
    int rad=0;
    cout<<"\nGive the radius of the circle: ";
    cin>>rad;
    float area=(3.14)*rad*rad;
    cout<<"\nArea of the circle is "<<area;
    return 0;
}

int rectangle();        //Prototype for Rectangle
int rectangle()
{
    int len,brt,area;
    cout<<"\nGive the length of the rectangle: ";
    cin>>len;
    cout<<"\nGive the breadth of the rectangle: ";
    cin>>brt;
    area=len*brt;
    cout<<"\nArea of the rectangle is "<<area;
    return 0;
}

int triangle();         //Prototype for triangle
int triangle()
{
    int base,hgt;
    cout<<"\nGive the base of the triangle: ";
    cin>>base;
    cout<<"\nGive the height of the triangle: ";
    cin>>hgt;
    float area=(0.5)*base*hgt;
    cout<<"\nArea of the triangle is "<<area;
    return 0;
}

int main()
{
    int opt;
    string opt2;
    cout<<"-------WELCOME-------";
    cout<<"\nChoose from the following to find the area\n1.Circle\n2.Rectangle\n3.Triangle\n--->";
    cin>>opt;
    if(opt==1)
    {
        circle();
    }
    else if(opt==2)
    {
        rectangle();
    }
    else if(opt==3)
    {
        triangle();
    }
    else
    {
        {
            cout<<"\nInvalid choice!";
            main();
        }
    }
    
    cout<<"\nWould you like to run the program again? (y/n) ";                    //Asking user if he wants to repeat
    cin>>opt2;
    if(opt2=="y")
    {
        main();
    }
    else if(opt2=="n")
    {
        cout<<"------Thank You-------";
    }
    return 0;
}