// friend function : to access the private data member of the class.
#include<iostream>
using namespace std;
class Jaffar;
class Ankit{
    private:
    int a_money=5000;
    friend int khadija(Ankit,Jaffar);
};
class Jaffar{
    private:
    int j_money=8000;
    friend int khadija(Ankit,Jaffar);
};

int khadija(Ankit a, Jaffar j){
    int k_money=a.a_money+j.j_money;
    cout<<"k_money="<<k_money<<endl;
}
int main(){
    Ankit a;
    Jaffar j;
    khadija(a,j);  // calling friend function.
}