#ifndef SERIE_H
#define SERIE_H
#include "Contenido.h"
#include "Episodio.h"
class Serie: public Contenido{
private:
string id, nombre;
vector<string> generos;
vector<Episodio*> episodios;

public:
Serie();
Serie(string, string, vector<string>);
int buscarPorCalificacion(int);
int buscarPorGenero(string);
void agregarEpisodio(string idEpi, string nombreEpi, string fecha_estrenoEpi, int duracionEpi, float calificacionEpi, int numero_episodioIn ,int temporada_perteneceIn);
bool buscarPorNombre(string);
int setCalificacion(string,float);
void imprimir();
friend ostream& operator<<(ostream & cout, Serie &serie);
};
#endif