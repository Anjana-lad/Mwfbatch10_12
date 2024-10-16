// inline function
#include<iostream>
using namespace std;
inline int add(int a,int b){return a+b;}
int main(){
    int a,b;
    cout<<"Enter numbers:";
    cin>>a>>b;
    cout<<"Result="<<add(a,b)<<endl;
}