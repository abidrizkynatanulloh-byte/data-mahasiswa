#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct nilaiUjian{float uts,uas,tugas;};
struct tanggal{int hari,tahun;};
struct nilai{
    float Mtk;
    float BIn;
    float Big;
    float IPA;
};
struct siswa{
    string nama;
    string bulan;
    int umur;
    string NISN;
    string jurusan;
    tanggal lahir;
    nilaiUjian us;
    nilai Nilai;
};
void tambahDataSiswa(int jumlah,siswa p[]){
    for(int i=0;i<jumlah;i++){

        cout<<"==========DATA Siswa=========="<<endl;
        cout<<"masukkan nama:";
        getline(cin,p[i].nama);
        cout<<"masukkan umur:";
        cin>>p[i].umur;
        cin.ignore();
        cout<<"masukkan NISN:";
        getline(cin,p[i].NISN);
        cout<<"masukkan jurusan:";
        getline(cin,p[i].jurusan);
        cout << "masukkan hari lahir: ";
        cin >> p[i].lahir.hari;
        cin.ignore();
        cout << "masukkan bulan lahir: ";
        getline(cin, p[i].bulan);
        cout << "masukkan tahun lahir: ";
        cin >> p[i].lahir.tahun;
        cin.ignore();
        cout << "masukkan nilai UAS: ";
        cin >> p[i].us.uas;
        cin.ignore();
        cout << "masukkan nilai UTS: ";
        cin >> p[i].us.uts;
        cin.ignore();
        cout << "masukkan nilai TUGAS: ";
        cin >> p[i].us.tugas;
        cin.ignore();
        cout << "masukkan nilai Matematika: ";
        cin >> p[i].Nilai.Mtk;
        cin.ignore();
        cout << "masukkan nilai Bahasa Indonesia: ";
        cin >> p[i].Nilai.BIn;
        cin.ignore();
        cout << "masukkan nilai Bahasa Inggris: ";
        cin >> p[i].Nilai.Big;
        cin.ignore();
        cout << "masukkan nilai IPA: ";
        cin >> p[i].Nilai.IPA;
        cin.ignore();

    }
};//menambahkan data pada file siswa.txt
float nilaiAkhir(nilai n){
    return (n.Mtk * 0.35) + (n.IPA * 0.25) + (n.BIn * 0.2) + (n.Big * 0.2);
}// nilai akhir = 40%matematika+30%IPA+20%B indonesia +20%B Inggris
float nilai(nilaiUjian n){
    return (n.uas * 0.4) + (n.uts * 0.35) + (n.tugas * 0.25);
}
void tampilDataSiswa(int jumlah,siswa p[]){
    for(int i=0;i<jumlah;i++){
    ofstream file("data_siswa_ujian.txt", ios::app);
        file <<"-------------------------------------------------------------"<<endl;
        file <<"======DATA SISWA======"<<endl;
        file << "NISN: " << p[i].NISN << endl;
        file << "Nama: " << p[i].nama << endl;
        file << "Umur: " << p[i].umur << endl;
        file << "Jurusan: " << p[i].jurusan << endl;
        file<< "Tanggal Lahir: " <<p[i].lahir.hari<<"-"<<p[i].bulan<<"-"<<p[i].lahir.tahun<<endl;
        file << "--NILAI--"<<endl;
        file << "UAS: "<<p[i].us.uas<<endl;
        file << "UTS: "<<p[i].us.uts<<endl;
        file << "TUGAS: "<<p[i].us.tugas<<endl;
        file << "Nilai Matematika: "<<p[i].Nilai.Mtk<<endl;
        file << "Nilai Bahasa Indonesia: "<<p[i].Nilai.BIn<<endl;
        file << "Nilai Bahasa Inggris: "<<p[i].Nilai.Big<<endl;
        file << "Nilai IPA: "<<p[i].Nilai.IPA<<endl;
        file << "Nilai ulangan: "<<nilai(p[i].us)<<endl;
        file << "Nilai Akhir: "<<nilaiAkhir(p[i].Nilai)<<endl;
    file.close();
    }
};//membaca data dari file siswa.txt dan ditampilkan
void cariSiswa() {
    string nisn;
    cout << "Masukkan NISN siswa yang ingin dicari: ";
    cin >> nisn;
    ifstream file("data_siswa_ujian.txt");
    bool ketemu = false;
    string line;
    string prev_line = "";
    // baca baris demi baris dari file sampe habis
    while(getline(file, line)) {
        // kalau barisnya pas sama "NISN: " + nisn yang user cari

        if (line == "NISN: " + nisn) {
            ketemu = true;
            cout << "Data siswa ditemukan: " << endl;
            // tambahin nama siswa yang sesuai dengan nisn nya dari baris sebelumnya
            if (!prev_line.empty()) cout << prev_line << endl;
            cout << line << endl;
            // terus baca baris berikutnya sampe ketemu garis pemisah ---
            while(getline(file, line)) {
                cout << line << endl;
                if (line.find("---") == 0) break;
            }
            break;
        }
        prev_line = line;
    }
    if (!ketemu) {
        cout << "Data siswa dengan NISN " << nisn << " tidak ditemukan." << endl;
    }
    file.close();
}
void rangking(int jumlah, siswa p[]) {
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (nilaiAkhir(p[j].Nilai) < nilaiAkhir(p[j + 1].Nilai)) {
                siswa temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    cout << "===== RANGKING SISWA =====" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Rangking " << i + 1 << endl;
        cout << "Nama: " << p[i].nama << endl;
        cout << "NISN: " << p[i].NISN << endl;
        cout << "Jurusan: " << p[i].jurusan << endl;
        cout << "Nilai Akhir: " << nilaiAkhir(p[i].Nilai) << endl;
        cout << "--------------------------" << endl;
    }
}



int main()
{
    ifstream file("data_siswa_ujian.txt");
    if(file.peek() == ifstream::traits_type::eof()){
        int jumlah;
        cout << "masukkan jumlah siswa: ";
        cin >> jumlah;
        siswa p[jumlah];
        cin.ignore();
        tambahDataSiswa(jumlah,p);
        tampilDataSiswa(jumlah,p);
        rangking(jumlah,p);
        cout << "data siswa telah ditambahkan dan disimpan dalam file data_siswa_ujian.txt" << endl;
    }
    else{
        string baris;
        while(getline(file,baris)){
            cout<<baris<<endl;
        }
        file.close();
        char pilihan;
        cout <<"apakah anda ingin menambahkan data siswa lagi? (y/n): ";
        cin >> pilihan;
        if(pilihan == 'y' || pilihan == 'Y'){
            int jumlah;
            cout << "masukkan jumlah siswa: ";
            cin >> jumlah;
            siswa p[jumlah];
            cin.ignore();
            tambahDataSiswa(jumlah,p);
            tampilDataSiswa(jumlah,p); 
            rangking(jumlah,p);
            cout << "data siswa telah ditambahkan dan disimpan dalam file data_siswa_ujian.txt" << endl;

        }
    char pilihan2;
    cout << "Apakah anda ingin mencari siswa (c) ";
    cin >> pilihan2;
    if (pilihan2 == 'c' || pilihan2 == 'C') {
        cariSiswa();
    }
}
    return 0;
}