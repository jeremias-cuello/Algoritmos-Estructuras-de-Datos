/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Encontrar otra solución al punto
    anterior para optimizar el tiempo de proceso
*/

#include <iostream>

using namespace std;

void ObtDatos(float *);

main(){
    float n, res;

    ObtDatos(&n);

    // suma de Gauss
    res = (n + 1) * (n / 2);

    cout << "Sumatoria de 1 a n: " << res << endl;

    return 0;
}

void ObtDatos(float *n){
    do{
        cout << "Ingrese n: ";
        cin >> *n;
    } while(!(*n > 0));
}

