/* A impoetância de 78.000,00 será dividida entre os três primeiros colocados de um concurso, em partes diretamente proporcionais aos pontos conseguidos por eles. Construa um programa que solicite o número de pontos dos três primeiros colocados e imprima a importância que caberá a cada um. */

#include <iostream>
#include <string.h>
#include <math.h>
#define premio 78000

using namespace std;

float porcentagem(int pontos, int totalpontos);


int main () {
    int p1, p2, p3, totalpontos;
    float por1, por2, por3;

    cout << "Digite a pontuacao do primeiro colocado: ";
    cin >> p1;
    cout << "Digite a pontuacao do segundo colocado: ";
    cin >> p2;
    cout << "Digite a pontuacao do terceiro colocado: ";
    cin >> p3;

    totalpontos = p1 + p2 + p3;

    por1 = porcentagem(p1, totalpontos);
    por2 = porcentagem(p2, totalpontos);
    por3 = porcentagem(p3, totalpontos);

    cout << "Primeiro colocado: RS " << por1 << endl;
    cout << "Segundo colocado: RS " << por2 << endl;
    cout << "Terceiro colocado: RS " << por3 << endl;

    return 0;
}


float porcentagem(int pontos, int totalpontos) {
    return (((float) pontos / totalpontos) * premio);
}
