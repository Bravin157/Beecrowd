#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    /*
       Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida 
       (em Km) e o total de combust�vel gasto (em litros).

        Entrada
        O arquivo de entrada cont�m dois valores: um valor inteiro X representando a dist�ncia total 
        percorrida (em Km), e um valor real Y representando o total de combust�vel gasto, com
         um d�gito ap�s o ponto decimal.
    */

   int X;
   double Y;

   cin >> X;
   cin >> Y;

    cout << fixed << setprecision(3);

    cout << X / Y << " km/l";
   

    return 0;
}