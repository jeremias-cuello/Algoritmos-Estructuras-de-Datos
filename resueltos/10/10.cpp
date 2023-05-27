/*
    Id.Programa: 10.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dado un valor n, entero positivo incluido
    el cero, obtener cada uno de los términos de la sucesión
    de Fibonacci.
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
    } while(!(*n >= 0));
}

void imprimirFibonacci(int n){
    int
        antUlt = 0,
        ult = 1,
        sum;

    if (!n) cout << antUlt;
    else cout << antUlt << " " << ult << " ";

    for(int i = 2; i <= n-1; i++){
        sum = antUlt + ult;
        antUlt = ult;
        ult = sum;
        cout << sum << " ";
    }
}
