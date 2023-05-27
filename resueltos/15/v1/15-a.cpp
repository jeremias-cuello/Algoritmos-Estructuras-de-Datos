/*
    Id.Programa: 15-a.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Desarrollar un algoritmo para:
        a) Obtener y emitir los tres primeros números perfectos.
        b) Ídem anterior, pero aplicando el siguiente método:
            1 + 2 = 3; 3 * 2 = 6
            3 + 4 = 7; 7 * 4 = 28.
            7 + 8 = 15
            15 + 16 = 31; 31 * 16 = 496
        c) Ídem anterior, pero aplicando el siguiente método:
            2n – 1 * (2n – 1)
        Probar con n = 2, 3, 4, y 5

        Un número perfecto es un número entero positivo que es igual a la suma de sus divisores propios positivos.
*/

#include <iostream>

using namespace std;

main(){

    int sum = 0;
    int con = 0;
    int n = 2;
    char j;

    while(con < 3){
        for(int i = 1; i < n; i++)
            if(!(n % i))
                sum += i;

        if(sum == n) {
            cout << n << " ES PERFECTO." << endl;
            con++;
        }

        sum = 0;
        n++;
    }

    return 0;
}
