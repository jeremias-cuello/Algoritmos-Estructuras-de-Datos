/*
    Id.Programa: 13.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dada una lista de valores enteros y un valor x
    también entero, determinar si el valor x está en la lista dando
    un mensaje apropiado e informar en qué posición fue encontrado;
    caso contrario informar con otro mensaje apropiado
*/

#include <iostream>

using namespace std;

void obtDatos(int*, int*);

main(){

    int n,
        x,
        pos = 0,
        num,
        posEnc = -1;

    obtDatos(&n, &x);

    while(n--){
        cout << "Ingrese numero: ";
        cin >> num;

        if(x == num) posEnc = pos;
        pos++;
    }

    if(posEnc != -1)
        cout << "x = " << x << endl << "esta en la lista" << endl << "posicion = " << posEnc << endl;
    else
        cout << "x = " << x << endl << "NO esta en la lista." << endl;

    return 0;
}

void obtDatos(int *n, int *x){
    do{
        cout << "Ingrese cantidad valores enteros: ";
        cin >> *n;
    } while(*n <= 0);

    cout << "Ingrese x: ";
    cin >> *x;
}

