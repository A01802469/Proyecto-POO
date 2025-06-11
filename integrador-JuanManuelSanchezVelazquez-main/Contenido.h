#ifndef CONTENIDO_H
#define CONTENIDO_H
#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::ostream;
class Contenido{
    public:
    virtual bool buscarPorNombre(string)=0;
    virtual int buscarPorGenero(string)=0;
    virtual int buscarPorCalificacion(int)=0;
    virtual int setCalificacion(string,float)=0;
};
#endif