

#include <string>
#include <iostream>
using namespace std;

void somma_acquisizione_dati (void);

void media (void);



int i =0;
float somma=0;
int main () {

somma_acquisizione_dati();



media  ();

return 0;}




void somma_acquisizione_dati () {

char t;
float cash;
string x;



do { cout<<endl<<" inserisci reparto :";
     cin>>x;
     cout<<endl<<"inserisci cash :";
     cin>>cash;
     i=i+1;
     somma=somma+cash;
     cout<<endl<<"ci sono ancora reparti ?";
     cin>>t;
}

while (t=='s');


}

void media  () {


float m;

m=somma/i;


cout<<endl<<"la media dell' incasso è :"<<m;










}












