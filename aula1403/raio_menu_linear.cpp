#include "iostream"
#include "cstdlib"
#include "windows.h"
#include "math.h"
#include "string.h"
#include "conio.h"
#define vel 340 //constante velocidade som
using namespace std;

// float const vel = 340; // constante
int main() {
    char tecla; // para capturar uma tecla
    int op;
    float ts, dist;
    
do {
 // tela inicial 
 system("cls");    
 cout << "** RAIO LINEAR **" << endl;
 cout << endl << endl; 
 cout << "1 - Ler tempo(segundos)......\n";
 cout << "2 - Calcular distancia(mts)..\n";      
 cout << "3 - Exibir dados/resultados..\n";
 cout << "4/ESC - Sair \n";
 cout << endl << endl; 
 cout << "Item> "; 
 // cin >> op;
 tecla = getche();
 
 


 // tratamento da tela inicial / menu
 if ( tecla == '1')      { 
 system("cls");// apagar a tela
 cout << "Digite o tempo(segundos):";
 cin >> ts;        }
 
 else if ( tecla == '2')    {
      system("cls");// apagar a tela
      cout << "aguarde calculando...\n";
      Sleep(2000);
      dist = ts * vel;}
 
 else if ( tecla == '3' )     {
 // Tela de resultados 
 system("cls");    
 cout << "** Resultados/RAIO LINEAR **" << endl;
 cout << endl << endl; 
 cout << "Tempo computado  :"<< ts   << endl;
 cout << "Velocidade Som   :"<< vel  << endl;
 cout << "Distancia do Raio:"<< dist << endl; 
 cout << endl << endl; 
 getch();               }

    } while ( tecla != 27 && tecla != '4' ) ;

  
  
   
  return 0; }
