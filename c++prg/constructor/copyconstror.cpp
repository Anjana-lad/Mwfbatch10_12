// copy constructor : 
/*syntax:
classname (const classname &object){
}
*/
#include<iostream>
using namespace std;
class value{

    int num;
    public:
     value (int n){
   num=n;
     }
    //  value (const value &v1){
    //     num=v1.num;
    //  }
     void show(){
        cout<<"Number="<<num<<endl;
     }
};
int main(){
    value v1(20);
    value v2(v1);
    v2.show();
}