

#include <iostream>
using namespace std;


struct retta {

float x;
float y;
float q;
};
 retta R;

struct punto {
float xp;
float yp;
};
punto P;

bool all( retta R,punto P);
float z;




int main () {

cout<<"inserire coeficiente angolare :";
cin>>R.x;
cout<<endl<<"inserire il coeficiente della y :";
cin>>R.y;
cout<<endl<<"inserire termine noto q :";
cin>>R.q;


cout<<endl<<"inserire ascissa del punto xp:";
cin>>P.xp;

cout<<endl<<"inserire ascissa del punto yp:";
cin>>P.yp;

  if(all ( R,P) )

      cout<<endl<<"il punto appartiene alla retta "<<endl;
   else

      cout<<endl<<"il punto non appartiene alla retta"<<endl;







return 0 ;
}

bool all (retta R,punto P) {

return  z==(R.x*P.xp)+R.q-(R.y*P.yp);  }
















