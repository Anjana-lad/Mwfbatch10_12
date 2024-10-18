// file handling: in this we have to use <fstream.h>
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int rollno;
    string name;
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin,name);
    ofstream fout("G:\\Mwfbatch10_12(Ajmk)\\demo\\data.txt",ios::app);

    fout<<"Rollno:"<<rollno<<"\n Name:"<<name<<"\n";   
  

    cout<<"Data entered successfully."<<endl;
}