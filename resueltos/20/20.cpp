/*
    Id.Programa: 20.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.:
*/

#include <iostream>

using namespace std;

int resto(int, int);

main(){

    int x, y;

    cout << "ingrese x: ";
    cin >> x;
    cout << "ingrese y: ";
    cin >> y;

    cout << resto(x, y) << endl;

    return 0;
}

int resto(int x, int y){
    // r = x -cy; c = x / y;
    return x - x / y * y;
}
