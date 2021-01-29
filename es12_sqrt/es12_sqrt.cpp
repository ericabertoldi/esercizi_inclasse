/* Dato in ingresso da riga di comando un numero intero positivo, stampare in uscita la sua
radice quadrata, come numero intero troncato. La difficoltà sta nel non utilizzare le funzioni
della libreria standard sqrt o pow, o altre libreria per il calcolo della radice quadrata, ma
scrivere un algoritmo per il suo calcolo. Se la radice quadrata non è un numero intero, allora
deve essere troncata all'intero inferiore.Ad esempio, la radice di 7 è circa 2.65, quindi il
programma dovrebbe stampare 2.  */

#include <iostream>
using namespace std;

int radice(int n)
{
    int radice;
    if (n == 0) {
        radice = 0;
    }
    if (n == 1) {
        radice = 1;
    } else
        for (int i = 1; i <= n; i++) {
            if (i * i > n) {
                radice = i - 1;
                break;
            }
        }
    return radice;
}

int main()
{
    int x;
    cout << "inserire numero" << endl;
    cin >> x;
    cout << "radice (intera approx per difetto) " << radice(x) << endl;
}