/*
    Id.Programa: 17.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Crear una función que recibe tres parámetros,
    el primero es un valor booleano, y los otros 2, valores
    enteros. La función deberá retornar el primer valor entero,
    si el valor booleano es verdadero, caso contrario se retorna
    el segundo valor entero.
*/

int iif(bool, int, int);

#include <iostream>

using namespace std;

main(){

    int num1;
    int num2;
    bool valor;

    cout << "Ingrese numero: ";
    cin >> num1;
    cout << "Ingrese numero: ";
    cin >> num2;
    cout << "valor booleano: ";
    cin >> valor;

    cout << iif(valor, num1, num2) << endl;

    return 0;
}

int iif(bool valor, int num1, int num2){
    if(valor) return num1;
    else return num2;
}
