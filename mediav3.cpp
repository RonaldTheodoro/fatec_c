#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;


int main () {
    float no1, no2, media;
    
    system ("cls");
    cout << "Programa media!" << endl;
    cout << "Digite nota 1: ";
    cin >> no1;
    cout << "Digite nota 2: ";
    cin >> no2;
    media = (no1 + no2) / 2;

    cout << "Media: " << media;
    if (media >= 6)
        cout << " Aprovado" << endl;
    else 
        cout << " Reprovado" << endl;

    system ("pause");
    return 0;    
}
