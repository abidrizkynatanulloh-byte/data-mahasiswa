#include <iostream>
using namespace std;

int kali();
int bagi();
int tambah();
int kurang();

int kali(int a, int b){
    return a*b;
}
float bagi(float a, float b){
    return a/b;
}
int tambah(int a, int b){
    return a+b;
}
int kurang(int a, int b){
    return a-b;
}   
void tampil(){
    float a,b;
    cout<<"masukkan angka pertama: ";
    cin>>a;
    cout<<"masukkan angka kedua: ";
    cin>>b;
    cout<<"hasil pertambahan :"<<tambah(a,b)<<endl;
    cout<<"hasil pengurangan :"<<kurang(a,b)<<endl;
    cout<<"hasil perkalian :"<<kali(a,b)<<endl;
    cout<<"hasil pembagian :"<<bagi(a,b)<<endl;
}
int main(){
    tampil();
}

