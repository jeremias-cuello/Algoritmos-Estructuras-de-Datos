/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dados dos valores a y b,
    enteros y distintos, se pide emitir un
    cartel apropiado que informe cual es el
    mayor entre ellos.
*/

#include <iostream>

using namespace std;

main(){
    int a,
        b;

    cout << ".:HALLAR EL MAYOR:." << endl;
    do{
        cout << "Ingrese a: ";
        cin >> a;
        cout << "Ingrese b: ";
        cin >> b;
    } while(a == b);

    if(a > b)
        cout << "a > b";
    else
        cout << "b > a";

    return 0;
}
