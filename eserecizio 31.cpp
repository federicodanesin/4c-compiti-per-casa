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
     int i=0;
     while (i<3) {

           cout<<x<<endl;
           i=i+1;  }

}
