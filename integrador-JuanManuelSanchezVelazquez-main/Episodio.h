#ifndef EPISODIO_H
#define EPISODIO_H
#include "Video.h"
#include<iostream>
using std::cout;
using std::endl;
class Episodio: public Video{
    private:
    int numero_episodio, temporada_pertenece;
    
    public:
    Episodio();
    Episodio(string, string, string, int, float, int,int);
    int buscarPorCalificacion(int);
    void buscarPorGenero(string);
    void imprimir();
    int setCalificacion(string,float);
};
#endif