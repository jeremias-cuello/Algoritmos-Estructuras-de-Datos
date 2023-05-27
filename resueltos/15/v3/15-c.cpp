/*
    Id.Programa: 15-a.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Desarrollar un algoritmo para:
        a) Obtener y emitir los tres primeros números perfectos.
        b) Ídem anterior, pero aplicando el siguiente método:
            1 + 2 = 3; 3 * 2 = 6
            3 + 4 = 7; 7 * 4 = 28.
            7 + 8 = 15; 15 * 8 = 120, verificar(120) = falso
            15 + 16 = 31; 31 * 16 = 496
        c) Ídem anterior, pero aplicando el siguiente método:
            2^(n – 1) * (2^n – 1))
        Probar con n = 2, 3, 4, y 5

        Un número perfecto es un número entero positivo que es igual a la suma de sus divisores propios positivos.
*/

#include <iostream>

using namespace std;

int metodo(int);
bool verificar(int);

main() {

    int n = 1;
    int con = 0;
    int res;

    while(con < 6){
        res = metodo(n);
        if(verificar(res)){
            cout << res << " ES UN NUMERO PERFECTO." << endl;
            con++;
        }
        n++;
    }

    return 0;
}

int metodo(int n) {
    return pow(2, n - 1) * (pow(2, n) - 1);
}

bool verificar(int n){
    int _sum;

    _sum = 0;
    for(int i = 1; i < n; i++)
        if(!(n % i))
            _sum += i;

    return (_sum == n);
}
