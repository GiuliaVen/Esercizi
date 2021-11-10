#include <iostream>
using namespace std;
int main(){
   int N, A, B;
   cout<<"Inserisci il numero divisore\n";
   cin>>N;
    cout<<"Inserisci il primo dividendo\n";
    cin>>A;
    cout<<"inserisci secondo dividendo\n";
    cin>>B;
    
    if (A%N==0 and B%N==0){
        cout<<"N è divisore sia di A che di B";
        
       }else if (A%N !=0 and B%N ==0){
        cout<<"N è divisibile per A ma non per B";
    
    }else if(B%N!=0 and A%N==0){
        cout<<"N è divisibile per B ma non per A";
    
             }else{
             cout<<"N non è divisore ne di A che di B";
}
}

