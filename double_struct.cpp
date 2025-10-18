#include <iostream>
using namespace std;

struct nilai{float uts,uas,tugas;};
struct tanggal{int hari,bulan,tahun;};
struct pelajar{
    string nama;
    int umur;
    string jurusan;
    tanggal lahir;
    nilai us;
};

float NilaiAkhir(nilai us){
    return (us.uas * 0.4) + (us.uts * 0.35) + (us.tugas * 0.25);
}

void input(int jumlah, pelajar p[]){
    for(int i=0;i<jumlah;i++){
        cout<<"==========DATA SISWA KE-"<<i+1<<"=========="<<endl;
        cout<<"masukkan nama:";
        cin>>p[i].nama;
        cout<<"masukkan umur:";
        cin>>p[i].umur;
        cout<<"masukkan jurusan:";
        cin>>p[i].jurusan;
        cout << "masukkan hari lahir: ";
        cin >> p[i].lahir.hari;
        cout << "masukkan bulan lahir: ";
        cin >> p[i].lahir.bulan;
        cout << "masukkan tahun lahir: ";
        cin >> p[i].lahir.tahun;
        cout << "masukkan nilai UAS: ";
        cin >> p[i].us.uas;
        cout << "masukkan nilai UTS: ";
        cin >> p[i].us.uts;
        cout << "masukkan nilai TUGAS: ";
        cin >> p[i].us.tugas;
    }
}

void hasil(int jumlah, pelajar p[]){
    for(int i=0;i<jumlah;i++){
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"======DATA SISWA KE-"<<(i+1)<<"======"<<endl;
        cout << "Nama: " << p[i].nama << endl;
        cout << "Umur: " << p[i].umur << endl;
        cout << "Jurusan: " << p[i].jurusan << endl;
        cout << "Tanggal Lahir: " <<p[i].lahir.hari<<"-"<<p[i].lahir.bulan<<"-"<<p[i].lahir.tahun<<endl;
        cout << "--NILAI--"<<endl;
        cout << "BOBOT NILAI AKHIR:\n";
        cout << "UAS 40%: "<<p[i].us.uas * 0.4 <<endl;
        cout << "UTS 35%: "<<p[i].us.uts * 0.35 <<endl;
        cout << "TUGAS 25%: "<<p[i].us.tugas * 0.25 <<endl;
        cout << "Nilai UAS: "<<p[i].us.uas<<endl;
        cout << "Nilai UTS: "<<p[i].us.uts<<endl;
        cout << "Nilai TUGAS: "<<p[i].us.tugas<<endl;
        cout << "NILAI AKHIR: "<<NilaiAkhir(p[i].us)<<endl;
        cout<<"=============================="<<endl;
    }
}

int main() {
    int jumlah;
    cout << "masukkan jumlah pelajar: ";
    cin >> jumlah;
    pelajar p[jumlah];
    input(jumlah, p);
    hasil(jumlah, p);
    return 0;
}
