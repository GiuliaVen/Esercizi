#include <iostream>
using namespace std;
int main(){
    int base, esponente, potenza;
    cout<<"inserisci un numero;\n";
    cin>>base;
    cout<<"inserisci l'esponente\n";
    cin>>esponente;
    if (esponente % 2 == 0){
        cout<<"La potenza è pari";
    }
    else if(esponente % 2 == 1 and base<0){
        cout<<"la potenza è dispari";
    }
    else if (esponente % 2 == 1 and base>0){
        cout<<"La potenza è pari";
    }
    return 0;
}

