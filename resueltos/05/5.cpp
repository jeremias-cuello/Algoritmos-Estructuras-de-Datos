/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dados dos valores a y b, enteros positivos
    incluido el cero, hallar la potencia de a^b.
    Sí a = 0 entonces b > 0, sí b = 0 entonces a > 0.
*/

#include <iostream>

using namespace std;

void ObtDatos(int*, int*);

main(){
    int a,
        b,
        pot = 1;

    ObtDatos(&a, &b);

    if(a == 0 && b != 0) +b;
    if(b == 0 && a != 0) +a;

    for(int i = 1; i <= b; i++)
        pot *= a;

    cout << "a^b = " << pot << endl;

    return 0;
}

void ObtDatos(int *a, int *b){
    cout << ".:HALLAR LA POTENCIA A^B:." << endl;
    do{
        cout << "Ingrese a: ";
        cin >> *a;
        cout << "Ingrese b: ";
        cin >> *b;
    } while(!(*a >= 0 || *b >= 0));
}
