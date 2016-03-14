/* Ler dois valores inteiros (variáveis A e B) e apresentar o resultado do quadrado da diferença do primeiro valor (variavel A) pelo segundo valor (variavel B). */

#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;


int main() {
    int vet[2], resul;

    cout << "Digite o primeiro valor: ";
    cin >> vet[0];
    cout << "Digite o segundo valor: ";
    cin >> vet[1];

    cout << "Resultado: " << pow((vet[0] - vet[1]), 2) << endl;
    return 0;
}
