#include <iostream>
using namespace std;

int main() {
    int ekspedisi, tujuan; 
    float berat, biaya, total; 

    cout << "1. JNE\n2. SiCepat\n3. Gojek\nPilih Ekspedisi: ";
    cin >> ekspedisi;
    // Meminta user untuk memilih ekspedisi 

    cout << "Berat barang (kg): ";
    cin >> berat;
    //user diminta untuk memasukkan berat barang dalam kg

    cout << "Tujuan (1: Dalam Kota, 2: Luar Kota): ";
    cin >> tujuan;
    // Meminta user untuk memilih tujuan pengiriman,pilih 1.untuk pengiriman dalam kota dan pilih 2.untuk pengiriman ke luar kota

    if (ekspedisi == 1) { 
        biaya = (tujuan == 1) ? 10000 : 20000;        // Jika tujuan == 1 (Dalam Kota), biaya = 10000. Jika tidak, biaya = 20000.
        total = biaya * berat;// Menghitung biaya sesuai dengan berat barang
        if (berat > 10) {
            total = total * 0.5; // Jika  berat di atas 10kg, dapat diskon 50%
        }
    } 
    
    else if (ekspedisi == 2) { 
        if (berat > 15) {
            total = 0; // Jika berat di atas 15kg, biaya digratiskan (total = 0)
        } else {
            biaya = (tujuan == 1) ? 8000 : 18000;
            total = biaya * berat;
            //berat 15kg ke bawah, dihitung normal.
            // Dalam kota = 8000, Luar kota = 18000.
        }
    } 
    
    else if (ekspedisi == 3) { 
        if (tujuan == 2) {
            cout << "Gojek hanya tersedia untuk Dalam Kota!" << endl;//langsung ketujuan 2 karena gojek hanya untuk pengiriman dalam kota
            return 0; // Menghentikan program seketika karena pesanan tidak valid
        }
        total = 12000 * berat; // Menghitung tarif dasar Gojek (flat rate per kg, tanpa membedakan tujuan karena hanya dalam kota)
        
        if (berat > 5) {
            total = total - 10000;// Jika berat di atas 5kg, ada potongan harga langsung Rp 10.000 
        }
    }

    cout << "Total Biaya: Rp" << total << endl;
    // Menampilkan hasil akhir total biaya yang harus dibayar user
    return 0; 
}
