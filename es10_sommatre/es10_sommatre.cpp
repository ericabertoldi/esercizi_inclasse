/*  Dato in ingresso un array di interi, stampare a video tutte le combinazioni di 3 interi nell'array
la cui somma è zero. Le linee in output possono essere stampate in qualsiasi ordine. Non stampare la stessa
linea più volte.  */

#include <iostream>
using namespace std;
int main()
{
   int N;
   int *num = new int [N];
   cout<<"insert length"<<endl;
   cin>>N;
   cout<<"INPUT:"<<endl;
   for (int i=0; i<N; i++) {
       cin>>num[i];
   }

   for (int i=0; i<N; i++) {
       int n1= num[i];
       for (int j= i+1; j<N; j++) {
           int n2= num [j];
           for (int y=j+1; y<N; y++) {
               int n3= num [y];
               if ((n1 + n2 + n3) ==0) {
                   cout<<n1<<" "<<n2<<" "<<n3<<endl;
               }
           }
       }
   }
   delete[] num;
}