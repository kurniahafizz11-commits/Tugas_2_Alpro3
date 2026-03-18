#include <iostream>
#include <cmath> //library untuk menggunakan fungsi abs()
using namespace std;

main(){
    int bil;
    cout<<"Masukkan bilangan 4 digit: ";
    cin>>bil; //menerima inputan user

   if (bil < 1000 || bil > 9999) {
        cout << "error! hanya menerima inputan 4 digit bilangan" << endl;
        return 0; // program berhenti disini kalau inputan salah
    }
    
    //untuk memecah angka jadi digit satuan (contoh: 1357)
    int d1 = bil / 1000;       // hasilnya 1
    int d2 = (bil / 100) % 10; // hasilnya 3
    int d3 = (bil / 10) % 10;  // hasilnya 5
    int d4 = bil % 10;         // hasilnya 7

    //untuk memecah angka jadi dua bagian (depan & belakang) 
    int depan = bil / 100;     // Hasilnya 13
    int belakang = bil % 100;  // Hasilnya 57

    //ngecek apakah digit berurutan (naik atau turun)
    bool isAlfa = (d1 < d2 && d2 < d3 && d3 < d4) || (d1 > d2 && d2 > d3 && d3 > d4);
    // abs() digunakan untuk mengambil nilai mutlak, agar selisih depan dan belakang tidak bernilai negatif
    // contoh:depan = 13, belakang = 57 → 13 - 57  = -44 (tidak >=30)
    // dengan abs: 44 (>= 30)
    bool isBeta = abs(depan - belakang) >= 30;

    //untuk menentukan tipe
    if (isAlfa && isBeta) {
        // jika kedua kondisi terpenuhi:
        // - digit berurutan (Alfa)
        // - selisih depan & belakang >= 30 (Beta)
        cout << "Gamma" << endl;
    } else if (isAlfa) {
        // jika hanya memenuhi kondisi Alfa, yaitu digit berurutan (naik atau turun)
        // tapi tidak memenuhi syarat Beta
        cout << "Alfa" << endl;
    } else if (isBeta) {
        // jika hanya memenuhi kondisi Beta, yaitu selisih depan & belakang >= 30
        // tapi digit tidak berurutan
        cout << "Beta" << endl;
    } else {
        // jika tidak memenuhi kedua kondisi:
        // - digit tidak berurutan
        // - selisih < 30
        cout << "Delta" << endl;
    }

    return 0;
}
