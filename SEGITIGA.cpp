#include <iostream>

using namespace std;

int main()
{
    cout << "\n=========== SEGITIGA ===========\n\n";

    cout << "Masukkan jumlah baris : ";
    int jumlah;
    cin >> jumlah;
    
    cout << "Menampilkan " << jumlah << " baris segitiga\n\n";

    // Segitiga sama kaki
    cout << "\nSegitiga Sama Kaki\n\n";
    for(int i = 1; i <= jumlah; i++){
        for (int k = jumlah; k > i; k--){
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++){
            cout << "*";
        }
    cout << endl;
    }
    cout << endl;
    
    // Segitiga sama kaki ke bawah
    for(int i = 1; i <= jumlah; i++){
        for (int k = 1; k < i; k++){
            cout << " ";
        }
        for (int k = jumlah ; k >= (2*i-jumlah); k--){
            cout << "*";
        }
    cout << endl;
    }
    
    // siku siku ke atas rata kiri
    cout << "\nSegitiga Siku-Siku Rata Kiri\n\n";
    for(int i = 1; i <= jumlah; i++){
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
    cout << endl;
    }
    cout << endl;

    //siku siku ke bawah rata kiri
    for(int i = 1; i <= jumlah; i++){
        for (int k = jumlah; k >= i; k--){
            cout << "*";
        }
        for (int k = 1; k <= i; k++){
            cout << " ";
        }
    cout << endl;
    }

    //siku siku ke atas rata kanan
    cout << "\nSegitiga Siku-Siku Rata Kanan\n\n";
    for(int i = 1; i <= jumlah; i++){
        for (int k = jumlah; k > i; k--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
    cout << endl;
    }
    cout << endl;

    //siku siku ke bawah rata kanan
    for(int i = 1; i <= jumlah; i++){
        for (int k = 1; k < i; k++){
            cout << " ";
        }
        for (int k = jumlah; k >= i; k--){
            cout << "*";
        }
    cout << endl;
    }

    cout << "\n=========== SELESAI ===========\n\n";
    return 0;
}
