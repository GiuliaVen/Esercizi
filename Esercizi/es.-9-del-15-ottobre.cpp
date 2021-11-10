#include <iostream>
using namespace std;
int main(){
    int numeratore, denominatore;
    cout<<"inserisci il numeratore\n";
    cin>>numeratore;
    cout<<"inserisci il denominatore\n";
    cin>>denominatore;
    
     if (numeratore<denominatore){
        cout<<"La frazione è propria";
    }else if (numeratore>denominatore){
        cout<<"La frazione è impropria";
    }else if (numeratore==denominatore){
        cout<<"La frazione è apparente";
    }
}