/*
    Id.Programa: 16.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Realizar una prueba de escritorio para
    seguir las acciones del siguiente algoritmo e indicar
    que emite, luego modularizar el bloque 1, 2 y 3:

    [img]
*/

#include <iostream>

using namespace std;

void inic(bool*, bool*);
void emitir(bool, bool);
void pregunta(bool*, bool*);

main(){

    bool a,
         b;

    inic(&a, &b);
    while(a){
        emitir(a, b);
        pregunta(&a, &b);
    }

    return 0;
}

void inic(bool *var1, bool *var2){
    *var1 = *var2 = true;
}

void emitir(bool a, bool b) {
    cout << "a = " << a << "; b = " << b << "; a ^ b = " << (a && b) << endl;
}

void pregunta(bool *a, bool *b) {
    if(!(*b)) *a = !*a;
    else *b = !*b;
}
