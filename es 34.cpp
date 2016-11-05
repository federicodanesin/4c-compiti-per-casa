

#include <iostream>
//cccccccccc

using namespace std;

void sequenza_5 (unsigned int &x) ;

unsigned int a;

int main () {

do {
cout<<"inserire numero intero positivo :"<<endl;

cin>>a;
}
while (a<0);

sequenza_5 (a);




return 0;

}

void sequenza_5 (unsigned int &x)
{
    int i=0;

cout<<"sequenza:"<<endl;

    while (i<5) {

         x=x+1;

        cout<<x<<endl;

        i=i+1;

    }




}


