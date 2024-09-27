// class defining the student info.
#include<iostream>
using namespace std;
class studentInfo{
    int rollno;
    string name;
    public:
    void setinfo(int rno,string nm){
        rollno=rno;
        name=nm;
    }
    void display(){
        cout<<"Name="<<name<<"\n Rollno:"<<rollno<<endl;
    }
};
int main(){
    studentInfo sti,st2;
    sti.setinfo(1,"Ankit");
    sti.display();
    st2.setinfo(2,"Jaffar");
    st2.display();
}