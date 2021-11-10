#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int base, esponente, potenza;
    cout<<"inserisci un numero;\n per calcolarne potenza\n";
    cin>>base;
    cout<<"inserisci l'esponente\n";
    cin>>esponente;
    potenza=pow(base,esponente);
    cout<<potenza;

    return 0;
}
