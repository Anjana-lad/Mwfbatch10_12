// heriarichical inheritance: having one base class and multiple child class.
#include<iostream>
#define pi 3.14
using namespace std;
class Shape{
    public:
    string name;
    public:
    Shape(){
        cout<<"Enter name:";
        cin>>name;
    }
};
class Circle:public Shape{
    public:
    float radius,a_c;
    public:
    Circle(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    int Area_c(){
        a_c=pi*radius*radius;
        cout<<"Area of circle="<<a_c<<endl;
    }
};
class Rectangle:public Shape{
    public:
    int length,breadth,a_r;
    public:
    Rectangle(){
        cout<<"Enter length and breadth:";
        cin>>length>>breadth;
    }
    int Area_r(){
        a_r=length*breadth;
        cout<<"Area of rectangle="<<a_r<<endl;
    }
};
int main(){
    Circle cr;
    cr.Area_c();
    Rectangle rc;
    rc.Area_r();
}