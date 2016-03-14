/* Elaborar um programa que efetue a apresentação do valor da conversão em real (U$$) de um valor lido  em real (R$). O programa deverá solicitar o valor da cotação do real e também a quantidade de reais disponível com o usuário. */

#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;


int main() {
    float real[2];

    cout << "Digite o valor da cotação do dolar: ";
    cin >> real[0];
    cout << "Digite o valor em reais: ";
    cin >> real[1];

    cout << "Valor convertido em dolar: " << real[1] / real[0] << endl;
    return 0;
}