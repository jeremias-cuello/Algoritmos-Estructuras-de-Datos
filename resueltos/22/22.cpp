/*
    Id.Programa: 22.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: En un curso se toman exámenes a los alumnos
    por medio de una computadora. Las preguntas que se
    realizan son: Calcular el perímetro de un triángulo y
    su tipo (Isósceles, Escaleno, Equilátero), sabiendo
    como datos las medidas de sus lados.
    Se solicita que se informe por cada alumno su nombre y
    un mensaje apropiado si respondió bien o mal -se
    responde bien si contestó correctamente ambas preguntas-.
    Al finalizar el proceso se deberá emitir cantidad de
    respuestas correctas e incorrectas. Indique ud. el
    valor centinela. Se generará al azar las medidas de los
    lados y:
        a. Se asume que forman triángulo.
        b. Validar que formen triángulo. (Si (a< b+c) ^ (b<a+c) ^ (c<a+b))
*/
#include <iostream>
#include <iomanip>
#include <string.h>
#define CENTINELA "*"
const short MAX = 100; // MAX < MIN
const short MIN = 1; // MIN > 0

typedef char str20[21];
typedef unsigned short ushort;

using namespace std;


void tituloIni(int*, int*);
void generarLados(int*, int*, int*);
void obtDato(str20*);
void obtRes(int *per, char *tipo, int l1, int l2, int l3);
void calPerTipo(int*, char*, int, int, int);
void verificarEmitir(int, char, int, int, int*, int*, str20);
void emitirRes(int, int);

main(){

    int a,
        b,
        c,
        per,
        perMaq,
        resOk,
        resIn;
    char tipo,
         tipoMaq;
    str20 nombre;

    tituloIni(&resOk, &resIn);
    obtDato(&nombre);
    while(strcmp(nombre, CENTINELA)){
        generarLados(&a, &b, &c);
        obtRes(&per, &tipo, a, b, c);
        calPerTipo(&perMaq, &tipoMaq, a, b, c);
        verificarEmitir(per, tipo, perMaq, tipoMaq, &resOk, &resIn, nombre);
        obtDato(&nombre);
    }
    emitirRes(resOk, resIn);

    return 0;
}

void tituloIni(int *resOk, int *resIn) {
    cout << setw(21) << cout.fill('-') << " EXAMEN DE MATEMATICA " << setw(21) << cout.fill('-') << endl;
    cout << "Debe responder el perimetro y tipo de trinagulo dado los lados." << endl;
    cout << setw(63) << cout.fill('-') << endl;
    randomize(); // para que los valores de los lados sean diferentes por cada compilacion
    *resOk, *resIn = 0;
}

void generarLados(int *l1, int *l2, int *l3) {
    ushort mini,
           maxi;

    *l1 = random(MAX - MIN + 1) + MIN;
    *l2 = random(MAX - MIN + 1) + MIN;
    mini = abs(*l1 - *l2) <= MIN ? MIN : abs(*l1 - *l2) + 1;
    maxi = *l1 + *l2 >= MAX ? MAX : *l1 + *l2 - 1;
    *l3 = random(maxi - mini + 1) + mini;
}

void obtDato(str20 *nombre) {
    cout << "INGRESE NOMBRE (" << CENTINELA << ": FIN): ";
    cin >> *nombre;
    cout << setw(63) << cout.fill('-') << endl;
}

void obtRes(int *per, char *tipo, int l1, int l2, int l3) {
    char opciones[4] = "QEI";

    cout << "Lados: " << endl;
    cout << "Lado 1 = " << l1 << endl;
    cout << "Lado 2 = " << l2 << endl;
    cout << "Lado 3 = " << l3 << endl;
    cout << setw(63) << cout.fill('-') << endl;
    cout << "Perimetro: ";
    cin >> *per;
    cout << setw(63) << cout.fill('-') << endl;
    do {
        cout << "Tipo (E: Escaleno | Q: eQuilatero | I: Isosceles): ";
        cin >> *tipo;
        *tipo = toupper(*tipo);
    } while(!strspn(tipo, opciones));
     cout << setw(63) << cout.fill('-') << endl;
}

void calPerTipo(int *per, char *tipo, int a, int b, int c) {
    *per = a + b + c;
    if(a == b && b == c) *tipo = 'Q';
    else if (a == b || a == c || b == c) *tipo = 'I';
    else *tipo = 'E';
}

void verificarEmitir(int per, char tipo, int perMaq, int tipoMaq, int *resOk, int *resIn, str20 nombre) {
    if(per == perMaq && (tipo == tipoMaq)){
        cout << nombre << " OK." << endl;
        (*resOk)++;
    }
    else {
        cout << nombre << " Estudie +++" << endl;
        (*resIn)++;
    }
    cout << setw(63) << cout.fill('-') << endl << endl;
    cout << setw(63) << cout.fill('-') << endl;
}

void emitirRes(int resOk, int resIn) {
    cout << setw((63 - 9)/2) << cout.fill('-') << " INFORME " << setw((63 - 9)/2) << cout.fill('-') << endl;
    cout << "Cantidad de respuestas correctas..: " << resOk << endl;
    cout << "Cantidad de respuestas incorrectas: " << resIn << endl;
}
