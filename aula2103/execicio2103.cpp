#include "iostream"
#include "cstdlib"
#include "math.h"
#include "locale.h"// acentuação gráfica
#include "time.h" // data sistema
#include "conio.h"
#include "windows.h"
#include "string.h"
#include "iomanip"

using namespace std;

double armazena_valores(char letra);
double calcula_delta (double a, double b, double c);
double calcula_equacao(double a, double b, double c, double x);
bool verifica_delta (double delta);
void calcula_x1 (double a, double b, double delta);
void calcula_x2 (double a, double b, double delta);

int main () {
    setlocale(LC_ALL, "Portuguese");

    double abcx[4], aux;
    abcx[0] = armazena_valores('a');
    abcx[1] = armazena_valores('b');
    abcx[2] = armazena_valores('c');
    abcx[3] = armazena_valores('x');

    /* Calcula resultado de equação de 2º grau */
    aux = calcula_equacao(abcx[0], abcx[1], abcx[2], abcx[3]);
    cout << "Resultado do calculo da função de 2º grau: " << aux << "\n" << endl;

    /* Calcula o delta */
    aux = calcula_delta (abcx[0], abcx[1], abcx[2]);
    if (verifica_delta (aux)) {
        calcula_x1 (abcx[0], abcx[1], aux);
        calcula_x2 (abcx[0], abcx[1], aux);
    }


    return 0;
}


double armazena_valores(char letra) {
    double valor;
    while (1) {
        system ("cls");
        cout << "Digite o valor de " << letra << ": ";
        cin >> valor;
        if (letra == 'a' && valor == 0) {
            cout << "Não e possivel fazer o calculo se o A for 0" << endl;
            system("pause");
        } else
            return valor;
    }
}


double calcula_delta (double a, double b, double c) {
    return (pow (b, 2) - (4 * a * c));
}


double calcula_equacao(double a, double b, double c, double x) {
    return ((a * pow(x, 2)) + (b * x) - c);
}


bool verifica_delta (double delta) {
    cout << "Valor de delta: " << delta << "\n" << endl;

    if (delta < 0) {
        cout << "O valor do Delta é negativo" << endl;
        cout << "Não há solução para raízes no conjunto dos números reais" << endl;
        return false;
    } else if (delta == 0)
        cout << "Duas raizes reais iguais";
    else
        cout << "Duas raìzes reais diferentes";
    return true;
}


void calcula_x1 (double a, double b, double delta) {
       cout << "\nValor de X1: " << (-b + sqrt (delta)) / 2 * a << endl;
}


void calcula_x2 (double a, double b, double delta) {
       cout << "\nValor de X2: " << (-b - sqrt (delta)) / 2 * a << endl;
}
