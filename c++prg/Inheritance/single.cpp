// single inheritance:
//syntax: class child_name :access specifier parent_class name{}
//wAP for single inheritance class "vehicle and derived "car" the base class has data_member color,max_speed and derived class have number of doors.
#include<iostream>
using namespace std;
class Person{   // parent class
    protected:
    int id;
    string name;
    public:
    void get_id(){  // mf 
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void show(){  // mf
        cout<<"Id="<<id<<"\n Name="<<name<<endl;
    }
};
class Student:private Person{ //child class
    public:
    int percent;
    public:
    void get_percent(){
        get_id();
        cout<<"Enter percent:";
        cin>>percent;
    }
    void display(){
        show();
        cout<<"Percent="<<percent<<endl;
    }
};
int main(){
    Student st;
    st.get_percent();
    st.display();
}

//wAP for single inheritance class "vehicle and derived "car" the base class has data_member color,max_speed and derived class have number of doors.