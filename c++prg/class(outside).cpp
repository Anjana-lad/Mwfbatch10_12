// class declaring the member function outside class.
#include<iostream>
using namespace std;
class person{
    int pid;
    string name;
    public:
    void get_data();  //declare
    void show();
};
// data-type class name :: function name(){
// body of the function
//}
void person ::get_data(){
    cout<<"Enter id:";
     cin>>pid;
    cout<<"Enter name:";
     cin.ignore();
    getline(cin,name);
   //cin>>name;
}
void person :: show(){
    cout<<"Id="<<pid<<endl<<"Name="<<name<<endl;
}
int main(){
  person p;
  p.get_data();
  p.show();
}

