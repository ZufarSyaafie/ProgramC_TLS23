#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "\n=========== PROGRAM VARIANSI POPULATIF ===========\n\n";

    //Meminta pengguna menginput banyak data mereka
    int banyakData;     //variabel untuk menunjukkan banyaknya data
    cout << "Silakan masukkan banyak data anda: ";
    cin >> banyakData;
    cout << "Banyak data anda adalah " << banyakData << endl << endl;


    //Meminta pengguna menginput setiap nilai dari data mereka dan menghitung jumlah seluruhnya
    float nilaiData[banyakData];    //variabel array untuk menyimpan nilai setiap data
    float totalNilai = 0;   //variabel untuk menyimpan hasil penjumlahan semua nilai data
    cout << "Silakan masukkan nilai setiap data anda: " << endl;
    for (int i = 0; i < banyakData; i++)    //iterasi untuk memasukkan setiap nilai data ke dalam array
    {
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> nilaiData[i];
        totalNilai += nilaiData[i];     //menambahkan setiap nilai data yang dimasukkan oleh pengguna melalui iterasi
    }
    
    //Menghitung rata-rata dari data pengguna
    float rataRata = totalNilai/banyakData;

    //Menghitung penjumlahan dari hasil kuadrat pengurangan setiap data dengan rata-rata data
    float hasilPenjumlahan = 0; //variabel untuk menyimpan hasil operasi sigma dari kuadrat (data ke-i - rata-rata)
    for (int i = 0; i < banyakData; i++)    //iterasi untuk menghitung sigma dari kuadrat (data ke-i - rata-rata)
    {
        hasilPenjumlahan += pow((nilaiData[i]-rataRata),2);
    }
    
    //Menampilkan hasil seluruh perhitungan
    float variansiPopulatif = hasilPenjumlahan/banyakData;
    cout << "\nBerikut adalah hasil perhitungan dari data Anda:" << endl;
    cout << "Rata-rata data Anda adalah " << rataRata << "\tVariansi data Anda adalah " << variansiPopulatif << endl;

    cout << "\n=========== PROGRAM SELESAI DI SINI ===========\n\n";


    return 0;
}
