// class template : 
#include<iostream>
using namespace std;
template <class T>
class A{
    public:
    T a,b;
    public:
    A(){
        cout<<"Enter a:";
        cin>>a;
        cout<<"Enter b:";
        cin>>b;
        cout<<a+b<<endl;
    }
};
int main(){
  A <int>ab; 
  A <float>ba; 
}