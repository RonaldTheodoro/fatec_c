/* Elaborar um programa que apresente como resultado o valor de uma
 * potência de uma base qualquer elevada a um expoente qualquer, ou
 * seja, de x^n, em que x é o valor da base e n o valor do expoente.
 * Considere apenas a entrada de valores inteiros e positivos.
 */

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int calcula_potencia (int base, int expoente);

int main () {
    int base, expoente;
    cout << "Digite o valor da base: ";
    cin >> base;
    cout << "Digite o valor do expoente: ";
    cin >> expoente;

    cout << "Resultado: " << calcula_potencia (base, expoente) << endl;
    system ("pause");
    return 0;
}


int calcula_potencia (int base, int expoente) {
    return pow (base, expoente);
}
