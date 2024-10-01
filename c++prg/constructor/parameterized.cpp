// parameterized constructor: in which we have to pass the parameter.
#include<iostream>
using namespace std;
class cube{
    public:
    int side;
    cube(int s){  // parametrized constructor
        side=s;  //equal to data member
    }
    int show(){
        return side*side*side;
    }
};
int main(){
    cube cb(8);  //static value
    cout<<"Cube of given number="<<cb.show()<<endl;
    int a;
    cout<<"enter a:";
    cin>>a;
    cube cb1(a);  // user defined
    cout<<"Cube of number="<<cb1.show()<<endl;
}