// local class : class defined inside the main function.
#include<iostream>
using namespace std;
int main(){
class student{   //student 
    private:
        int rollno;
        string name;
    public:
    void get_data(){
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
    }
    void display(){
        cout<<"Rollno="<<rollno<<endl<<"Name="<<name<<endl;
    }
};
    student stud;
    stud.get_data();
    stud.display(); 
}