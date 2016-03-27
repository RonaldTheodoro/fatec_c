// função e um pedaço de codigo retorna um valor em uma variavel com o seu nome

#include "main.h"

using namespace std;


int main() {
    setlocale(LC_ALL, "Portuguese");
    char tecla;
    double a, b, c, x;
    while (tecla != 27 && tecla != '3') {
        system("cls");
        setfill(".");
        cout << "1) Ler A, B, C e X" << endl;
        cout << "2) Verificar" << endl;
        cout << "3) Sair" << endl;
        cout << ">>> ";
        tecla = getche();
        if (tecla == '1') {
            a = ler_a();
            b = ler_b();
            c = ler_c();
            x = ler_x();
        } else if (tecla == '2') {
            if (e_equacao(a) != true) {
                system("cls");
                cout << "Nao e uma equacao do segundo grau" << endl;
                getch();
                exit(1);
            } else {
                system("cls");
                cout << "Resultado: " << calcula(a, b, c, x) << endl;
                system("pause");
            }
        }
    }
    return 0;
}


double ler_a(){
    double a;
    system("cls");
    cout << "Digite A: ";
    cin >> a;
    return a;
}


double ler_b(){
    double b;
    system("cls");
    cout << "Digite B: ";
    cin >> b;
    return b;
}


double ler_c(){
    double c;
    system("cls");
    cout << "Digite C: ";
    cin >> c;
    return c;
}


double ler_x(){
    double x;
    system("cls");
    cout << "Digite X: ";
    cin >> x;
    return x;
}


bool e_equacao(double a) {
    if (a == 0) return false;
    else return true;
}


double calcula(double a, double b, double c, double x) {
    return ((a * pow(x, 2)) + (b * x) - c);
}
