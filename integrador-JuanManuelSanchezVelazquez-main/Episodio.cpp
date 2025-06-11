#include "Episodio.h"
Episodio::Episodio(){}
Episodio::Episodio(string idEpi, string nombreEpi, string fecha_estrenoEpi, int duracionEpi, float calificacionEpi, int numero_episodioIn ,int temporada_perteneceIn): Video(idEpi,nombreEpi,fecha_estrenoEpi,duracionEpi,calificacionEpi){
    numero_episodio=numero_episodioIn;
    temporada_pertenece=temporada_perteneceIn;
}
ostream& operator<<(ostream & cout, Episodio &episodio){
cout<<"\nNombre: "<<episodio.nombre<<endl<<"Calificacion: "<<episodio.calificacion<<endl<<"Duracion: "<<episodio.duracion<<endl<<"Fecha de estreno: "<<episodio.fecha_estreno<<endl;
}
void Episodio::imprimir(){
    cout<<*this;
}
bool Episodio::buscarPorNombre(string nom){
    if(nombre==nom){
        return true;
    }else{return false;}

}
int Episodio::buscarPorCalificacion(int calif){
    int resultados=0;
    if(calificacion>=calif){
        resultados++;
        imprimir();
    }return resultados;
}
int Episodio::setCalificacion(string nom, float calif){
    int resultados=0;
    if(nom==nombre){
            calificacion=calif;
            resultados++;
            cout<<"\n\nCalificacion cambiada\n";
        }return resultados;

}