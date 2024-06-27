#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    /*
       Faça um programa que leia três valores e apresente o maior dos três valores lidos 
       seguido da mensagem "eh o maior".
    */

   int a, b, c;

   cin >> a >> b >> c;

   if (a >= b && a >= c) {
    cout << a << " eh o maior" << endl;
   }
   else if (b >= a && b >= c) {
        cout << b << " eh o maior" << endl;
    }
    else if (c >= a && c >= b) {
        cout << c << " eh o maior" << endl;
    }

    return 0;
}
