/* Elaborar um programa que efetue o cálculo e no final apresente o somatório do número de
 * grãos de trigo que se pode obter num tabuleiro de xadrez, obedecendo à segunte regra:
 * colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro
 * anterior, Ou seja, no primeiro quadro coloca-se 1 grão, no segundo quadrado colocam-se 2
 * grãos (neste momento têm-se 3 grãos), no terceiro quadro colocam-se 4 grãos (neste momento
 * têm-se 7 grãos), no quarto quadrado colocam-se 8 grãos (neste momento têm-se 15 grãos) até
 * atingir o sexagésimo quarto quadrado.
 */

#include <iostream>


using namespace std;

long int calcula_graos (long int graos);


int main () {
    long int graos[64];
    int aux;

    graos[0] = 1;

    for (int x = 1; x <= 64; x++) {
        graos[x] = calcula_graos (graos[x-1]);
    }

    for (int x = 0; x < 64; x++) {
        cout << "Numero de graos na posicao " << x + 1 << ": "<< graos[x] << endl;
    }

    return 0;
}


long int calcula_graos (long int graos) {
    return graos * 2;
}
