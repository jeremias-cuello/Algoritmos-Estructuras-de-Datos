/*
    Id.Programa: 19.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Crear la funci�n sgn(x). A diferencia de la
      funci�n matem�tica, s� x = 0, deber� retornar cero.
*/

#include <iostream>

using namespace std;

short sgn(float);

main(){
    int n;

    cout << "Ingrese n: ";
    cin >> n;

    cout << "signo: " << sgn(n) << endl;

    return 0;
}

short sgn(float x){
    if(x == 0)
        return 0;
    return fabs(x) / x;
}
