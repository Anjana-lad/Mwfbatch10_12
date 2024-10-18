// template it is avery powerful features in c++, where we can make a generic code for the particular function or class.
#include<iostream>
using namespace std;
template <typename t>
t my_max(t a,t b){
    (a>b) ? cout<< a : cout<< b;
}
int main(){
    // calling function 
    int num;
    cout<<"Enter number:";
    cin>>num;
  my_max<int>(10,num);cout<<endl;
 // cout<<"\n";
  my_max<char>('p','k');
    cout<<"\n";
  my_max<string>("hello","world");
  cout<<"\n";
    my_max<double>(41.25,63.74);
} 