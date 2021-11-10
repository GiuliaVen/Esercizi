#include <iostream>
using namespace std;
int main()
{
 int LimiteATM=6000, LimitePrelievo=250, PIN=13246, prelievo, versamento;
 cout<<"Benvenuto/a!"<<endl;
 cout<<"inserisci il PIN per effettuare un prelievo"<<endl;
 cin>>PIN;
 
 if (PIN!=13246){
 cout<<"PIN errato"<<endl;
 cout<<"Assicurati di aver inserito il PIN correttamente";
 }
 
 if(PIN==13246){
     cout<<"Accesso eseguito correttamente"<<endl;
     
     cout<<"Il tuo conto è di 6000€"<<endl;
     cout<<"Inserire il valore del prelievo"<<endl;
     cin>>prelievo;
     
     if (prelievo>250){
     cout<<"Valore massimo del prelievo superato"<<endl;
     cout<<"Prelievo negato"<<endl;
     }else{
     cout<<"Prelievo effettuato"<<endl;
     cout<<"Adesso il tuo conto è di:"<<LimiteATM-prelievo<<endl;
     }
     
     cout<<"vuoi effettuare un versamento?"<<endl;
     cout<<"Se Sì prema 1 se è No prema 3"<<endl;
     cin>>versamento;
     
     if (versamento==1){
         cout<<"Quanto desideri versare?"<<endl;
         cin>>versamento;
         cout<<"Adesso il tuo conto è di:"<<(LimiteATM-prelievo)+versamento;
     }else{
         cout<<"Non desideri effettuare un versamento"<<endl;
 }
 cout<<"Buona Giornata!";
 }
 return 0;
}


