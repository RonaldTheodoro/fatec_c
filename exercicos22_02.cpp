/*
A) Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit. 
A fórmula de conversão e: f = (9 * c + 160) / 5, sendo f a temperatura em Fahrenheit e 
c a temperatura em Celsius.
*/

#include "iostream"
#include "conio.h"
#include "math.h"
#include "windows.h"

using namespace std;

float Fahrenheit (float c);


int main () {
    float c;
    
    cout << "Digite tempetatura em celsius: ";
    cin >> c;
    cout << "Fahrenheit: " << Fahrenheit (c) << endl;
    system ("pause");
    return 0;
}


float Fahrenheit (float c) {
      return (9 * c + 160) / 5;
}
/*
B) Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. 
A fórmula de conversão e: c = (f - 32) * (5 / 9), sendo f a temperatura em Fahrenheit 
e c a temperatura em Celsius.
*/

#include "iostream"
#include "conio.h"
#include "math.h"
#include "windows.h"

using namespace std;

float Celsius (float f);


int main () {
    float f;
    
    cout << "Digite tempetatura em Fahrenheit: ";
    cin >> f;
    cout << "Celsius: " << Celsius (f) << endl;
    system ("pause");
    return 0;
}


float Celsius (float f) {
      return (f - 32) / 1.8;
}
/*
C) Calcular e apresentar o valor do volume de uma lata de oleo, utilizando a formula: volume = 3.14159 * r ^ 2 * altura.
*/

#include "iostream"
#include "conio.h"
#include "math.h"
#include "windows.h"
#define pi 3.14159

using namespace std;


float volume(float c, float a);


int main () {
    float comprimento, altura;
    cout << "Digite o comprimento: ";
    cin >> comprimento;
    cout << "Digite a altura: ";
    cin >> altura;
    cout << "Volume: " << volume (comprimento, altura);
    system ("pause");
    return 0;
}


float volume (float c, float a) {      
      return pi * pow(((c / pi) / 2), 2) * a;
}

/*
D) Efetuar o calculo da quantidade de litros de combustivel gastos em uma viagem, 
utilizando-se um auto movel que faz 12 km por litro. Para obter o calculo, o 
usuario devera fornecer o tempo gasto e a velocidade media durante a viagem. 
Desta forma, será possivel obter a distância percorrida com a 
formula distancia = tempo * velocidade. tendo o valor da
*/

#include "iostream"
#include "conio.h"
#include "math.h"
#include "windows.h"

using namespace std;

float gastos (float t, float v);


int main () {
    float tempo, velocidade;
    cout << "Digite o tempo: ";
    cin >> tempo;
    cout << "Digite a velocidade: ";
    cin >> velocidade;
    cout << "Total gasto: " << gastos (tempo, velocidade) << endl;
    system ("pause");
    return 0;    
}


float gastos (float t, float v) {
      return (t * v) / 12;
}

	
