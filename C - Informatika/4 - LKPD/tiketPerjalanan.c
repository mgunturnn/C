#include<stdio.h>
#include<string.h>

// program utama
void main(){
    // deklarasi variabel
    char tujuan1[100] = "Malang"; // tujuan malang
    char tujuan2[200] = "Bali";  // tujuan bali
    int tiket1 = 88; // tujuan malang
    int tiket2 = 40; // tujuan bali
    float hargaTiket1 = 250000; // harga tiket rute Jakarta-Malang
    float hargaTiket2 = 600000; // harga tiket rute Jakarta-Bali

    system("cls"); // clear screen
    printf("Program Penjualan Tiket Perjalanan\n");
    printf("Tiket ke %s sebanyak %d\n", tujuan1, tiket1);
    printf("Tiket ke %s sebanyak %d\n", tujuan2, tiket2);
    printf("Total tiket yang terjual adalah %d\n", tiket1 + tiket2); // jumlahkan tiket1 dan tiket2
    printf("Total keuntungan kotor yang didapat adalah Rp. %.2f\n", (tiket1 * hargaTiket1) + (tiket2 + hargaTiket2)); // jumlahkan tiket1 dan tiket2
}