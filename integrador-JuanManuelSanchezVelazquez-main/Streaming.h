#ifndef STREAMING_H
#define STREAMING_H
#include "Contenido.h"
class Streaming{
public:
vector<Contenido*> contenidos;
//public:
void iniciar();//
//void cargarArchivo();
void agregarContenido(string idCont, string nombreCont, vector<string> generosCont, float calificacionCont,string fecha_estrenoCont, string nombreEpi,int temporada_perteneceEpi, int num_episodioEpi);
void mostrarVideos();//
int buscarPorCalificacion(int);//
int buscarPorGenero(string);//
void busquedaPorSerie();//
void buscarPelisPorCalificacion();//
void calificarVideo();//
};
#endif