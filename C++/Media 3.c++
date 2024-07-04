#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");


   double n1, n2, n3, n4, media;

   cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;

    cout << fixed << setprecision(1);

    cout << "Media: " << media << "\n";

    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    }
    else if (media >= 5.0 && media <= 6.9) {
        double n5, media1;
        cin >> n5;
        media1 = (n5 + media) / 2;

        cout << "Aluno em exame.\n";
        cout << "Nota do exame: " << n5 << "\n";
        
        if (media1 >= 5.0) {
            cout << "Aluno aprovado.\n";
            cout << "Media final: " << media1 << endl;
        }
        else {
            cout << "Aluno reprovado.\n";
            cout << "Media final: " << media1 << endl;
        }
    }
   
    return 0;
}