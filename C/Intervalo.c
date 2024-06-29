#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double a;

    scanf("%lf", &a);

    if (a >= 0.0 && a <= 25.00) {
        printf("Intervalo [0,25]\n");
    }
    else if (a >= 25.01 && a <= 50.00) {
        printf("Intervalo (25,50]\n");
    }
    else if (a >= 50.01 && a <= 75.00) {
        printf("Intervalo (50,75]\n");
    }
    else if (a >= 75.01 && a <= 100.00) {
        printf("Intervalo (75,100]\n");
    }
    else if (a < 0.00 || a > 100.01) {
        printf("Fora de intervalo\n");
    }

    return 0;
}