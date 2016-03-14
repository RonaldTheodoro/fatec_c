/* Elaborar um programa que efetue a apresentação do valor da conversão em real (R$) de um valor lido  em dolar (U$$). O programa deverá solicitar o valor da cotação do dolar e também a quantidade de dólares disponível com o usuário. */

#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;


int main() {
    float dolar[2];
    cout << "Digite o valor da cotação do dolar: ";
    cin >> dolar[0];
    cout << "Digite o valor em dolares: ";
    cin >> dolar[1];

    cout << "Valor convertido em reais: " << dolar[1] / dolar[0] << endl;

    return 0;
}