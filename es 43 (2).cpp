

#include <iostream>
#include <string>
using namespace std;

void elezioni(int x, int y, string k, string l);

int c,d;
float h,g;

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



elezioni (c,d,a,b);

return 0;}


void elezioni(int  x, int y, string k, string l) {



g=(float)(x*100)/(x+y);

h=(float)(y*100)/(x+y);

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
