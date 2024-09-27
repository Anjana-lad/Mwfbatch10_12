// class is a blue print for an object.It is the collection of data member and member function for objects.
//object : It is a real world entity. 
/*
syntax:
class classname{
    access specifier/modifier:
    data members;
    access specifier/ modifier:
    datatype function_name(){
        // body of the function.
    }
};
syntax for object:
classname objectname;
*/
// #include<iostream>
// using namespace std;
// class student{   //student 
//     public:
//     int rollno;
//     string name;
// };
// int main(){
//     student stud;
//     stud.rollno=1;
//     stud.name="Smith";
//     cout<<"Rollno="<<stud.rollno<<endl<<"Name="<<stud.name<<endl;
// }
// with member function
#include<iostream>
using namespace std;
class student{   //student 
    private:
        int rollno;  //data member
        string name;
    public:
    void get_data(){   // member function
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
    }
    void display(){   //Mf
        cout<<"Rollno="<<rollno<<endl<<"Name="<<name<<endl;
    }
};
int main(){
    student stud;   // stud is object of class.
    stud.get_data();
    stud.display(); 
}