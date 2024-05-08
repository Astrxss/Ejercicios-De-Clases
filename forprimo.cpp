#include <iostream>
using namespace std;
int main(){

    int n = 0, i, modulo, primo = 1;

    cout << "Introduzca un numero y se le dira si es Primo o no:";
    cin >> n;

    for (i = n-1; i >= 2; i--)
    {
        if(n%i==0){
            cout << "No es primo";
            primo = 0;
            break;
        }



    }
    if(primo == 1)
    cout << "Es primo"; 


    return 0;
    

}