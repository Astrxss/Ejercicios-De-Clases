#include <iostream>
using namespace std;
int main(){


    char letra =' ';
    do{

        cout << "Este es el menu del dia de hoy:";
        cout << "Pierna de pollo\n" << "Carne de vaca\n" << "Sopa de pollo\n" << "Costilla de cerdo\n" << "Pierna de pavo\n" << endl;
        cout << "Presione x Para Salir\n" ;
        cin >> letra;
    
    } 
    while (letra != 'x')
    
    return 0;
}