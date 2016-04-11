#include <iostream>
#include <math.h>

using namespace std;

float calcula_lado(float altura);
float calcula_base(float lado);
float calcula_volume(float base, float altura);


int main () {
    float altura, lado, base, volume;
    
    cout << "Digite altura da piramide: ";
    cin >> altura;
    lado = calcula_lado (altura);
    base = calcula_base (lado);
    volume = calcula_volume (base, volume);
    
    cout << "Altura: " << altura << endl;
    cout << "Lado: " << lado << endl;
    cout << "Base: " << base << endl;
    cout << "Volume: " << volume << endl;

    system ("pause");
    return 0;
}


float calcula_lado (float altura) {
      return altura / 3;
}


float calcula_base (float lado) {
      return pow(lado, 2);
}


float calcula_volume (float base, float altura) {
      return (base * altura) / 3;
}
