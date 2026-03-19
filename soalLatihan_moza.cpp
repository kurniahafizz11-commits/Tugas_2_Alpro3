#include <iostream>
using namespace std;

main() {
    int berat, tujuan, ekspedisi;
    float biaya,total = 0;

    //user input berat barang
    cout << "Masukkan berat barang (kg): ";
    cin >> berat;
    
    //menampilkan pilihan tujuan pengiriman dan meminta user input pilihannya
    cout << "Tujuan pengiriman:\n";
    cout << "1. Dalam Kota\n";
    cout << "2. Luar Kota\n";
    cout << "Pilih tujuan (1/2): ";
    cin >> tujuan;

    //menampilkan pilihan ekspedisi dan meminta user input pilihannya
    cout << "Pilihan ekspedisi:\n";
    cout << "1. JNE\n";
    cout << "2. SiCepat\n";
    cout << "3. Gojek\n";
    cout << "Pilih ekspedisi (1/2/3): ";
    cin >> ekspedisi;

    //menggunakan switch case untuk memilih ekspedisi
    switch (ekspedisi) {
        case 1: //JNE
            // menentukan biaya per kg berdasarkan tujuan
            if (tujuan == 1)
                biaya = 10000;//dalam kota
            else
                biaya = 20000;//luar kota

            //menghitung total biaya
            total = biaya * berat;

            if (berat > 10)
                total = total * 0.5; // diskon 50% jika berat>10 kg

            cout << "Ekspedisi yang dipilih: JNE\n";
            cout << "Total biaya: Rp" << total << endl;
            break;

        case 2: // SiCepat
            //gratis ongkir jika berat>15 kg
            if (berat > 15) {
                total = 0;
            } else {
                if (tujuan == 1)
                    biaya = 8000;//dalam kota
                else
                    biaya = 18000;//luar kota

                //menghitung total biaya
                total = biaya * berat;
            }

            cout << "Ekspedisi yang dipilih: SiCepat\n";
            cout << "Total biaya: Rp" << total << endl;
            break;

        case 3: // Gojek
            //gojek hanya melayani dalam kota
            if (tujuan == 2) {
                cout << "Gojek hanya melayani dalam kota!\n";
            } else {
                biaya = 12000;
                //menghitung total biaya
                total = biaya * berat;

                //diskon Rp10.000 jika berat>5 kg
                if (berat > 5)
                    total = total - 10000;

                cout << "Ekspedisi yang dipilih: Gojek\n";
                cout << "Total biaya: Rp" << total << endl;
            }
            break;

        default:
            //jika input ekspedisi tidak valid
            cout << "Pilihan ekspedisi tidak valid!\n";
    }

    return 0;
}
