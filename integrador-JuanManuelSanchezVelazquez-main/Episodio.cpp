#include "Episodio.h"
Episodio::Episodio(){}
Episodio::Episodio(string idEpi, string nombreEpi, string fecha_estrenoEpi, int duracionEpi, float calificacionEpi, int numero_episodioIn ,int temporada_perteneceIn): Video(idEpi,nombreEpi,fecha_estrenoEpi,duracionEpi,calificacionEpi){
    numero_episodio=numero_episodioIn;
    temporada_pertenece=temporada_perteneceIn;
}
void Episodio::imprimir(){
    cout<<"Nombre: "<<nombre<<endl<<"Calificacion: "<<calificacion<<endl<<"Duracion: "<<duracion<<endl<<"Fecha de estreno: "<<fecha_estreno<<endl;
}
int Episodio::buscarPorCalificacion(int calif){
    int resultados=0;
    if(calificacion>=calif){
        resultados++;
        imprimir();
    }return resultados;
}
int Episodio::setCalificacion(string nom, float calif){
    if(nom==nombre){
            calificacion=calif;
            return 1;
        }return 0;

}