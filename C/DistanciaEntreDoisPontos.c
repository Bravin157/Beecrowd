#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double x1, y1, x2, y2, resultado;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    resultado = sqrt((pow(x2 - x1, 2.0)) + (pow(y2 - y1, 2.0)));

    printf("%.4lf\n", resultado);

    return 0;
}