// Run-time polymorphism : function overriding : having same function name in both the base class and child class..
#include<iostream>
using namespace std;
class Base{
    public:
     void show(){
        cout<<"I am in base class."<<endl;
    }
};
class child :public Base{
    public:
    void show(){
      //  show();
        cout<<"I am in child class."<<endl;
    }
};
int main(){
  child ch;  // child class object;
  Base *base;  // pointer of base class.
  base = &ch;  // referencing pointer to child class object.
  base->show();    // calling function of base class.
}