#include <iostream>
#include <string>

using namespace std;

void ripeti_stringa(string x);

string acquisita;


int main()
{
cout<<"inserisci la stringa more :";

cin>>acquisita;

ripeti_stringa(acquisita);

return 0;
}

void ripeti_stringa(string x)
 {
     int i=1;
     while (i<4) {

           cout<<i<<") "<<x<<endl;
         i=i+1;  }

}
