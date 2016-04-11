#include <iostream>

using namespace std;


void media (float n1, float n2);


int main () {
    float n1, n2;
    system ("cls");
    
    cout << "Digite N1:";
    cin >> n1;
    cout << "Digite N2:";
    cin >> n2;
    
    media (n1, n2);
    
    system ("pause");
    return 0;
}


void media (float n1, float n2) {
     float media = (n1 + n2) / 2;
     cout << "A media e: " << media << endl;
}
