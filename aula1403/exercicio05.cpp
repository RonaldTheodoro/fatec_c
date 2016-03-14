/* Elaborar um programa que efetue a leitura de três valores (A, B e C)  e apresente como resultado final o quadrados da soma dos três valores lidos. */

#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;


int main() {
    int val[4];
    cout << "Digite o primeiro valor: ";
    cin >> val[0];
    cout << "Digite o segundo valor: ";
    cin >> val[1];
    cout << "Digite o terceiro valor: ";
    cin >> val[2];

    val[3] = pow((val[0] + val[1] + val[2]), 2);
    cout << "Resultados: " << val[3] << endl;
    return 0;
}