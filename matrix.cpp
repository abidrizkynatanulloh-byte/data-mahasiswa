#include <iostream>
using namespace std;

int main(){
    int i,j,baris,kolom;
    cout<<"masukkan jumlah baris:"; cin>>baris;
    cout<<"masukkan jumlah kolom:"; cin>>kolom;
    int nilai[baris][kolom];
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            cout<<"masukkan nilai["<<i<<"]["<<j<<"]: ";
            cin>>nilai[i][j];
        }
    }
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            cout<<nilai[i][j]<<" ";
        }cout<<endl;
    }
}