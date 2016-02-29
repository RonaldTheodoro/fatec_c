/*
Faça um programa em C++ para :
A) ler os lados de um triangulo
b) consistir os lados, somente números positivos
c) identificar o TIPO do triangulo: EQUILATERO, ISOCELES OU ESCALENO
d) identificar a BASE do triangulo: SE EQUILATERO SERÁ QUALQUER LADO, SE 
ISOCELES SERÁ O LADO DIFERENTE, SE ESCALENO SERÁ O LADO MAIOR.
e) calcular o SP: SemiPerimetro   DIVIDIR A SOMA DOS LADOS POR 2
f) calcular a AREA usando o Teorema de HERON (VER FORMULA NA INTERNET)
g) calcular a ALTURA usando a fórmula tradicional (AREA = BASE * ALTURA / 2)
*/

#include "iostream"
#include "string.h"
#include "math.h"
#include "cstdlib"
#include "conio.h"

using namespace std;

float lado (char side);
bool verifica_triangulo (float a, float b, float c);
string tipo_triangulo (float a, float b, float c);
float verifica_base (float a, float b, float c, string tipo);
float calcula_area (float a, float b, float c, float base);


int main () {
    float a, b, c, base, area;
    string tipo;
    a = lado('A');
    b = lado('B');
    c = lado('C');
    
    if (!(verifica_triangulo(a, b, c))) {
        cout << "Os lados não corresponde a um triangulo" << endl;
        exit (1);
    }
    
    tipo = tipo_triangulo (a, b, c);
    base = verifica_base (a, b, c, tipo);
    area = calcula_area (a, b, c, base);
    
    system ("cls");
    cout << "Resultado\n" << endl;
    cout << "Lado A: " << a << endl;
    cout << "Lado B: " << b << endl;
    cout << "Lado C: " << c << endl;
    cout << "Altura: " << (area / base) << endl; 
    cout << "Area: " << area << endl;
    cout << "Tipo: " << tipo << endl;
    system ("pause");
    return 0;    
}


float lado (char side) {
    float l = -1;
    while (l <= 0) {
        system ("cls");
        cout << "Digite o valor do lado " << side << ": ";
        cin >> l;
    }
    return l;
}


bool verifica_triangulo (float a, float b, float c) {
    if (a >= (b + c) || b >= (a + c) || c >= (a + b))
        return false;
    else
        return true; 
}


string tipo_triangulo (float a, float b, float c) {
    if (a == b && a == c)
        return "Equilaterio";
    else if (a != b && a != c && b != c)
        return "Escaleno";
    else
        return "Isoseles";
}


float verifica_base (float a, float b, float c, string tipo) {
    if (tipo == "Equilaterio")
        return a;
    else if (tipo == "Escaleno") {
         float aux = a;
         if (b > aux)
             aux = b;
         if (c > aux)
             aux = c;
             
         return aux;
    } else {
        if (a == b)
           return c;
        else if (a == c)
           return b;
        else if (b == c)
           return a;
    }
}


float calcula_area (float a, float b, float c, float base) {
      float sp = (a + b + c) / 2;
      return sqrt(sp * (sp - a) * (sp - b) * (sp - c));
}
