// destructor : it is used to destroy the memory which is allocated by the constructor.
//~ sign
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
    ~cube(){
        cout<<"destructor called.."<<endl;
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

    cout<<"Calling destructor"<<endl;
}