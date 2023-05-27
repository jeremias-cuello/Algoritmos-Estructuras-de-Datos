/*
    Id.Programa: 14.cpp
    Autor......: Jeremias Cuello
    Fecha......: Abril-2013
    Comentario.: De c/u. de los participantes del Rally Paris-Dakar se conocen,
    al finalizar una etapa, los siguientes datos:
    Código(0: fin del proceso, 1: auto, 2:camión, 3: moto), número del vehículo,
    apellido y nombre del piloto y del copiloto, nombre de la escudería y tiempo utilizado.
    Se debe informar para cada tipo de vehículo los datos del ganador.
*/

#include <iostream>

using namespace std;

void ingCod(int*);
void ingNum(int*);
void ingNomb(char*, char*);
void ingTiempo(float*);
// void informar(char[], int, int, char*, char*, char*, float);

main(){

    // datos
    int cod,
        num;
    char nomPilo[20],
        apellPilo[20],
        nomCopi[20],
        apellCopi[20],
        escude[10];
    float tiempo;

    float auto_tie = 0;
    int auto_cod,
        auto_num;
    char auto_nomPilo[20],
        auto_apellPilo[20],
        auto_nomCopi[20],
        auto_apellCopi[20],
        auto_escude[10];

    float camion_tie = 0;
    int camion_cod,
        camion_num;
    char camion_nomPilo[20],
        camion_apellPilo[20],
        camion_nomCopi[20],
        camion_apellCopi[20],
        camion_escude[10];

    float moto_tie = 0;
    int moto_cod,
        moto_num;
    char moto_nomPilo[20],
        moto_apellPilo[20],
        moto_nomCopi[20],
        moto_apellCopi[20],
        moto_escude[10];

    while(true){
        ingCod(&cod);
        if(!cod) break;
        ingNum(&num);
        //char pilo[] = {"piloto"};
        //ingNomb(&pilo, nomPilo);
//        ingNomb("copiloto", nomCopi);
//        ingNomb("escuderia", escude);
        cout << "ingrese nombre del piloto: ";
        cin >> nomPilo;
        cout << "ingrese nombre del copiloto: ";
        cin >> nomCopi;
        cout << "ingrese nombre de la escuderia: ";
        cin >> escude;
        ingTiempo(&tiempo);

        switch(cod){
            case 1:
                if(auto_tie < tiempo){
                    auto_tie = tiempo;
                    auto_cod = cod;
                    auto_num = num;
                    strcpy(auto_nomPilo, nomPilo);
                    strcpy(auto_apellPilo, apellPilo);
                    strcpy(auto_nomCopi, nomCopi);
                    strcpy(auto_apellCopi, apellCopi);
                    strcpy(auto_escude, escude);
                } break;
            case 2:
                if(camion_tie < tiempo){
                    camion_tie = tiempo;
                    camion_cod = cod;
                    camion_num = num;
                    strcpy(camion_nomPilo, nomPilo);
                    strcpy(camion_apellPilo, apellPilo);
                    strcpy(camion_nomCopi, nomCopi);
                    strcpy(camion_apellCopi, apellCopi);
                    strcpy(camion_escude, escude);
                } break;
            case 3:
                if(moto_tie < tiempo){
                    moto_tie = tiempo;
                    moto_cod = cod;
                    moto_num = num;
                    strcpy(moto_nomPilo, nomPilo);
                    strcpy(moto_apellPilo, apellPilo);
                    strcpy(moto_nomCopi, nomCopi);
                    strcpy(moto_apellCopi, apellCopi);
                    strcpy(moto_escude, escude);
                } break;
        }

    }

    cout << ".:GANADORES:." << endl;
    cout << "AUTO" << endl;
    cout << "codigo: " << auto_cod << endl;
    cout << "numero de vehiculo: " << auto_num << endl;
    cout << "nombre piloto: " << auto_nomPilo << endl;
    cout << "nombre copiloto: " << auto_nomCopi << endl;
    cout << "nombre de la escuderia: " << auto_escude << endl;
    cout << "tiempo: " << auto_tie << endl << endl;

    cout << "CAMION" << endl;
    cout << "codigo: " << camion_cod << endl;
    cout << "numero de vehiculo: " << camion_num << endl;
    cout << "nombre piloto: " << camion_nomPilo << endl;
    cout << "nombre copiloto: " << camion_nomCopi << endl;
    cout << "nombre de la escuderia: " << camion_escude << endl;
    cout << "tiempo: " << camion_tie << endl << endl;

    cout << "MOTO" << endl;
    cout << "codigo: " << moto_cod << endl;
    cout << "numero de vehiculo: " << moto_num << endl;
    cout << "nombre piloto: " << moto_nomPilo << endl;
    cout << "nombre copiloto: " << moto_nomCopi << endl;
    cout << "nombre de la escuderia: " << moto_escude << endl;
    cout << "tiempo: " << moto_tie << endl << endl;

//    informar("AUTO", auto_cod, auto_num, auto_nomPilo, auto_nomCopi, auto_escude, auto_tie);
//    informar("CAMION", camion_cod, camion_num, camion_nomPilo, camion_nomCopi, camion_escude, camion_tie);
//    informar("MOTO", moto_cod, moto_num, moto_nomPilo, moto_nomCopi, moto_escude, moto_tie);

    return 0;
}

void ingCod(int *cod){
    do{
        cout << "Codigo [1:auto, 2:camion, 3:moto]: ";
        cin >> *cod;
    } while(!(*cod == 0 || *cod == 1 || *cod == 2 || *cod == 3));
}
void ingNum(int *num){
    do{
        cout << "ingrese numero de vehiculo: ";
        cin >> *num;
    } while(!(*num >= 100 && *num <= 999));
}
void ingNom(char *ente, char *var){
    cout << "ingrese nombre de la ";
    while(ente++) cout << *ente;
    cin >> *var;
}
void ingTiempo(float *tiempo){
    do{
        cout << "Ingrese tiempo utilizado: ";
        cin >> *tiempo;
    } while(!(*tiempo > 0));
}

/*
void informar(char cat[], int cod, int num, char nomPilo*, char nomCopi*, char escude*, float tiempo){
    cout << ".:GANADORES:." << endl;
    cout << cat << endl;
    cout << "codigo: " << cod << endl;
    cout << "numero de vehiculo: " << num << endl;
    cout << "nombre piloto: " << *nomPilo << endl;
    cout << "nombre copiloto: " << *nomCopi << endl;
    cout << "nombre de la escuderia: " << *escude << endl;
    cout << "tiempo: " << tiempo << endl << endl;
}
*/
