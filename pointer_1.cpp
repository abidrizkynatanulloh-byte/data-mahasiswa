#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    a=10;
    a=20;
    cout<<"call by value: "<<a<<endl;
    int *c=&a;
    int *d=&b;
    *c=30;
    cout<<"call by reference: "<<a<<endl;
    cout<<"alamat a: "<<c<<endl;
    cout<<"alamat b: "<<d<<endl;
    cout<<*c;
    return 0;
}