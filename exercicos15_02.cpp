//ola_mundo.cpp

#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

float no1 = 4, no2 = 5;


int main () {
    system ("cls");
    cout << "Ola mundo!" << endl;
    cout << "Media:  " << (no1 + no1) / 2 << endl;
    system ("pause");
    return 0;
}

//imc.cpp

#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;


float calcula_imc (float peso, float altura);
void tabela_imc (float imc);


int main () {
    float peso, altura, imc;
    
    cout << "Digite o seu peso: "; cin >> peso;
    cout << "Digite sua altura: "; cin >> altura;
    imc = calcula_imc (peso, altura);
    
    tabela_imc (imc);

    system ("pause");
    return 0;    
}


float calcula_imc (float peso, float altura) {
      return peso / pow(altura, 2);
}


void tabela_imc (float imc) {
     cout << "IMC: " << imc << " ";
     if (imc < 18.5)
        cout << "abaixo do peso ideal" << endl;
     else if (imc >= 18.5 && imc <= 24.9)
        cout << "peso ideal" << endl;
     else if (imc >= 25 && imc <= 29.9)
        cout << "sobrepeso" << endl;
     else if (imc >= 30 && imc <= 34.9)
        cout << "obesidade grau I" << endl;
     else if (imc >= 35 && imc <= 39.9)
        cout << "obesidade grau II" << endl;
     else if (imc >= 40)
        cout << "obesidade grau III" << endl;
}

//triangulo.cpp

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

//media.cpp

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

    cout << "Media: " << media << endl;
    system ("pause");
    
    return 0; 


//mediav2.cpp

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
