#include <iostream>
#include <string>

using namespace std;

int main() {
    int jam_berangkat, jam_pulang, total;
    string moda_berangkat, moda_pulang;
    int biaya_berangkat, biaya_pulang;

    biaya_berangkat = 0;
    biaya_pulang = 0;
    //Memberi nilai awal biaya dengan 0 untuk meminimalisir kesalahan perhitungan 
    cout << "Jam keberangkatan : ";
    cin >> jam_berangkat;
    cout << "Jam Kepulangan : ";
    cin >> jam_pulang;
    //meminta user input jam berangkat dan pulang
    
    if ((jam_berangkat >= 6 && jam_berangkat <= 8) || (jam_berangkat >= 15 && jam_berangkat <= 17)) {
        moda_berangkat = "bus linus";
        biaya_berangkat = 0;
    } //menegecek apakah user berangkat jam 6-8 atau jam 15-17?bus linus ditempat kan pada perulangan atau if pertama karena komputer membaca instruksi secara berurutan dari atas ke bawah

    else if (jam_berangkat >= 7 && jam_berangkat <= 18) {
        moda_berangkat = "bus hijau";
        biaya_berangkat = 5000;
    } // Jika kondisi pertama TIDAK terpenuhi, cek kondisi kedua: apakah berangkat di antara jam 7-18?

    else {
        moda_berangkat = "Angkot"; 
        biaya_berangkat = 10000;
    } // Jika semua kondisi di atas salah (misalnya jam 5, 19, atau 20), jalankan yang ini:


    if ((jam_pulang >= 6 && jam_pulang <= 8) || (jam_pulang >= 15 && jam_pulang <= 17)) {
        moda_pulang = "bus linus";
        biaya_pulang = 0;
    } 
    else if (jam_pulang >= 7 && jam_pulang <= 18) {
        moda_pulang = "bus hijau";
        biaya_pulang = 5000;
    } 
    else {
        moda_pulang = "Angkot";
        biaya_pulang = 10000;
    }
    //untuk logika jam pulang sama dengan logika jam keberangkatan 

    total = biaya_berangkat + biaya_pulang;//menjumlahkan keseluruhan biaya

    cout << "Mas dodo berangkat naik " << moda_berangkat 
         << " dan pulang naik " << moda_pulang 
         << " dengan total biaya " << total << endl;//menampilkan tampilan akhir seperti format tersebut dimana akan tampil kendaraan yang dipakai berangkat dan pulang serta total biaya

    return 0;
}
