// default constructor : having no parameter.
#include<iostream>
using namespace std;
class Points{
   int dance,singing;
    public:
    Points(){
        dance=10;
        singing=20;
    }
    void show(){
        cout<<"Dance="<<dance<<"\n singing="<<singing<<endl;
    }
};
int main(){
  Points pp;
  pp.show();  
}