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
float fact(float n);
// e ~= 2.7182818284590452353602874713527...
main(){
    float n,
        sum = 1,
        mul = 1;

    ObtDatos(&n);

    for(int i = 1; i <= n; i++){
        mul = 1;
        for(int j = 1; j <= i; j++)
            mul *= j;
        sum += (1 / mul);
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

float fact(float n){
    return (n == 0 || n == 1) ? 1 : n * fact(n - 1);
}
