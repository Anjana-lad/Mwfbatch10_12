// operator overloading :
// syntax:
/*return_type operator (operator symbol)(class_name &object_name){ // body of function }*/

// program for operator overloading with > symbol.
#include<iostream>
using namespace std;
class Overload{
    public:
    int num;
    public:
    Overload(){
        cout<<"Enter number:";
        cin>>num;
    }
     Overload operator > (Overload &obj){
        if(num>obj.num){
            cout<<num<<endl;
        }
        else{
            cout<<obj.num<<endl;
        }
       }
        Overload operator== (Overload &obj1){
        if(num==obj1.num){
           // cout<<num<<endl;
         cout<<"They are equal";
        }
        else{
            //cout<<obj1.num<<endl;
            cout<<"They are not equal";
            }
      }
};
int main(){
    Overload ov1,ov2;
   int r= (ov1>ov2) || (ov1==ov2); 
   cout<<r;
    //(ov1 == ov2);
    // if(ov1>ov2){
    //     cout<<"It is greater.";
    // }
    // else{
    //     cout<<"they are equal";
    // }
}

// WAP to create 2 function with add(int,int) and add(double,double).
// WAP  of shape having function area for circle,rectangle,triangle. 