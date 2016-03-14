/* Uma firma contrata um encanador a 20.000,00 por dia, Crie um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda. */

#include <iostream>
#include <string.h>
#include <math.h>
#define diaria 20000

using namespace std;


int main () {
    int dias, total;
    float imposto;

    cout << "Digite o numero de dias trabalhados: ";
    cin >> dias;
    total = diaria * dias;
    imposto = total * 0.08;
    cout << "Valor do imposto: RS " << imposto << endl;
    cout << "Valor a ser pago: RS " << total - imposto << endl;

    return 0;
}