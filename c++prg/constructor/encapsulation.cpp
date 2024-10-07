// encapsulation : accessing the private data_member with getter and setter methods.
#include<iostream>
using namespace std;
class employee{
    private:
    int eid,salary;
    string name;
    public:
    void set_data(int id,int sal,string nm){
        this->eid=id;
        this->salary=sal;
        this->name=nm;
    }
    void get_data(){
        cout<<"Eid="<<eid<<endl;
        cout<<"Name="<<name<<"\n"<<"Salary:"<<salary<<endl;
    }
};
int main(){
    employee emp;
    emp.set_data(1,25000,"Ankit Pal"); 
    emp.get_data();
}

// in abstraction we can give any name for member function.
 