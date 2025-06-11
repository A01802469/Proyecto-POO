#include "Pelicula.h"
Pelicula::Pelicula(){}
Pelicula::Pelicula(string idPeli, string nombrePeli, int duracionPeli,vector<string> generosPeli, float calificacionPeli, string fecha_estrenoPeli): Video(idPeli,nombrePeli,fecha_estrenoPeli,duracionPeli,calificacionPeli){
    generos=generosPeli;
}
ostream& operator<<(ostream& os, Pelicula &pelicula){
    os<<"\n\n\tNombre: "<<pelicula.nombre<<endl<<"Calificacion: "<<pelicula.calificacion<<endl<<"Duracion: "<<pelicula.duracion<<endl<<"Fecha de estreno:"<<pelicula.fecha_estreno<<endl<<"Generos: "<<endl;
    for(string genero : pelicula.generos){
        os<<genero<<", "<<endl;
    }
return os;
}
void Pelicula::imprimir(){
    cout<<*this;
}
int Pelicula::buscarPorCalificacion(int calif){
    int resultados=0;
    if(calificacion>=calif){
        resultados++;
        imprimir();
    }return resultados;
}
int Pelicula::setCalificacion(string nom,float calif){
    int resultados=0;
    if(nom==nombre){
        calificacion=calif;
        resultados++;
        cout<<"\n\nCalificacion cambiada\n";
    }return resultados;
}
int Pelicula::buscarPorGenero(string gen){
    int resultados=0;
    for(string genero : generos){
        if(gen==genero){
            imprimir();
            resultados++;
        }
    }return resultados;
}
bool Pelicula::buscarPorNombre(string nom){
    if(nom==nombre){
            return true;
        }else{return false;}
}
