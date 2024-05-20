#include "mahasiswa.h"
#include <iostream>
#include <cstring>

void tambahMahasiswa(Mahasiswa*& head, int npm, const char* nama) {
    Mahasiswa* newNode = new Mahasiswa;
    newNode->npm = npm;
    strcpy(newNode->nama, nama);
    for (int i = 0; i < 14; i++) {
        newNode->kehadiran[i] = 0;
    }
    newNode->next = head;
    head = newNode;
}

void tambahKehadiran(Mahasiswa* head, int npm, int pertemuan) {
    Mahasiswa* current = head;
    while (current != NULL) {
        if (current->npm == npm) {
            current->kehadiran[pertemuan - 1]++; // pertemuan starts from 1
            break;
        }
        current = current->next;
    }
}

void cetakData(Mahasiswa* head) {
    Mahasiswa* current = head;
    while (current != NULL) {
        std::cout << "NPM: " << current->npm << ", Nama: " << current->nama << std::endl;
        std::cout << "Kehadiran: ";
        for (int i = 0; i < 14; i++) {
            std::cout << current->kehadiran[i] << " ";
        }
        std::cout << std::endl;
        current = current->next;
    }
}
