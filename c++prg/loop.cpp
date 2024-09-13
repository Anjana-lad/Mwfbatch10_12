//pattern
 /*
        *
      * * *
    * * * * *
  * * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row,col,space;
    for(row=1;row<=4;row++){
        for(space=4;space>=row;space--){
            cout<<"  ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<"* ";
        }
    cout<<endl;
    }
}