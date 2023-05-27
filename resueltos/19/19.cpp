/*
    Id.Programa: 19.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Crear la función sgn(x). A diferencia de la
      función matemática, sí x = 0, deberá retornar cero.
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
