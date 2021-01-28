/*  Dati in ingresso due numeri interi, stampare a video il loro massimo comun denominatore ed
il loro minimo comune multiplo. Ad esempio, dati i numeri 4 e 6, il loro MCD è 2, ed il loro
MCM è 12.  */

#include <iostream>
using namespace std;

int MCD(int x, int y)
{
    int min;
    int mcd=1;
    if (x < y) {
        min = x;
    } else min = y;
    
    for (int i = min ; i > 0; --i) {
        if ((x % i) == 0 && (y % i) == 0) {
            mcd = i;
        }
    }
    return mcd;
}

int main()
{
    int a, b;
    cout << "inserire numeri" << endl;
    cin >> a, b;
    cout << "MCD " << MCD(a, b) << endl;
}