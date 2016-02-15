#include <stdio.h>
#include <stdlib.h>


float media (float p1, float p2);


int main () {
    float p1, p2, m;
    
    printf ("Digite a nota da P1: ");
    scanf ("%f", &p1);
    printf ("Digite a nota da P2: ");
    scanf ("%f", &p2);
    
    m = media (p1, p2);
    
    printf ("Media: %.2f ", m);
    if (m >= 6)
        printf ("Aprovado\n");
    else
        printf ("Reprovado\n");
    system ("pause");
    return 0;
}

float media (float p1, float p2) {
      return (p1 + p2) / 2;
}
