/*
    Id.Programa: 23.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dado un valor entero n, y a continuación n ternas de valores enteros
    sin orden, se deberán emitir cada una de esas ternas en forma ordenada decreciente
    en las mismas variables. Por fin de proceso, se debe emitir el menor y el mayor
    valor de todas las ternas ingresadas.
*/

#include <iostream>

using namespace std;

const short MAX = 32767;
const short MIN= -MAX - 1;

void obtCant(short*);
void obtTerna(short*, short*, short*);
void ordTerObtMaxMin(short*, short*, short*, short*, short*);
void intercambiar(short*, short*);
void emitirTerna(short, short, short);
void emiteIni(short*, short*);
void emiteMaxMin(short, short);

main(){

    short n,
        x,
        y,
        z,
        mini,
        maxi;

    emiteIni(&mini, &maxi);
    obtCant(&n);

    for(short i = 1; i<= n; i++) {
        obtTerna(&x, &y, &z);
        ordTerObtMaxMin(&x, &y, &z, &mini, &maxi);
        emitirTerna(x, y, z);
    }

    emiteMaxMin(mini, maxi);

    return 0;
}

void obtCant(short *n) {
    do {
        cout << "Ingrese n: ";
        cin >> *n;
    } while(!(*n > 0));
}

void obtTerna(short *x, short *y, short *z) {
    static i = 1;
    cout << "[" << i++ << "]" << " Ingrese terna:" << endl;
    cout << "x: ";
    cin >> *x;
    cout << "y: ";
    cin >> *y;
    cout << "z: ";
    cin >> *z;
}

void ordTerObtMaxMin(short *x, short *y, short *z, short *maxi, short *mini) {
    if(*y > *x) intercambiar(y, x);
    if(*z > *x) intercambiar(z, x);
    if(*z > *y) intercambiar(z, y);
    if(*z < *maxi) *maxi = *z;
    if(*x > *mini) *mini = *x;
}

void intercambiar(short *num1, short *num2) {
    short aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void emitirTerna(short x, short y, short z) {
    cout << "terna = (" << x << ";" << y << ";" << z << ")" << endl;
}

void emiteIni(short *minimo, short *maximo) {
    cout << "Ordenar ternas e informar el minimo y maximo de los componentes de las ternas" << endl;
    *minimo = MAX;
    *maximo = MIN;
}

void emiteMaxMin(short maximo, short minimo) {
    cout << endl << "------------------ INFORME ------------------" << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
}
