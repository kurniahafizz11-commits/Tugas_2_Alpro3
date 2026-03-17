#include <iostream>
using namespace std;

main()
{
    float gaji, IP;

    system ("cls"); // berfungsi untuk membersihkan layar atau tampilan
    cout<<"IP : ";
    cin>>IP; // menampilkan output IP dan meminta user menginput IP 
    cout<<"Gaji orang tua: ";
    cin>>gaji; // menampilkan output Gaji orang tua dan meminta user menginput gaji

    // menggunakan kondisi if else if dan else untuk mengecek apakah mahasiswa tersebut termasuk beasiswa dengan kategori 1,2,3,4 atau tidak berhak
    if (IP >=3.5) 
        cout<<"Berhak atas beasiswa kategori 4"; // kondisi untuk mengecek jika ip >= 3.5 maka akan menampilkan berhak atas beasiswa kategori 4
    else if (gaji < 1 && IP < 3.5 )
        cout<<"Berhak atas beasiswa kategori 1"; // jika tidak kondisi pertama, ia akan mengecek apakah gaji < 1 dan IP < 3.5 maka akan menampilkan berhak atas beasiswa kategori 1
    else if (gaji >=1 && gaji<=5) { 
        if (IP >= 2)
            cout<<"Berhak atas beasiswa kategori 3"; // jika tidak kondisi pertama atau kedua, ia akan mengecek apakah IP >= 2 dengan rentang gaji >=1 dan gaji <=5 kemudian akan menampilkan berhak atas beasiswa kategori 3
        else
            cout<<"Berhak atas beasiswa kategori 2"; // jika kondisi IP tidak >= 2 alias <2 dengan rentang gaji yang sama, maka akan menampilkan berhak atas beasiswa kategori 2       
    }
    else
        cout<<"Tidak berhak atas beasiswa"; // jika semua kondisi tidak memenuhi maka akan tampil tidak berhak atas beasiswa
        return 0;
}
