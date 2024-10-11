// diamond problem : combination of multiple and multilevel inheritance.
//   P
// Q   R
//   S

#include<iostream>
using namespace std;
class Grandparent{
    public:
    int g_money;
    public:
    void getg_m(){
        cout<<"Enter g_money:";
        cin>>g_money;
    }
};
class Parent1: virtual public Grandparent{
    public:
    int p_money;
    public:
    int getp_m(){
        cout<<"Enter p1_money:";
        cin>>p_money;
    }
};
class Parent2:virtual public Grandparent{
    public:
    int p1_money;
    public:
    int getp1_m(){
        cout<<"Enter p2_money:";
        cin>>p1_money;
    }
};
class Child:public Parent1,Parent2{
        public:
        int total_m;
        public:
        int total(){
            getg_m();
            getp1_m();
            getp_m();
            total_m=g_money+p_money+p1_money;
            cout<<"Total="<<total_m<<endl;
        }
};

int main(){
    Child ch;
    ch.total();
}