

#include <iostream>
using namespace std;

void punto (float x, float y, float q, float xp, float yp);
float a,b,q,d,e,z;

int main () {

cout<<"inserire coeficiente angolare :";
cin>>a;
cout<<endl<<"inserire il coeficiente della y :";
cin>>b;
cout<<endl<<"inserire termine noto q :";
cin>>q;


cout<<endl<<"inserire ascissa del punto xp:";
cin>>d;

cout<<endl<<"inserire ascissa del punto yp:";
cin>>e;

 punto (a,b,q,d,e);

return 0 ;
}

void punto (float x, float y, float q, float xp, float yp) {

 z=(x*xp)+q-(y*yp);

    if(z==0)
      { cout<<endl<<"il punto appartiene alla retta "<<endl;

      }
     else
     {
         cout<<endl<<"il punto non appartiene alla retta"<<endl;
     }


  }
















