#ifndef STREAMING_H
#define STREAMING_H
#include "Contenido.h"
class Streaming{
//private:
public:
vector<Contenido*> contenidos;
//public:
void iniciar();//
void cargarArchivo();
void agregarContenido(string idCont, string nombreCont, int duracion, vector<string> generosCont, float calificacionCont, string fecha_estrenoCont, string nombreEpi,  int temporada_perteneceEpi, int num_episodioEpi, string idEpi);
void agregarContenido(string idCont, string nombreCont, int duracion, vector<string> generosCont, float calificacionCont, string fecha_estrenoCont);
void mostrarVideos();//
int buscarPorCalificacion(int);//
int buscarPorGenero(string);//
void busquedaPorSerie();//
int buscarPelisPorCalificacion();//
void calificarVideo();//

};
#endif