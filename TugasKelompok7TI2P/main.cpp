#include "mahasiswa.h"
#include <iostream>

int main() {
    Mahasiswa* head = NULL;

    int pilihan;
    while (true) {
        std::cout << "Menu Pilihan:" << std::endl;
        std::cout << "[1] Tambah Mahasiswa" << std::endl;
        std::cout << "[2] Tambah Kehadiran Mahasiswa" << std::endl;
        std::cout << "[3] Cetak Seluruh Data" << std::endl;
        std::cout << "[0] Keluar" << std::endl;
        std::cout << "Masukkan pilihan: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int npm;
                char nama[50];
                std::cout << "Masukkan NPM: ";
                std::cin >> npm;
                std::cout << "Masukkan Nama: ";
                std::cin.ignore();
                std::cin.getline(nama, 50);
                tambahMahasiswa(head, npm, nama);
                break;
            }
            case 2: {
                int npm, pertemuan;
                std::cout << "Masukkan NPM: ";
                std::cin >> npm;
                std::cout << "Masukkan Pertemuan: ";
                std::cin >> pertemuan;
                tambahKehadiran(head, npm, pertemuan);
                break;
            }
            case 3:
                cetakData(head);
                break;
            case 0:
                return 0;
            default:
                std::cout << "Pilihan tidak valid" << std::endl;
        }
    }

    return 0;
}
