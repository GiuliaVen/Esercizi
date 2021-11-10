#include <iostream>
using namespace std;
int main()
{
    int N, A;
    cout<<"inserisci Numero"<<endl;
    cin>>N;
    cout<<"insersisci valore ad A"<<endl;
    cin>>A;
    if (N%A==0){
        cout<<"Il numero è divisibile per A";
    }else{
        cout<<"il numero non è divisibile per A";
    }

    return 0;
}