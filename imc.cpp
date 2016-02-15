#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;


float calcula_imc (float peso, float altura);
void tabela_imc (float imc);


int main () {
    float peso, altura, imc;
    
    cout << "Digite o seu peso: "; cin >> peso;
    cout << "Digite sua altura: "; cin >> altura;
    imc = calcula_imc (peso, altura);
    
    tabela_imc (imc);

    system ("pause");
    return 0;    
}


float calcula_imc (float peso, float altura) {
      return peso / pow(altura, 2);
}


void tabela_imc (float imc) {
     cout << "IMC: " << imc << " ";
     if (imc < 18.5)
        cout << "abaixo do peso ideal" << endl;
     else if (imc >= 18.5 && imc <= 24.9)
        cout << "peso ideal" << endl;
     else if (imc >= 25 && imc <= 29.9)
        cout << "sobrepeso" << endl;
     else if (imc >= 30 && imc <= 34.9)
        cout << "obesidade grau I" << endl;
     else if (imc >= 35 && imc <= 39.9)
        cout << "obesidade grau II" << endl;
     else if (imc >= 40)
        cout << "obesidade grau III" << endl;
}
