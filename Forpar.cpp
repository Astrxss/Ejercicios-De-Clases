#include<iostream>
using namespace std;

int main(void){

    int n = 0, i;

    cout << "Ingrese un numero para ver los numeros pares anteriores a este:";
    cin >> n;
    for (i = 2; i < n; i= i+2){

        cout << i << endl;
    }
    return 0;
}