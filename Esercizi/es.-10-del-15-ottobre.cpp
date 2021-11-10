#include <iostream>
using namespace std;
int main(){
    int N1, N2;
    cout<<"Inserisci un primo numero\n";
    cin>>N1;
    cout<<"Inserisci un secondo numero\n";
    cin>>N2;
    
    if ((N1+N2)%2==0){
        cout<<"La somma dei due numeri è pari";
    }else{
        cout<<"La somma dei due numeri è dispari";
    }
}