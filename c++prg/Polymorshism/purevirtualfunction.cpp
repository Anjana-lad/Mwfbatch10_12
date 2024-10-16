// pure virtual function : function name are same in all the child class and it is assign to 0;
#include<iostream>
using namespace std;
class shape{
    public:
 //   virtual int cal_area()=0; // virtual function 
};  // Abstract class.
class circle:public shape{
    public:
    float radius,area_c;
    public:
    circle(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    int cal_area(){
        area_c=3.14*radius*radius;
        cout<<"Area of circle="<<area_c<<endl;
    }
};
class rectangle:public shape{
    public:
    int length,width,area_r;
    public:
    rectangle(){
        cout<<"Enter length and width:";
        cin>>length>>width;
    }
    int cal_area(){
        area_r=length*width;
        cout<<"Area of rectangle="<<area_r<<endl;
    }
};
int main(){
    circle cr;
    cr.cal_area();
    rectangle rc;
    rc.cal_area();    
}