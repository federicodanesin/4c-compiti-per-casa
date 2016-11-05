
#include <iostream>
using namespace std;

float prezzo_scontato (float x, float y);

int main () {
  float a,b,p;

  cout<<"inserire prezzo:";
  cin>>a;
cout<<"inserire sconto %:";
  cin>>b;


prezzo_scontato (a,b);


return 0;


}



float prezzo_scontato (float x, float y)
{
    float p;


    p=x-((y/100)*x);

    cout<<"prezzo scontato :"<<p<<endl;

    return p ;



}
