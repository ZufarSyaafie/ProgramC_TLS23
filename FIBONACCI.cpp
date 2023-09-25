#include <iostream>

int main()
{
    std::cout << "\n=========== BARISAN FIBONACCI ===========\n\n";
    int limit;

    std::cout << "Masukkan banyaknya suku barisan yang Anda inginkan : ";
    std::cin >> limit;
    if (limit < 0){
        std::cout << "\nTOLONG MASUKKAN ANGKA POSITIF\n\n";
        return main();
    } else {
        std::cout << "\n\nMenampilkan barisan Fibonacci sebanyak " << limit << " suku" << std::endl; 
    }

    int angka_sebelumnya = 0, angka_sekarang = 1;
    for(int i = 0; i < limit; i++){
        std::cout << angka_sekarang << " ";
        int jumlah = angka_sebelumnya + angka_sekarang;
        angka_sebelumnya = angka_sekarang;
        angka_sekarang = jumlah;
    }

    std::cout << "\n\n===========SELESAI===========\n\n";

    return 0;
}
