#include "Serie.h"
Serie::Serie(){}
Serie::Serie(string idSe, string nombreSe, vector<string>generosSe){
    id=idSe;
    nombre=nombreSe;
    generos=generosSe;
}
void Serie::imprimir(){
    cout<<"Nombre de la serie: "<<nombre<<endl<<"Generos: "<<endl;
    for(string genero : generos){
        cout<<genero<<", ";
    }
    cout<<"Episodios: "<<endl;
    for(Episodio *p:episodios){
        p->imprimir();
    }
}
int Serie::buscarPorCalificacion(int calif){
    int resultados=0;
    for(Episodio* episodio : episodios){
        resultados+=episodio->buscarPorCalificacion(calif);
    }
    return resultados;
}
int Serie::buscarPorGenero(string gen){
    int resultados=0;
    for(string genero : generos){
        if(gen==genero){
            imprimir();
            resultados++;
        }
    }return resultados;
}
int Serie::buscarPorNombre(string nom){
    if(nom==nombre){
            imprimir();
            return 1;
        }else{return 0;}

}
void Serie::agregarEpisodio(string idEpi, string nombreEpi, string fecha_estrenoEpi, int duracionEpi, float calificacionEpi, int numero_episodioIn ,int temporada_perteneceIn){
    Episodio *p = new Episodio(idEpi,nombreEpi,fecha_estrenoEpi,duracionEpi,calificacionEpi,numero_episodioIn,temporada_perteneceIn);
    episodios.push_back(p);
}
