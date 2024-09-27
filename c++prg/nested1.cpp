// nested class 
#include<iostream>
using namespace std;
class Outer{
    public:
    class nested{
        public:
        void msg(){
            cout<<"Hi i am from nested class."<<endl;
        }
    };
    void msgo(){
        cout<<"Hi am from outer class"<<endl;
    }
};
int main(){
    Outer o;  //outer class object
    o.msgo(); 
    Outer::nested on;  // inner class object
    on.msg();
}