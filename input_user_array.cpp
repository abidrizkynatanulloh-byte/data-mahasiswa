#include <iostream>
using namespace std;
int main(){
    int i,x,rata;
    cout<<"masukkan jumlah array yang di inginkan: ";cin>>x;
    int angka[x];
    for (i=0;i<x;i++){
    cout<<"masukkan nilai ["<<i<<"]=";cin>>angka[i];}
        for(i =0; i<x; i++){
        cout << "angka[" << i <<"]  = "<< angka[i]<<endl;
    }
    int total=0;
    for(int i=0;i<x;i++){ 
        total+=angka[i];
        rata=total/x;
    }
cout<<"rata ratanya adalah:"<<rata;
}