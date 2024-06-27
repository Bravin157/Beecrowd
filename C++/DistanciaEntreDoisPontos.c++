#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    /*
       Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no 
       plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas 
       decimais após a vírgula
    */

   double x1, y1, x2, y2, resultado;

   cin >> x1 >> y1;
   cin >> x2 >> y2;

   cout << fixed << setprecision(4);

   resultado = sqrt((pow(x2 - x1, 2.0)) + (pow(y2 - y1, 2.0)));

   cout << resultado;
   
    return 0;
}