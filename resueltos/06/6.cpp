/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dado un valor n, entero positivo
    incluido el cero, hallar el factorial de n.
*/

#include <iostream>

using namespace std;

void ObtDatos(unsigned int *);

main(){
    unsigned int n;
    unsigned int sum = 1;

    ObtDatos(&n);

    for(int i = 1; i <= n; i++)
        sum *= i;

    cout << n << "! = " << sum << endl;

    return 0;
}

void ObtDatos(unsigned int *n){
    do{
        cout << "Ingerse n: ";
        cin >> *n;
    } while(!(*n >= 0));
}
