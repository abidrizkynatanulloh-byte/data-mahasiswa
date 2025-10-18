#include <iostream>
using namespace std;

void tampil(){
    float a,b;
    cout<<"masukkan angka pertama: ";
    cin>>a;
    cout<<"masukkan angka kedua: ";
    cin>>b;
    cout<<"hasil pertambahan :"<<a+b<<endl;
    cout<<"hasil pengurangan :"<<a-b<<endl;
    cout<<"hasil perkalian :"<<a*b<<endl;
    cout<<"hasil pembagian :"<<a/b<<endl;
}

int main(){
    tampil();
}
