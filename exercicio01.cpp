/* Faça o programa para calcular o peso ideal em C++ */

#include <iostream>
#include <math.h>

using namespace std;


float calcula_imc (float peso, float altura);
void mostra_imc (float imc);


int main () {
    float peso, altura, imc;
    
    cout << "Digite o seu peso: ";
    cin >> peso;
    
    cout << "Digite a sua altura: ";
    cin >> altura;
    
    imc = calcula_imc (peso, altura);
    
    mostra_imc (imc);
    
    system ("pause");
    return 0;
}


float calcula_imc (float peso, float altura) {
      return peso / pow (altura, 2);
}


void mostra_imc (float imc) {
     cout << "IMC: " << imc << endl;
     if (imc < 17)
        cout << "Muito abaixo do peso" << endl;
     else if (imc >= 17 && imc <= 18.49)
        cout << "Abaixo do peso" << endl;
     else if (imc >= 18.5 && imc <= 24.99)
        cout << "Peso normal" << endl;
     else if (imc >= 25 && imc <= 29.99)
        cout << "Acima do peso" << endl;
     else if (imc >= 30 && imc <= 34.99)
        cout << "Obesidade I" << endl;
     else if (imc >= 35 && imc <= 39.99)
        cout << "Obesidade II (severa)" << endl;
     else if (imc >= 40)
        cout << "Obesidade III (mórbida)" << endl;
}
