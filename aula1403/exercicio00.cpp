/* idoso 10% menor 5% */

#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>


using namespace std;

string nome[3];
char sexo[3];
float salario[3];
int n = 3, idade[3];

void preenche_dados();
void mostra();


int main() {
    char tecla;
    while(1) {
        system("cls");
        cout << "1) Preencher dados\n";
        cout << "2) Mostrar dados\n";
        cout << "3) Sair\n\n";

        tecla = getch();

        if (tecla == '1')
            preenche_dados();
        else if (tecla == '2')
            mostra();
        else if (tecla == '3')
            break;
        else {
            cout << "Opcao invalida";
            getch();
        }
    }
    return 0;
}


void preenche_dados() {
    for (int i = 0; i < n; i++) {
        system("cls");
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Salario: ";
        cin >> salario[i];
        cout << "Sexo(m/f): ";
        cin >> sexo[i];
    }
}


void mostra() {
    for (int i = 0; i < n; ++i){
        if (idade[i] >= 60)
            salario[i] = salario[i] + (salario[i] * 0.10);
        else if (idade[i] < 18)
            salario[i] = salario[i] + (salario[i] * 0.05);

        cout << "Nome: " << nome[i] << endl;
        cout << "Idade: " << idade[i] << endl;
        cout << "Salario: " << salario[i] << endl;
        cout << "Sexo: " << sexo[i] << endl;
        cout << "\n";
    }
    getch();
}

