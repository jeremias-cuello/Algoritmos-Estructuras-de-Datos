/*
    Id.Programa: 12.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dada una lista de n, valores enteros,
    encontrar el mayor valor y su posición.
*/

#include <iostream>

using namespace std;

void obtDatos(int*);

main(){

    int n,
        may = -2147483648,
        pos = 0,
        num,
        posMay;

    obtDatos(&n);

    while(n--){
        cout << "Ingrese numero: ";
        cin >> num;

        if(may < num){
            may = num;
            posMay = pos;
        }
        pos++;
    }

    cout << "mayor = " << may << endl;
    cout << "posicion = " << posMay << endl;

    return 0;
}

void obtDatos(int *n){
    do{
        cout << "Ingrese n: ";
        cin >> *n;
    } while(*n <= 0);
}
