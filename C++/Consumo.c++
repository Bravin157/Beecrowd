#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    /*
       Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida 
       (em Km) e o total de combustível gasto (em litros).

        Entrada
        O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total 
        percorrida (em Km), e um valor real Y representando o total de combustível gasto, com
         um dígito após o ponto decimal.
    */

   int X;
   double Y;

   cin >> X;
   cin >> Y;

    cout << fixed << setprecision(3);

    cout << X / Y << " km/l";
   

    return 0;
}