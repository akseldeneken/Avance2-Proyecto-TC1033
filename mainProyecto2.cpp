#include <iostream>
#include "ProyectoEmpresa.h"
#include "ProyectoClases.h"

using namespace std;

void menu(){
    cout << "\nMENU PRINCIPAL" << endl << endl;
    cout << "1. Productos" << endl;
    cout << "2. Clientes" << endl;
    cout << "3. Salir" << endl;
    }


int main(){
    Empresa empresa;
    empresa.creaEjemplosLaps();
    empresa.creaEjemplosCel();
    empresa.creaEjemplosCli();
    int opcion;

    while (opcion != 3){
        menu();
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion){
        case 1:
            cout << "\n1. Laptops" << endl;
            cout << "2. Celulares" << endl;
            int opcion2;
            cout << "Ingresa una opcion: ";
            cin >> opcion2;
            switch (opcion2){
                case 1:
                empresa.muestraLaps();
                break;

                case 2:
                empresa.muestraCel();
            }
            break;

        case 2:
            empresa.muestraCli();
            break;

        default:
            cout << "Opcion invalida" << endl;
                
        }
    }   
}

