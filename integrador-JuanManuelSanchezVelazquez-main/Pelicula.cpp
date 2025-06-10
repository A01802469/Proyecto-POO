#include "Pelicula.h"
Pelicula::Pelicula(){}
Pelicula::Pelicula(string idPeli, string nombrePeli, int duracionPeli,vector<string> generosPeli, float calificacionPeli, string fecha_estrenoPeli): Video(idPeli,nombrePeli,fecha_estrenoPeli,duracionPeli,calificacionPeli){
    generos=generosPeli;
}
void Pelicula::imprimir(){
    cout<<"Nombre: "<<nombre<<endl<<"Calificacion: "<<calificacion<<endl<<"Duracion: "<<duracion<<endl<<"Fecha de estreno: "<<fecha_estreno<<endl<<"Generos: "<<endl;
    for(string genero : generos){
        cout<<genero<<", ";
    }
}
int Pelicula::buscarPorCalificacion(int calif){
    int resultados=0;
    if(calificacion>=calif){
        resultados++;
        imprimir();
    }return resultados;
}
int Pelicula::setCalificacion(string nom,float calif){
    if(nom==nombre){
        calificacion=calif;
        return 1;
    }else{return 0;}
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
int Pelicula::buscarPorNombre(string nom){
    if(nom==nombre){
            imprimir();
            return 1;
        }else{return 0;}
}