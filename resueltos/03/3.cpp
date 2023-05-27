/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dados los catetos de un triángulo
    rectángulo, hallar la superficie de un cuadrado,
    siendo uno de sus lados la medida de su hipotenusa,
    si ella es mayor a 100; caso contrario, es el doble
    de su hipotenusa.
    1. Obtener catetos
    2. Calcular Hipotenusa
    3. Determinar si la hipotenusa es mayor a 100
        Caso verdadero: lado de cuadrado igual hipotenusa
        Caso Falso: lado de cuadrado doble de hipotenusa
    4. Calcular superficie del cuadrado
    5. Mostrar superficie
*/

#include <iostream>

using namespace std;

void ObtDatos(float*, float*);
float CalHyp(float, float);
float CalSupCuad(float);
void MostrarSup(float);

main(){

    float cat_1,
        cat_2,
        hyp,
        sup;

    ObtDatos(&cat_1, &cat_2);
    hyp = CalHyp(cat_1, cat_2);
    if(hyp > 100)
        sup = CalSupCuad(hyp);
    else
        sup = CalSupCuad(2 * hyp);
    MostrarSup(sup);

    return 0;
}

void ObtDatos(float *cat_1, float *cat_2){
    cout << ".:HALLAR LA SUPERFICE DE UN CUDRADO CUYO LADO ES LA HIPOTENUSA DE LOS CATETOS SI ES MAYOR A 100 SINO EL DOBLE:." << endl;
    do{
        cout << "Ingrese primer cateto: ";
        cin >> *cat_1;
    } while(!(*cat_1 > 0));
    do{
        cout << "Ingrese segundo cateto: ";
        cin >> *cat_2;
    } while(!(*cat_2 > 0));
}

float CalHyp(float cat_1, float cat_2){
    return sqrt(pow(cat_1, 2) + pow(cat_2, 2));
}

float CalSupCuad(float lado){
    return pow(lado, 2);
}
void MostrarSup(float sup){
    cout << "Superficie: " << sup << endl;
}
