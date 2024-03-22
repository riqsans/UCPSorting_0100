// UCPSorting_0100.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void Bubblesort(int Thoriq[10], int n) {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (Thoriq[i] < Thoriq[min_index]) {
                min_index = i;
            }
        }
        // Swap arr[j] with arr[min_index]
        int temp =  Thoriq[j];
        Thoriq[j] = Thoriq[min_index];
        Thoriq[min_index] = temp;
    }
}

int main() {
    int n;
    cout << "Masukkan Nilai : ";
    cin >> n;

    int Thoriq[10];

    cout << "Masukkan " << n << " Nilai:\n";
    for (int i = 0; i < n; i++) {
        cout << "Masukkan Nilai " << i + 1 << " : ";
        cin >> Thoriq[i];
    }

    // memanggil bubblesort function untuk mengurutkan array
    Bubblesort(Thoriq, n);

    // Menampilkan pengurutan array
    cout << "Menampilkan array:\n";
    for (int i = 0; i < n; i++) {
        cout << Thoriq[i] << " ";
    }
    cout << endl;

    return 0;
}
//1. Algoritma Bubble Sort membandingkan pasangan elemen berturut - turut dalam daftar, menukar mereka jika diperlukan, dan berulang hingga seluruh daftar terurut.Elemen terbesar "muncul" ke daftar  seperti gelembung(buble).Meskipun sederhana, algoritma ini memiliki keterbatasan pada daftar besar karena kompleksitas waktu yang buruk.
//2. Algoritma Shell Sort membagi daftar menjadi sub - daftar dengan jarak tertentu, kemudian mengurutkan sub - daftar tersebut secara terpisah menggunakan algoritma Insertion Sort.Proses ini diulangi dengan mengurangi jarak antar sub - daftar hingga seluruh daftar terurut.Algoritma ini mengurangi jumlah pertukaran elemen dengan mengurutkan sub - daftar yang lebih kecil terlebih dahulu.
//3. Jika sebagian data sudah urut, gunakan algoritma Insertion Sort. karena Insertion Sort bisa menempatkan elemen baru ke posisi yang tepat. Jadi, saat ada data yang sudah terurut sebagian, Insertion Sort lebih cepat dan lebih efisien daripada algoritma lain seperti Bubble Sort atau Selection Sort.




