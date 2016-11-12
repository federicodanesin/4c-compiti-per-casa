5
#include <iostream>
#include <string>
using namespace std;


const int MAX= 100;

void carica_vettore (string v[],int d);
void carica_prodotti (float u[], int d);

void incremento (string v[],float u[], int d);
int dimensione (void);


int d;
int i;
float p;
float c;

string v[MAX];
float u [MAX];

int main () {

int t;

t= dimensione();

carica_vettore (v,t);

carica_prodotti (u,t);

incremento (v,u,d);
return 0;
}

int dimensione() {

   do {
cout<<"quanti prodotti ci sono bro ?";

cin>>d;}

while (d<1 || d>100);

return d;


}

void carica_vettore (string v[], int d)

{
cout<<endl<<"inserire i prodotti";

for (i=0; i<d; i=i+1) {

        cin>>v[i];

        }





}


void carica_prodotti (float u[], int d) {


for (i=0; i<d; i=i+1)

{
    cout<<"INSERIRE IL PREZZO DEL PRODOTTO"<<endl<<endl;
    cout<<endl<<endl<<v[i]<<"=";
    cin>>u [i];






} }



void incremento (string v[],float u[], int d)
{

   for (i=0; i<d; i=i+1) {
       cout<<endl<<"inserire incremento, prodotto(%) :  "<<v[i]<<" =";
       cin>>p;
       c=u[i]+((p/100)*u[i]);
       cout<<"prezzo finale ="<<c<<endl;


    }





}



