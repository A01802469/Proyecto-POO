#ifndef CONTENIDO_H
#define CONTENIDO_H
#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::vector;
class Contenido{
    public:
    virtual int buscarPorNombre(string)=0;
    virtual int buscarPorGenero(string)=0;
    virtual int buscarPorCalificacion(int)=0;
    virtual void imprimir()=0;
};
#endif