/*  Dati in ingresso da riga di comando: i) un valore intero x, e ii) una lista di valori interi a.
Verificare se il valore x è contenuto nella lista a. In caso affermativo stampare true. Altrimenti
stampare false.  */
#include <iostream>
using namespace std;

int main() {
    int N, x;
    int *ar = new int [N];
    cout<<"inserire lista di valori"<<endl;

    for (int j=0; j<N; j++) {
        cin>> ar[j];
        if (ar[j]==0) {
            break;
        }
    }
    cout<<"inserire numero da cercare"<<endl;
    cin>>x;

    for (int i=0; i<N; i++) {
        if (ar[i] == x) {
            cout<<"true";
            break;
        } else cout<<"false";
        break;
    }
    delete[] ar;
}
