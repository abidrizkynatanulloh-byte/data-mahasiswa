#include <iostream>
using namespace std;

int main() {
    struct pelajar{
        string nama;
        int umur;
        string jurusan;
    };
    pelajar p1;
    cout<<"masukkan nama:";
    cin>>p1.nama;
    cout<<"masukkan umur:";
    cin>>p1.umur;
    cout<<"masukkan jurusan:";
    cin>>p1.jurusan;

    cout << "Nama: " << p1.nama << endl;
    cout << "Umur: " << p1.umur << endl;
    cout << "Jurusan: " << p1.jurusan << endl;

    pelajar p2;
    cout<<"masukkan nama:";
    cin>>p2.nama;
    cout<<"masukkan umur:";
    cin>>p2.umur;
    cout<<"masukkan jurusan:";
    cin>>p2.jurusan;

    cout << "Nama: " << p2.nama << endl;
    cout << "Umur: " << p2.umur << endl;
    cout << "Jurusan: " << p2.jurusan << endl;

    pelajar p3;
    cout<<"masukkan nama:";
    cin>>p3.nama;
    cout<<"masukkan umur:";
    cin>>p3.umur;
    cout<<"masukkan jurusan:";
    cin>>p3.jurusan;

    cout << "Nama: " << p3.nama << endl;
    cout << "Umur: " << p3.umur << endl;
    cout << "Jurusan: " << p3.jurusan << endl;

    return 0;
}