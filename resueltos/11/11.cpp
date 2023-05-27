/*
    Id.Programa: 11.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dado un valor n, entero positivo, obtener la
    sumatoria de la sucesión de Fibonacci hasta encontrar un valor mayor a n.
*/

#include <iostream>

using namespace std;

void ObtDatos(int *n);
void imprimirFibonacci(int n);

main(){

    int n;

    ObtDatos(&n);
    imprimirFibonacci(n);

    return 0;
}

void ObtDatos(int *n){
    do{
        cout << "Ingrese n: ";
        cin >> *n;
    } while(!(*n > 0));
}

void imprimirFibonacci(int n){
    int
        antUlt = 0,
        ult = 1,
        sum = 0;

    if (!n) cout << antUlt;
    else cout << antUlt << " " << ult << " ";

    while(sum < n){
        sum = antUlt + ult;
        antUlt = ult;
        ult = sum;
        cout << sum << " ";
    }
}

