#include <iostream>
using namespace std;

int main(){
    int i,j,k,l,baris,kolom;
    cout<<"masukkan jumlah baris:"; cin>>baris;
    cout<<"masukkan jumlah kolom:"; cin>>kolom;
    int nilai[baris][kolom],hasil[baris][kolom],b[baris][kolom];
    cout<<"MATRIK A"<<endl;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            cout<<"masukkan nilai["<<i<<"]["<<j<<"]: ";
            cin>>nilai[i][j];
        }
    }
    cout<<"MATRIX B"<<endl;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            cout<<"masukkan nilai["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }
    cout<<"MATRIK A"<<endl;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            cout<<nilai[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"MATRIX B"<<endl;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"HASIL PERTAMBAHAN MATRIX"<<endl;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            hasil[i][j]=nilai[i][j]+b[i][j];
            cout<<hasil[i][j]<<" ";
        }cout<<endl;
    }

}