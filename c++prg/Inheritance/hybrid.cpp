// hybrid inheritance: combination of more then one inheritance is called hybrid inheritance.
#include<iostream>
using namespace std;
class P{
    public:
    int p,q;
    public:
    int getpq(){
        cout<<"Enter p:";
        cin>>p;
        cout<<"Enter q:";
        cin>>q;
    }
};
class Q:public P{
    public:
    int r;
    public:
    int getr(){
             cout<<"Enter r:";
        cin>>r;
    }
};
class R{
    public:
    int s;
    public:
    int get_s(){
        cout<<"Enter s:";
        cin>>s;
    }
};
class S:public Q,R{
    public:
    int total;
    public:
    int total_all(){
    getpq();
    getr();
    get_s();
    total=p+q+r+s;
    cout<<"total of all="<<total<<endl;
    }
};
int main(){
 S ss;
 ss.total_all();   
}