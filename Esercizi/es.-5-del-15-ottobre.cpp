#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Inserisci un Numero,\n"<<"Per verificare se è divisibile per 3 e per 5\n";
    cin>>N;
    if (N%3==0 and N%5==0){
        cout<<"E' divisibile sia per 3 che per 5";
    }
    else if (N % 3 != 0 && N % 5 == 0 ){
        cout<< "Il tuo numero è divisibile per 5 ma non per 3";
    }
    else{
        cout<<"E' divisibile per 3 ma non per 5";
    }
}
