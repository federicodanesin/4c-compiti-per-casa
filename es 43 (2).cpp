

#include <iostream>
#include <string>
using namespace std;

void elezioni(float x, float y, string k, string l);

float c,d;
int h,g;

string a,b;
int main (){

cout<<"inserire candidato A";

cin>>a;

cout<<"inserire i suoi voti";

cin>>c;

cout<<endl<<"inserire candidato B";

cin>>b;

cout<<"inserire i suoi voti";

cin>>d;

cout<<g;

elezioni (c,d,a,b);

return 0;}


void elezioni(float x, float y, string k, string l) {



g=(x/(x+y))*100;

h=(y/(x+y))*100;

if (g>h){

    cout<<"PERCENTUALI VOTI "<<endl;

    cout<<k<<" : "<<g<<"%"<<endl;

    cout<<l<<" : "<<h<<"%";



}
else {

     if(h>g) {

            cout<<"PERCENTUALI VOTI "<<endl;

            cout<<l<<" : "<<h<<"%"<<endl;

            cout<<k<<" : "<<g<<"%"; }


else  {if (g==h) {cout<<"PERCENTUALI VOTI "<<endl;

          cout<<l<<"e"<<k<<"hanno totalizzato 50% dei voti ognugno";}
}



}








}
