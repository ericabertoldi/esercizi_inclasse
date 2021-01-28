/*
Dati due valori interi x ed y, stampare a video una versione processata
del seguente array:
3, 9, 1, 2, 10, 8, 4, 5, 2, 3, 7, 4, 6, 5, 9, 8
nella quale si sono sostituite tutte le istanze di x con il valore y. Se ad esempio x=3 ed y=-1,
il programma dovrebbe stampare:
-1, 9, 1, 2, 10, 8, 4, 5, 2, -1, 7, 4, 6, 5, 9, 8  */

#include <iostream>
using namespace std;
int main() 
{
    int a[] = {3, 9, 1, 2, 10, 8, 4, 5, 2, 3, 7, 4, 6, 5, 9, 8};
    int x,y;
    cout<<"inserire num array da sostituire"<<endl;
    cin>>x;
    cout<<"inserire numero con cui sostituire"<<endl;
    cin>>y;

    for (int i=0; i<16; i++) {
        if (a[i] != x) {
            cout<<a[i]<<endl;
        }
        if (a[i] ==x) {
            cout<<y<<endl;
        }
    }
   

    return 0;
}