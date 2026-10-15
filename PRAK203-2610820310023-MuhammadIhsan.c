#include <stdio.h>

int main() {
    double a, b, i, j, x, y;

    if (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y) == 6) {

        double hasil = (a - b) * (i / j) - (x + y);

        printf("%.3f\n", hasil);
    }

    return 0;
}