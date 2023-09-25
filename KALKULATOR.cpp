#include <iostream>
using namespace std;


int main()
{
    cout << "\n=========== KALKULATOR SEDERHANA ===========\n\n";
    float angka_1, angka_2, hasil;
    char tugas, keluar;

    cout << "Masukkan angka pertama : ";
    cin >> angka_1;
    cout << "Masukkan operator | + | - | x | / | : ";
    cin >> tugas;
    cout << "Masukkan angka kedua : ";
    cin >> angka_2;


    switch (tugas){
    case '+':
        hasil = angka_1 + angka_2;
        cout << endl << "Hasil dari ";
        cout << angka_1 << " " << tugas << " " << angka_2 << " = " << hasil;
        break;

    case '-':
        hasil = angka_1 - angka_2;
        cout << endl << "Hasil dari ";
        cout << angka_1 << " " << tugas << " " << angka_2 << " = " << hasil;
        break;

    case '*':
    case 'x':
        hasil = angka_1 * angka_2;
        cout << endl << "Hasil dari ";
        cout << angka_1 << " " << tugas << " " << angka_2 << " = " << hasil;
        break;

    case '/':
        hasil = angka_1 / angka_2;
        cout << endl << "Hasil dari ";
        cout << angka_1 << " " << tugas << " " << angka_2 << " = " << hasil;
        break;
    
    default:
        cout << "\nOPERATOR YANG ANDA MASUKKAN SALAH!";
        main();
        break;
    }

    cout<<"\n\nApakah anda ingin keluar (y/n)?"<<"\nMasukkan jawaban Anda: ";
    while (true){
        cin>>keluar;
        if (keluar == 'y' || keluar == 'Y'){
            cout << "\n=========== PROGRAM SELESAI ===========\n\n";
            return false;
        }
        else if (keluar == 'n' || keluar == 'N'){
            main();
        }
        else{
            cout<<"HARAP MASUKKAN Y/N!";
        }
    }
    
    return 0;
}

