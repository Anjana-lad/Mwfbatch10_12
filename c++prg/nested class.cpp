// nested class :class inside class
#include<iostream>
using namespace std;
class A{
    public:
    class B{
        public:
        void show(){
            cout<<"I am in class B"<<endl;
        }
    };
    void show1(){
        cout<<"I am in class A"<<endl;
    }
};
int main(){
    A a;  //outer class
    a.show1();
    A::B ab; // for inner class 
    ab.show();

}