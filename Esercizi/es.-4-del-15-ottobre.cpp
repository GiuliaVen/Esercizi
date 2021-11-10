#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Inserisci un Numero,"<<endl;
    cout<<"Per verificare se è divisibile per 3 o per 7"<<endl;
    cin>>N;
    if (N%3==0 or N%7==0){
        cout<<"E' divisibile per uno di questi numeri";
    }else{
        cout<<"Non è divisibile per 3 o per 7";
    }
}