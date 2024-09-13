//basic structure
#include <iostream>
using namespace std;
int main(){
   cout<<"Hello world.."<<endl;
   int num1; //variable
   string ch;
   cout<<"Enter number:";
   cin>>num1;
   cout<<"Num is="<<num1<<endl;
   cout<<"Enter name: ";
   //cin>>ch;
   cin.ignore();
   getline(cin,ch);
   cout<<"name="<<ch<<endl;
}