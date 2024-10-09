// multiple inheritance: In this we have 2 parent class and its one child class.
#include<iostream>
using namespace std;
class Mom{
    protected:
    int money_m=5200;
    public:
    void show_m(){
        cout<<"Mom money="<<money_m<<endl;
    }
};
class Dad{
    protected:
    int money_d=520;
    public:
    void show_d(){
        cout<<"Dad money="<<money_d<<endl;
    }
};
class Child:protected Mom,Dad{
  
    public:
    void show(){
        show_d();
        show_m();
        cout<<"Total money="<<money_d+money_m<<endl;
    }
};
int main(){
    Child ch;
    ch.show();
} 