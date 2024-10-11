// multilevel inheritance:- 
#include<iostream>
using namespace std;
class Employee{
    public:
    int eid;
    string name;
    public:
    void get_data(){
        cout<<"Enter eid:";
        cin>>eid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin,name);
    }
};
class Task:public Employee{
    public:
    int t1,t2;
    public:
    void get_task(){
        get_data();  // base class method
        cout<<"Enter task:";
        cin>>t1>>t2;
    }
};
class Appraisal:public Task{
    public:
    int total_task;
    public:
    void all_task(){
        get_task();
        total_task=t1+t2;
    }
    void display(){
        cout<<"Employee id="<<eid<<"\n name="<<name<<"\n t1="<<t1<<"\nt2="<<t2<<"\n total _task="<<total_task<<endl;
    }
};
int main(){
    Appraisal app;
    app.all_task();
    app.display();
}