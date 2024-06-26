#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    /*
       Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B 
       atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado 
       abaixo. 
    */

   int A, B;

   cin >> A;
   cin >> B;

   cout <<"X = " << A + B << endl;


    return 0;
}