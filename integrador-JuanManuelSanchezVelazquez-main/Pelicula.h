#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"
#include "Contenido.h"
class Pelicula: protected Video, public Contenido{
    private:
    void imprimir();
    protected:
    vector<string> generos;

    public:
    Pelicula();
    Pelicula(string, string, int, vector<string>, float, string);/*: Video(id,nombre,fecha_estreno,duracion,calificacion)*/
    int buscarPorCalificacion(int);
    int buscarPorGenero(string);
    int setCalificacion(string,float);
    bool buscarPorNombre(string);
    friend ostream& operator<<(ostream &os , Pelicula &pelicula);
};
#endif