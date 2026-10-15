#include <stdio.h>
#include <string.h>

int main() {
    char nama[100], nim[30], kelas[30];
    char ttl[100], alamat[200], hobby[100], hp[30];

    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM: ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel: ");
    fgets(kelas, sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir: ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat: ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby: ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP: ");
    fgets(hp, sizeof(hp), stdin);

    nama[strcspn(nama, "\n")] = '\0';
    nim[strcspn(nim, "\n")] = '\0';
    kelas[strcspn(kelas, "\n")] = '\0';
    ttl[strcspn(ttl, "\n")] = '\0';
    alamat[strcspn(alamat, "\n")] = '\0';
    hobby[strcspn(hobby, "\n")] = '\0';
    hp[strcspn(hp, "\n")] = '\0';

    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP               : %s\n", hp);

    return 0;
}