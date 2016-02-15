#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;


float calcula_area (float base, float altura);


int main () {
    float base, altura;

    cout << "Digite base triangulo: "; cin >> base;
    cout << "Digite altura triangulo: "; cin >> altura;

    cout << "Area do triangulo: " << calcula_area (base, altura) << endl;
    system ("pause");
    return 0;
}


float calcula_area (float base, float altura) {
      return (base * altura) / 2;
}
