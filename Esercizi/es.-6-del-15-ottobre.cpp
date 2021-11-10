#include <iostream>
using namespace std;
int main(){
    int A,B,numeri;
    cout<<"Inserisci due numeri A e B, \n"<<"per verificare se hanno la stessa parità. \n";
    cin>>A;
    cin>>B;
    
     if (A%2==0 && B%2==0){
         cout<<"Hanno la stessa parità";
     }else{
         cout<<"Hanno parità differenti";
}
}