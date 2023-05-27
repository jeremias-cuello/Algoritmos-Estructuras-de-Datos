/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Dados los catetos a y b
    ambos reales y positivos, de un
    triángulo rectángulo, se solicita
    hallar la medida de su hipotenusa
*/

#include <iostream>

using namespace std;

void ObtDatos(float*, float*);
float CalHyp(float, float);
void MostrarHyp(float);

main(){
    float c_1,
        c_2,
        hyp;

    ObtDatos(&c_1, &c_2);
    hyp = CalHyp(c_1, c_2);
    MostrarHyp(hyp);

    return 0;
}

void ObtDatos(float *cat_1, float *cat_2){
    // Aqui llegue a la conclusion que utlizando
    // punteros puedo asignar variables en otros scopes

    cout << ".:HALLAR LA HIPOTENUSA:." << endl;
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

void MostrarHyp(float hyp){
    cout << "Hipotenusa: " << hyp << endl;
}
