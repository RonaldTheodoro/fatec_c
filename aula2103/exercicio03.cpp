/* Elaborar um programa que apresente os valores de conversão de graus Celsius em Fahrenheit,
 * de 10 em 10 graus iniciando a contagem em 10 graus Celsius e finalizando em 100 graus
 * Celsius, O programa deverá apresentar o valor das 2 temperaturas.
 */

#include <iostream>

using namespace std;

float fahrenheit (float celsius);

int main () {

    for (int x = 10; x <= 100; x = x + 10)
        cout << "Celsius: " << x << " Fahrenheit: " << fahrenheit (x) << endl;

    return 0;
}


float fahrenheit (float celsius) {
    return (celsius * 1.8) + 30;
}
