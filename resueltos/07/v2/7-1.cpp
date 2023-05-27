/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Hallar el número irracional e, ingresando
    previamente un valor n, que indica la cantidad de términos
    a calcular, con n >= 0.
*/

#include <iostream>

using namespace std;

void ObtDatos(float*);

main(){
    float n,
        sum = 1,
        mul = 1;

    ObtDatos(&n);

    for(int i = 1; i <= n; i++){
        mul *= i;
        sum += (1.0 / mul);
    }
    cout << "con " << n + 1 << " terminos " << endl << "e ~= " << sum << endl;

    return 0;
}

void ObtDatos(float *n){
    do{
        cout << "Ingrese n: ";
        cin >> *n;
    } while(!(*n > 0));
}
