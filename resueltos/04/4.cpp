/*
    Id.Programa: 1.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Hallar la medida de la hipotenusa de cada
    triángulo rectángulo, sabiendo las medidas de sus catetos,
    el proceso finaliza cuando se ingrese un valor menor o igual
    a cero. Además se requiere informar,
    [+] porcentaje y cantidad de triángulos con hipotenusas mayor a 100.
    [+] porcentaje y cantidad de triángulos con hipotenusas menor o igual a 100.
    [+] promedio de las medidas de las hipotenusas
*/

#include <iostream>

using namespace std;

void ObtDatos(float*, float*);
float CalHyp(float, float);
void MostrarHyp(float);

void MostrarHypMay(int, float);
void MostrarHypMen(int, float);
void MostrarPromHyp(float);

main(){
    float cat_1,
        cat_2,
        hyp,
        sum_hyp; // para el promedio
    int c_hypMay = 0, // contador de hypotenusas mayores a 100
        c_hypMen = 0; // contador de hypotenusas menores o iguales a 100

    cout << ".:HALLAR HIPOTENUSA DE CADA TRIANGULO MIENTRAS NO SE INGRESE UN VALOR MENOR O IGUAL CERO:." << endl;
    while(true){
        ObtDatos(&cat_1, &cat_2);

        if((cat_2 <= 0) || (cat_1 <= 0))
            break;

        hyp = CalHyp(cat_1, cat_2);
        MostrarHyp(hyp);

        if(hyp > 100) c_hypMay++;
        else c_hypMen++;

        sum_hyp += hyp;
    }

    if((c_hypMay + c_hypMen) > 0){ // cant_total = c_hypMay + c_hypMen
        MostrarHypMay(c_hypMay, (c_hypMay * 100.0) / (c_hypMay + c_hypMen));
        MostrarHypMen(c_hypMen, (c_hypMen * 100.0) / (c_hypMay + c_hypMen));
        MostrarPromHyp(sum_hyp / (c_hypMay + c_hypMen));
    } else{
        cout << endl << "No se ingresaron triangulos..." << endl;
    }

    return 0;
}

void ObtDatos(float *cat_1, float *cat_2){
    cout << "-----------------------" << endl;
    cout << "Ingrese primer cateto: ";
    cin >> *cat_1;
    cout << "Ingrese segundo cateto: ";
    cin >> *cat_2;
}
float CalHyp(float cat_1, float cat_2){
    return sqrt(pow(cat_1, 2) + pow(cat_2, 2));
}
void MostrarHyp(float hyp){
    cout << "Hipotenusa: " << hyp << endl;
}
void MostrarHypMay(int cant, float porc){
    cout << endl << "----- Triangulos con Hypotenusa mayor a 100 -----" << endl;
    cout << "Cantidad: " << cant << endl;
    cout << "Porcentaje: " << porc << endl;
}
void MostrarHypMen(int cant, float porc){
    cout << endl << "----- Triangulos con Hypotenusa menor o igual a 100 -----" << endl;
    cout << "Cantidad: " << cant << endl;
    cout << "Porcentaje: " << porc << endl;
}
void MostrarPromHyp(float prom){
    cout << endl << "----- Medidas de Hypotenusa -----" << endl;
    cout << "Promedio: " << prom << endl;
}

