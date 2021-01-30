/*  Dato in ingresso da riga di comando un intero positivo i, stampare in uscita l'i-esimo valore
della sequenza di Fibonacci. Nella sequenza di Fibonacci i primi due elementi sono uguali
ad 1, mentre ogni elemento successivo è dato dalla somma dei due elementi che lo
precedono, ovvero:
1, 1, 2, 3, 5, 8, 13,...  */

#include <iostream>
using namespace std;

int fibonacci(int y)
{
    int fib = 1;
    if ((y == 0) || (y == 1)) {
        return 1;
    } else {
        fib = (y - 1) + (y - 2);
        return fib;
    }
}

int main()
{
    int i = 0;
    cout << "inserire numero >0" << endl;
    cin >> i;
    while (i <= 0) {
        cout << "inserire numero >0 !!" << endl;
        cin >> i;
    }
    cout << i << " valore nella sequenza di fibonacci" << fibonacci(i - 1) << endl;

    return 0;
}