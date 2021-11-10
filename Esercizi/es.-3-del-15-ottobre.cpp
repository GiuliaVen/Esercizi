#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"inserisci Numero,"<<endl;
    cout<<"per verificare se è divisibile sia per 3 che per 5"<<endl;
    cin>>N;
    if (N%3==0 and N%5==0){
        cout<<"Il numero è divisibile sia per 3 che per 5";
    }else{
        cout<<"il numero non è divisibile per entrambi";
    }

    return 0;
}