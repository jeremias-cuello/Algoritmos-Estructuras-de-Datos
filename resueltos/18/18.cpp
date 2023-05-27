/*
    Id.Programa: 18.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Crear una funci�n que recibe dos valores enteros y retorne el M.C.D.
    Nota: Aplicar la siguiente estrategia:
    Repetir mientras el segundo par�metro sea distinto de cero
      Obtener el resto(par�metro1, par�metro2)
      Asignar al par�metro1 lo del par�metro2
      Asignar al par�metro2 lo del resto
    FinRepetir
    Asignar al nombre de la funci�n lo del par�metro1
*/

#include <iostream>

using namespace std;

int mcd(int, int);void ObtDatos(int*, int*);

main(){
    int a, b;

    ObtDatos(&a, &b);
    int _mcd = mcd(a, b);
    cout << a << " / " << b << " = " << a / _mcd << " / " << b / _mcd << endl;

    return 0;
}

int mcd(int x, int y){
    int resto;
    while(y != 0){
        resto = x % y;
        x = y;
        y = resto;
    }
    return x;
}

void ObtDatos(int *a, int *b){
    cout << ".:MCD - Reducir fracciones:." << endl;
    cout << "Ingrese a: ";
    cin >> *a;
    do{
        cout << "Ingrese b: ";
        cin >> *b;
    } while(!*b);
}
