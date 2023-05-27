/*
    Id.Programa: 24.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: Se conocen los siguientes datos:
        a. Código de vendedor, (3 díg.)
        b. Cantidad vendida, (4 díg.)
        c. Descripción de artículo, (str20)
        d. Precio unitario. (5 díg.,2 díg.)
        por cada una de las ventas realizadas. Los datos están agrupados por código de vendedor y el proceso finaliza cuando se ingresa un código de vendedor igual a 0.
        Se pide emitir:
        Por cada vendedor su código y, por cada venta realizada; la cantidad, código de artículo, el precio y el importe total de ese ítem.
        Al finalizar ese vendedor se deberá emitir el total de importe vendido.
        Por fin del proceso emitir el importe total vendido por todos los vendedores y el vendedor que más vendió en importe.
*/

#include <iomanip>
#include <iostream>
#define CENTINELA 0

typedef char str20[20+1];

using namespace std;

void tituloIni(float *impTotVen, float *maxImp, float *sumImp){
    cout << setw(11) << cout.fill(' ') << "Datos del vendedor" << setw(11) << cout.fill(' ') << endl;
    *impTotVen = *sumImp = *maxImp = 0;
}
void ingCodigo(int *cod) {
    do {
        cout << "Cod. Vendedor (0: FIN): ";
        cin >> *cod;
    } while(!(0 <= *cod && *cod <= 999)); // [0; 999]
}
void ingCantidad(int *cant) {
    do {
        cout << "   Cantidad..............: ";
        cin >> *cant;
    } while(!(0 < *cant && *cant <= 9999)); // [0; 9999]
}
void ingDescripcion(str20 *desc) {
    cout << "   Descripcion...........: ";
    cin >> *desc;
}
void ingPrecio(float *precio) {
    do {
        cout << "   Precio unitario.......: ";
        cin >> *precio;
    } while(!(0 < *precio && *precio <= 99999)); // [0; 99999]
}
int countDig(int num) {
    int coc = num,
        cont = 0;

    if(!coc) cont = 1;
    while(coc) {
        coc = coc / 10;
        cont++;
    }

    return cont;
}
bool haveMan(float num) {
    num = fabs(num);
    return num - floor(num);
}
void espaciosInt(int num, int tam) {
    int digitos = countDig(num);
    if(digitos > tam) cout << "ERROR: d > length";
    else if(digitos != tam) cout << setw(tam-digitos) << cout.fill(' ');
}
void espaciosStr(str20 str, int tam) {
    int length = strlen(str);
    if(length > tam) cout << "ERROR: d > length";
    else if(length != tam) cout << setw(tam-length) << cout.fill(' ');

}
void emitirVenCal(int cod, int cant_ven, str20 des_ven, float pre_ven, float *sumImp, int *cod_ant) {

    *cod_ant = cod;
    *sumImp += pre_ven * cant_ven;

    cout << "VENDEDOR [" << cod << "]" << endl;
    cout << "  +----+--------------------+--------+-----------+" << endl;
    cout << "  |cant|descripcion         |precio  |importe    |" << endl;
    cout << "  +----+--------------------+--------+-----------+" << endl;
    cout << "  |";
    espaciosInt(cant_ven, 4);
    cout << cant_ven << "|";
    espaciosStr(des_ven, 20);
    cout << des_ven << "|";
    espaciosInt(floor(pre_ven), haveMan(pre_ven) ? 5 : 5+3);
    cout << setprecision(7) << pre_ven << "|";
    espaciosInt(floor(pre_ven * cant_ven), 11); // 9999 * 99998.99 = 9 dig.
    cout << setprecision(11) << pre_ven * cant_ven << "|" << endl;
    cout << "  +----+--------------------+--------+-----------+" << endl;
}
void emitirVendedor(int cod, float *impTotalVen, float *maxImp, float *sumImp, int *cod_ven_max) {
    cout << "VENDEDOR [" << cod << "].....................Importe $ " << *sumImp << endl;
    if(*sumImp > *maxImp){
            *maxImp = *sumImp;
            *cod_ven_max = cod;
    }
    *impTotalVen += *sumImp;
    *sumImp = 0;
}

void emitirVenMaxTot(int impTotalVen, int cod_ven_max) {
    cout << "CODIGO DE VENDEDOR CON IMPORTE MAXIMO..........." << cod_ven_max << endl;
    cout << "TOTAL VENDIDO..................................." << impTotalVen << endl;
}

main() {

    int cod_ven,
        cod_ant,
        cant_ven,
        cod_ven_max;
    float pre_ven,
          impTotalVen,
          sumImp,
          maxImporte;
    str20 des_ven;

    tituloIni(&impTotalVen, &maxImporte, &sumImp);
    ingCodigo(&cod_ven);
    while(cod_ven != CENTINELA) {
        ingCantidad(&cant_ven);
        ingDescripcion(&des_ven);
        ingPrecio(&pre_ven);
        emitirVenCal(cod_ven, cant_ven, des_ven, pre_ven, &sumImp, &cod_ant);
        ingCodigo(&cod_ven);

        if(cod_ant != cod_ven)
            emitirVendedor(cod_ant, &impTotalVen, &maxImporte, &sumImp, &cod_ven_max);
    }

    emitirVenMaxTot(impTotalVen, cod_ven_max);

    return 0;
}
