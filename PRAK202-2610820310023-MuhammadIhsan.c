#include <stdio.h>

int main() {
    double nilai1, nilai2, hasil;

    printf("Masukkan Nilai Pertama: ");
    scanf("%lf", &nilai1);

    printf("Masukkan Nilai Kedua: ");
    scanf("%lf", &nilai2);

    hasil = nilai1 + nilai2;

    printf("Hasil dari penjumlahan nilai pertama \"%.15g\" "
           "dan nilai kedua \"%.15g\" adalah \"%.2f\"\n",
           nilai1, nilai2, hasil);
    return 0;
}