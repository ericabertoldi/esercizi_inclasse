// Dato in ingresso un array, stamparlo in ordine inverso

#include <iostream>
using namespace std;
int main()
{
    int N;
    int* num = new int[N];
    cout<<"insert length"<<endl;
    cin>>N;
    cout << "insert numbers" << endl;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << num[i];
    }

    delete[] num;
}