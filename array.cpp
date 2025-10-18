#include <iostream>
using namespace std;
int main(){
    int angka[5]={1,2,3,4,5};
    cout << "Elemen Array:"<<endl;
    for(int a =0; a <5; a++){
        cout << "angka[" << a <<"]  = "<< angka[a]<<endl;
    }
    int total=0;
    for(int a=0;a<5;a++){
        total+=angka[a];
    }
    cout << "TOTAL (+): " <<total<<endl;
    int total1=1;
    for(int a=0; a<5;a++){
        total1 *=angka[a];
    }
    cout<<"TOTAL (*): "<<total1<<endl;

    int total2=angka[0];
    for(int a=1;a<5;a++){
        total2 -=angka[a];
    }
    cout<<"TOTAL (-): "<<total2<<endl;

    float total3=angka[0];
    for(int a=1;a<5;a++){
        total3 /=angka[a];
}
    cout<< "TOTAL (/): "<<total3;
    
}