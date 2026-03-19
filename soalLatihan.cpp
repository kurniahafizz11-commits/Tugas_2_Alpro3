#include <iostream>
using namespace std;

main()
{
    char kode,lokasi;
    int beban;
    float diskon;

    cout<<"Berat barang: ";
    cin>>beban;

    do{
        cout<<"1.Dalam kota\n2.Luar kota\n";
        cout<<"Tujuan: ";
        cin>>lokasi; //menampilkan pilihan tujuan 1.dalam kota 2 luar kota kemudian dibawahnya user memasukkan tujuan mereka dari inputan variabel lokasi
    
        switch(lokasi){ // switch untuk menjalankan salah satu pernyataan dari beberapa kemungkinan pernyataan berdasarkan inputan yang dimasukkan ke dalam variabel lokasi
            case '1':
                cout<<"Tujuan: dalam kota (1)\n";// jika user menekan angka 1 di keyboard akan menampilkan tujuan dalam kota
                break;// untuk pembatas antar case agar semua case tidak dijalankan
            case '2':
                cout<<"Tujuan: luar kota (2)\n"; // jika user menekan angka 2 di keyboard akan menampilkan tujuan luar kota
                break; // untuk pembatas antar case agar semua case tidak dijalankan
            default:
                cout<<"Tujuan tidak tersedia!\n"; // jika user menekan angka selain angka 1 dan 2 akan menampilkan tujuan tidak tersedia 
        } 
    }while (lokasi != '1' && lokasi !='2'); // untuk menjalankan input minimal sekali sebelum mengecek kondisi, setelah angka di input oleh user selain angka 1 dan 2 maka program akan meminta user menginput ulang tujuan mereka hingga benar       

    cout<<"\n"; // agar mengosongkan 1 baris setelah input lokasi
    do{
        cout<<"1.JNE\n2.SiCepat\n3.Gojek\n";
        cout<<"Ekspedisi: ";
        cin>>kode; //menampilkan pilihan ekspedisi 1.JNE 2 SiCepat 3 Gojek kemudian dibawahnya user memasukkan ekspedisi mereka dari inputan variabel kode
    
        if (kode == '1')
            cout<<"JNE\n"; // jika user menekan angka 1 akan menampilkan ekspedisi dari JNE
        else if (kode == '2') 
            cout<<"SiCepat\n";// jika user menekan angka 2 akan menampilkan ekspedisi dari SiCepat
        else if (kode == '3')
            cout<<"Gojek\n"; // jika user menekan angka 3 akan menampilkan ekspedisi dari Gojek
        else
            cout<<"Ekspedisi tidak tersedia\n"; // jika user menekan angkan selain 1,2 dan 3 akan menampilkan ekspedisi tidak tersedia
    
        switch(kode){ //untuk menjalankan salah satu pernyataan dari beberapa kemungkinan pernyataan berdasarkan inputan yang dimasukkan ke dalam variabel kode
            case '1': // jika user menekan angka 1 otomatis akan menjalankan perhitungan biaya melalui JNE
                diskon = (beban > 10)? 0.5 : 1; // ternary untuk mengecek apakah beban lebih besar dari 10? jika benar ia akan mendapatkan diskon 50% jika tidak maka tidak mendapatkan diskon
                if (lokasi == '1') // jika user menekan angka 1 pada inputan variabel lokasi yang dimana itu pilihan dari dalam kota
                    cout<<"Biaya: "<< 10000 * beban * diskon; // akan menampilkan total biaya dengan perhitungan 10 ribu dikali berat barang dan dikali diskon jika kondisi ternary benar
                else if (lokasi == '2') // jika user memilih angka 2 d yaitu luar kota
                    cout<<"Biaya: "<< 20000 * beban * diskon; // akan menampilkan total biaya dengan perhitungan 20 ribu dikali berat barang dan dikali diskon jika kondisi ternary benar
                else // jika memilih selain angka 1 dan 2 
                    cout<<"Tidak tersedia"; // akan menampilkan tidak tersedia
                    break;// pembatas antar case agar semua case tidak dikerjakan
            case '2':  //jika user menekan angka 2 otomatis akan menjalankan perhitungan biaya melalui SiCepat
                diskon = (beban > 15)? 0 : 1; // ternary untuk mengecek apakah beban lebih besar dari 15? jika benar ia akan mendapatkan diskon 0% atau gratis ongkir jika tidak maka tidak mendapatkan gratis ongkir atau diskon
                if (lokasi == '1') // jika user memilih lokasi 1 yaitu dalam kota
                    cout<<"Biaya: "<< 8000 * beban * diskon; // akan menampilkan total biaya dengan perhitungan 8 ribu dikali berat barang dan dikali diskon jika kondisi ternary benar
                else if (lokasi == '2') // jika user memilih lokasi 2 yaitu  luar kota
                    cout<<"Biaya: "<< 18000 * beban * diskon; // akan menampilkan total biaya dengan perhitungan 18 ribu dikali berat barang dan dikali diskon jika kondisi ternary benar
                else //jika memilih lokasi selain angka 1 dan 2  
                    cout<<"Tidak tersedia"; // akan menampilkan tidak tersedia
                    break; // pembatas antar case agar semua case tidak dikerjakan                          
            case '3': //jika user menekan angka 3 otomatis akan menjalankan perhitungan biaya melalui Gojek
                diskon = (beban > 5)? 10000:0; // ternary untuk mengecek apakah beban lebih besar dari 5? jika benar ia akan mendapatkan diskon dengan potongan harga 10 ribu jika tidak maka tidak mendapatkan potongan harga diskon
                if (lokasi == '1') // jika user memilih lokasi 1 yaitu dalam kota
                    cout<<"Biaya: "<< 12000 * beban - diskon; // akan menampilkan total biaya dengan perhitungan 12 ribu dikali berat barang dan dikurang dengan diskon yaitu potongan harga sebesar 10 ribu jika kondisi ternary benar
                else // jika user memilih lokasi selain angka 1 yang dimana gojek hanya bisa untuk dalam kota saja
                    cout<<"Tujuan tidak tersedia"; // akan menampilkan tujuan tidak tersedia
                    break; // pembatas antar case agar semua case tidak dikerjakan    
            default:  
                cout<<"Tidak tersedia"; // jika user menekan angka selain angka 1,2 dan 3 akan menampilkan ekspedisi tidak tersedia           
        }
    }while (kode != '1' && kode !='2' && kode!= '3');     
    // untuk menjalankan input minimal sekali sebelum mengecek kondisi, selama user tidak memilih angka 1,2 dan 3 maka program akan mengulang terus hingga user menginput angka dengan benar 
 }
