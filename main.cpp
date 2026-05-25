/*
Nama			: Achmad Khusnul Yakin
Nim				: 202557201001
Semester		: Dua(2)
Prodi			: Sistem Informasi
Matkul			: Struktur Data
Nama Project	: Program Hitung Honor Pegawai Honorer
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> 

using namespace std;

struct Pegawai {
    string nama;
    int jamKerja;
    long long honorLembur;
    long long totalHonor;
};

const long long HONOR_HARIAN = 80000;
const long long TARIF_LEMBUR = 10000;
const int JAM_NORMAL = 8;

long long hitungHonorLembur(int jamKerja) {
    if (jamKerja > JAM_NORMAL) {
        int kelebihanJam = jamKerja - JAM_NORMAL;
        return kelebihanJam * TARIF_LEMBUR;
    }
    return 0;
}

int main() {
    int jumlahData;

    cout << "====================================================\n";
    cout << "     PROGRAM HITUNG HONOR PEGAWAI HONORER           \n";
    cout << "====================================================\n";

    cout << "Masukkan banyak data pegawai yang akan diproses: ";
    cin >> jumlahData;
    cin.ignore();
    
    system("cls");

    Pegawai* daftarPegawai = new Pegawai[jumlahData];

    cout << "\n----------------------------------------------------\n";
    cout << "                  INPUT DATA PEGAWAI                \n";
    cout << "----------------------------------------------------\n";
    
    for (int i = 0; i < jumlahData; i++) {
        cout << "Pegawai Ke-" << (i + 1) << endl;
        cout << "Nama Pegawai       : ";
        getline(cin, daftarPegawai[i].nama);
        cout << "Jumlah Jam Kerja   : ";
        cin >> daftarPegawai[i].jamKerja;
        cin.ignore();

        daftarPegawai[i].honorLembur = hitungHonorLembur(daftarPegawai[i].jamKerja);
        daftarPegawai[i].totalHonor = HONOR_HARIAN + daftarPegawai[i].honorLembur;
        cout << "----------------------------------------------------\n";
    }
    system("cls"); 

    cout << "\n=========================================================================================\n";
    cout << "                                LAPORAN HONOR PEGAWAI                            \n";
    cout << "=========================================================================================\n";
    cout << " | " << setw(3)  << left << "No" 
         << " | " << setw(20) << left << "Nama Pegawai" 
         << " | " << setw(10) << left << "Jam Kerja" 
         << " | " << setw(18) << left << "Honor Lembur" 
         << " | " << setw(18) << left << "Total Honor" << " |\n";
    cout << "-----------------------------------------------------------------------------------------\n";

    for (int i = 0; i < jumlahData; i++) {
        string strLembur = "Rp. " + to_string(daftarPegawai[i].honorLembur);
        string strTotal  = "Rp. " + to_string(daftarPegawai[i].totalHonor);

        cout << " | " << setw(3)  << left << (i + 1)
             << " | " << setw(20) << left << daftarPegawai[i].nama
             << " | " << setw(10) << left << daftarPegawai[i].jamKerja
             << " | " << setw(18) << left << strLembur
             << " | " << setw(18) << left << strTotal << " |\n";
    }
    cout << "=========================================================================================\n";

    delete[] daftarPegawai;
    return 0;
}
