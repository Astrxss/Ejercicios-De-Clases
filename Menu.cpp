#include <iostream>
using namespace std;

int main(){

    char letra =' ';
    while (letra != 'x'){

        cout << "Este es el menu del dia de hoy:";
        cout << "Pierna de pollo\n" << "Carne de vaca\n" << "Sopa de pollo\n" << "Costilla de cerdo\n" << "Pierna de pavo\n" << endl;
        cout << "Presione x Para Salir\n" ;
        cin >> letra;
    
    } 
    return 0;
}