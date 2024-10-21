// aggregation is a process to reuse the class as an entity reference. it is a HAS-A relationship for the class.
#include<iostream>
using namespace std;
class Address{
    public:
    string city,state;
    Address(string ct,string st){
        this->city=ct;
        this->state=st;
    }
};
class Employee{
    private:
    Address *address;  // HAS-A relationship
    public:
    int eid;
    string name;
    public:
    Employee(int id,string nm,Address *address){
        this->eid=id;
        this->name=nm;
        this->address=address;
    }
    void display(){
        cout<<"Employee details:"<<endl;
        cout<<"Employee id="<<eid<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"City="<<address->city<<endl;
        cout<<"State="<<address->state<<endl;
    }
};

int main(){
    int id;
    string st,ct,nm;
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name:";
    cin.ignore();
   getline(cin, nm);
    cout<<"City=";

    getline(cin, ct);
     cout<<"State=";

    getline(cin, st);

    Address add(ct,st);
    Employee emp(id,nm,&add);
    emp.display();
}