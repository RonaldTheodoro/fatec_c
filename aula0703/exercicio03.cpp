/* Sabendo que o latão é obtido fundindo-se sete partes de cobre com três partes de zinco, faca um programa que solicite quantos quilos de latão ele quer produzir e imprima quantos quilos de cobre e zinco são necessários. */

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main () {
    float quilos;

    cout << "Digite quantos quilos de latão serão feitos: ";
    cin >> quilos;

    cout << "Sera necesarios quilos " << quilos * 0.3 << " de zinco" << endl;
    cout << "Sera necesarios quilos " << quilos * 0.7 << " de cobre" << endl;
    return 0;
}