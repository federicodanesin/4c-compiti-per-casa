


#include <iostream>
using namespace std;

void carica_vettore(int v[]);

void somma (int v[]);

int s=0;
int i;
int v[10];

int main (){

int v[10];

carica_vettore(v);


somma(v);


 cout<<"somma componenti maggiori di 5 :"<<s;



return 0;}



void carica_vettore(int v[]){

cout<<"inserire 10 valori interi ";

for (i=0;i<10;i=i+1) {


      cin>>v[i];


} }


void somma (int v[]){



for (i=0;i<10;i=i+1) {

    if (v[i]>5) {
      s=s+v[i];

    }





}






}


//es 52







