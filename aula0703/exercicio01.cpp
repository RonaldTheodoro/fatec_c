/* Dois amigos jogam na loteria toda semana. Escreva um programa que solicite
com quanto cada um entrou em dinheiro e o valor do prêmio que deve ser rateado em partes diretamente proporcionais às quantias com que cada um entrou. O
programa deve imprimir quanto receberá cada um se eles ganharem */

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

float porcentagem(float valor, float total);
float calc_premio(float p, float premio);

int main () {
    string nA, nB;
    float vA, vB, pA, pB, premio;

    cout << "Digite seu nome: ";
    cin >> nA;
    cout << "Digite o valor apostado: ";
    cin >> vA;

    cout << "Digite seu nome: ";
    cin >> nB;
    cout << "Digite o valor apostado: ";
    cin >> vB;

    cout << "Digite o valor do premio: ";
    cin >> premio;

    pA = porcentagem(vA, vA + vB);
    pB = porcentagem(vB, vA + vB);

    cout << "Porcentagem de " << nA << " " << pA << " \%" << endl;
    cout << "Ele recebera: RS " << calc_premio(pA, premio) << endl;
    cout << "Porcentagem de " << nB << " " << pB << " \%" << endl;
    cout << "Ele recebera: RS " << calc_premio(pB, premio) << endl;

    return 0;
}


float porcentagem(float valor, float total) {
    return (valor / total) * 100;
}


float calc_premio(float p, float premio) {
    return (p / 100) * premio;
}