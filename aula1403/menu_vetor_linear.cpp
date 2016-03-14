/* www.// cplusplus.com/reference */
#include "iostream" 
#include "cstdlib"
#include "string.h"
#include "math.h"
#include "conio.h"
#include "windows.h"
#define n 3
using namespace std;

// Criando Vetores/listas Globais
string nom[n];   // lista de nomes
double sal[n];   // lista de salarios
int    ida[n];   // lista de idades

int main () {
char tecla; 
    
do
{ // 1 - processo de tela de entrada
  system("cls");
  cout << "1 - Ler Vetores...\n";
  cout << "2 - Exibir Vetores...\n";
  cout << "3 - Sair ...\n \n \n ";
  cout << "Item> ";
  tecla = getche();


  /*2 - Processo de tratamento de tela 
        de entrada*/
if (tecla == '1')
{ // leitura dos vetores

 for (int i=0;i<n;i++)
 { system("cls");
   cout << "\n Digite nome "  << i+1 << ":";
   cin  >> nom[i];

   cout << "\n Digite idade " << i+1 << ":";
   cin  >> ida[i];

   cout << "\n Digite salario"<< i+1 << ":";
   cin  >> sal[i];
 } }



  else if(tecla == '2') 
{
// impressao dos  vetores
system("cls");
for (int i=0; i<n;i++)         
 { cout << "\n" << nom[i] << "|" 
    << sal[i] << "|" << ida[i] ;

 }
   getch(); // pausa
}
 
} while ( tecla != 27 && tecla != '3' );

    return 0; }
