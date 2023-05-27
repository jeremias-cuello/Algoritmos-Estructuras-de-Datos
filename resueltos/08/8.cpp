/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Ingresar un valor n, luego
    calcular la sumatoria de los números naturales
    hasta n incluido y emitir su resultado.
*/

#include <iostream>

using namespace std;

void ObtDatos(unsigned int *);

main(){
    unsigned int
        n,
        sum = 0;

    ObtDatos(&n);

    for(int i = 1; i <= n; i++)
        sum += i;

    cout << "Sumtoria de 1 a n: " << sum << endl;

    return 0;
}

void ObtDatos(unsigned int *n){
    do{
        cout << "Ingrese n: ";
        cin >> *n;
    } while(!(*n > 0));
}
