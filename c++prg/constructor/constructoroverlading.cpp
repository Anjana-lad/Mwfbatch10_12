// constructor overloading : in this we have more then one constructor in a class.
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,width,area;
    public:
    Rectangle();   //default
    Rectangle(int ,int);   // parameterized
    int area_r(){
        return length * width;
    }
};
Rectangle :: Rectangle(){
    cout<<"Enter length and width:";
    cin>>length>>width;
}
Rectangle :: Rectangle(int l,int w){       
    length=l;
    width=w;
}
int main(){
    Rectangle rc;  // default constructor
    Rectangle rc1(10,5);  // parameterized constructor
    cout<<"Area of rectangle with default constructor="<<rc.area_r()<<endl;
    cout<<"Area of rectangle with parameterized:"<<rc1.area_r()<<endl;
}