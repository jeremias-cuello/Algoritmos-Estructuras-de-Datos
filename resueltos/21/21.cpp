/*
    Id.Programa: 19.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Crear una función que recibe como parámetros dos
    valores enteros y retorne verdadero si el primero es divisible
    por el segundo; caso contrario, retornar falso.
*/

#include <iostream>
#include <math.h>

using namespace std;

bool esDivis(int, int);
string toString(bool);

main(){
    int a, b;

    cout << "ingrese a: ";
    cin >> a;
    cout << "ingrese b: ";
    cin >> b;

    cout << a << " | " << b << " : " << toString(esDivis(a, b)) << endl;

    return 0;
}

bool esDivis(int x, int y){
    return !(x % y);
}

string toString(bool e){
    return e ? "true" : "false";
}
