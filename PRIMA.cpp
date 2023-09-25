#include <iostream>

using namespace std;

int main()
{
    cout << "\n=========== BILANGAN PRIMA ===========\n\n";
    int limit, jumlah_faktor, prima_ditemukan;
    cout << "Masukkan banyaknya bilangan prima yang Anda inginkan : ";
    cin >> limit;
    if (limit < 0){
        cout << endl << "TOLONG MASUKKAN ANGKA POSITIF\n\n";
        return main();
    } else {
        cout << "\n\nMenampilkan bilangan prima sebanyak " << limit << " bilangan" << endl; 
    }
    jumlah_faktor = 0;
    prima_ditemukan = 0;

    for(int uji = 1; ; uji++){
        jumlah_faktor = 0;
        for(int pembagi = 1 ; pembagi <= uji; pembagi++){
            if (uji % pembagi == 0){
                jumlah_faktor++;
            }
        }
        if (jumlah_faktor == 2){
            cout << uji << " ";
            prima_ditemukan++;
        } 
         if (prima_ditemukan == limit) {
            break;
        }
    
    }
    cout << "\n\n===========SELESAI===========\n\n";
    return 0;
}