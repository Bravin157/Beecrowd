#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    /*
       A fórmula para calcular a área de uma circunferência é: area = ? . raio2. 
       Considerando para este problema que ? = 3.14159:

        Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por ?.
    */

   double area, n, raio;

    n = 3.14159;

   cin >> raio;

   cout << fixed << setprecision(4);
   
   area = n * pow(raio, 2.0);

    cout << "A=" << area << endl;

    return 0;
}