#ifndef MAHASISWA_H
#define MAHASISWA_H

struct Mahasiswa {
    int npm;
    char nama[50];
    int kehadiran[14]; // maximum 14 pertemuan
    Mahasiswa* next;
};

void tambahMahasiswa(Mahasiswa*& head, int npm, const char* nama);
void tambahKehadiran(Mahasiswa* head, int npm, int pertemuan);
void cetakData(Mahasiswa* head);

#endif // MAHASISWA_H
