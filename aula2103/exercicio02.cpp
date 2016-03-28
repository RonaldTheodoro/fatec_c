/* Escreva um programa que apresente a série de fibonacci até o décimo quinto termo, A série
 * de Fibonacci é formada pela sequencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc. Esta série
 * se caracteriza pela soma de um termo posterior com o seu anterior subsequente.
 */

#include <iostream>

using namespace std;


int main () {
    int x = 0, y = 1, aux;

    cout << "Série de Fibonacci:\n";
    cout << y << endl;

    for(int i = 0; i < 15; i++) {
        aux = x + y;
        x = y;
        y = aux;

        cout << aux << endl;
    }
    return 0;
}
