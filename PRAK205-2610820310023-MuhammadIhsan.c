
#include <stdio.h>
#include <math.h>

int main() {
    double tinggi, sisi_miring;
    double alas, keliling, luas;

    scanf("%lf %lf", &tinggi, &sisi_miring);

    alas = sqrt(pow(sisi_miring, 2) - pow(tinggi, 2));
    keliling = alas + tinggi + sisi_miring;
    luas = 0.5 * alas * tinggi;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}