#ifndef PROYECTOCLASES_H_
#define PROYECTOCLASES_H_
#include <iostream>
#include "ProyectoEmpresa.h"
using namespace std;

class Producto{
    private:
    float precio;
    int idn;
    string nombre;
    string status;
    string especificaciones;
    public:
    Producto(): precio(0.0), idn(0), nombre(""), status(""), especificaciones(""){};
    Producto(float pre, int id, string nom, string sta, string espe): precio(pre),idn(id), nombre(nom), status(sta), especificaciones(espe){};
    float getPrecio();
    int getId();
    string getNombre();
    string getStatus();
    string getEspec();
    void setPrecio(float);
    void setId(int);
    void setNombre(string);
    void setStatus(string);
    void setEspec(string);
    void muestraDatos();
    void registraProducto();
};

float Producto::getPrecio(){
    return precio;
}

int Producto::getId(){
    return idn;
}

string Producto::getNombre(){
    return nombre;
}

string Producto::getStatus(){
    return status;
}

string Producto::getEspec(){
    return especificaciones;
}

void Producto::setPrecio(float pre){
    precio = pre;
}

void Producto::setId(int id){
    idn = id;
}

void Producto::setNombre(string nom){
    nombre = nom;
}

void Producto::setStatus(string sta){
    status = sta;
}

void Producto::setEspec(string espe){
    especificaciones = espe;
}

void Producto::muestraDatos(){
    cout << "\nNombre del Producto: " << nombre << endl;
    cout << "ID: " << idn << endl;
    cout << "Precio: " << precio << endl;
    cout << "Esatus: " << status << endl;
    cout << "Especificaciones: " << especificaciones << endl;
}








class Laptop : public Producto{
    private:
        string procesador;
    public:
        Laptop(): procesador(""){};
        Laptop(float pre, int id, string nom, string sta, string espe, string pro): Producto(pre, id, nom, sta, espe), procesador(pro){};
        string getPro();
        void setPro(string);
        void muestraPro();
        
};

string Laptop::getPro(){
    return procesador;
}

void Laptop::setPro(string pro){
    procesador = pro;
}

void Laptop::muestraPro(){
    cout << "Procesador: " << procesador << endl;
}





class Celular : public Producto{
    private:
        string camara;
    public:
        Celular(): camara(""){};
        Celular(float pre, int id, string nom, string sta, string espe, string cam): Producto(pre, id, nom, sta, espe), camara(cam){};
        string getCam();
        void setCam(string);
        void muestraCam();
};

string Celular::getCam(){
    return camara;
}

void Celular::setCam(string cam){
    camara = cam;
}

void Celular::muestraCam(){
    cout << "Camara: " << camara << endl;
}




class Clientes{
    private:
        string nombre;
        string direccion;
        int numero;
    public:
        Clientes(): nombre(""), direccion(""), numero(0){};
        Clientes(string nom, string dir, int num) : nombre(nom), direccion(dir), numero(num){};
        string getNombre();
        string getDireccion();
        int getNumero();
        void setNombre(string);
        void setDireccion(string);
        void getNumero(int);
        void muestraDatos();

};

string Clientes::getNombre(){
    return nombre;
}

string Clientes::getDireccion(){
    return direccion;
}

int Clientes::getNumero(){
    return numero;
}

void Clientes::setNombre(string nom){
    nombre = nom;
}

void Clientes::setDireccion(string dir){
    direccion = dir;
}

void Clientes::muestraDatos(){
    cout << "\nNombre: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Numero telefonico: " << numero << endl;
}





#endif // PROYECTOCLASES_H_