#include <stdio.h>

int main() {
    double r, t, pi, volume, luas, keliling;

    scanf("%lf", &r);
    scanf("%lf", &t);

    pi = 22.0 / 7.0;

    volume = pi * r * r * t;
    luas = 2 * pi * r * (r + t);
    keliling = 2 * pi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}