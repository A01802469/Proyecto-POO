#include "Serie.h"
Serie::Serie(){}
Serie::Serie(string idSe, string nombreSe, vector<string>generosSe){
    id=idSe;
    nombre=nombreSe;
    generos=generosSe;
}
ostream& operator <<(ostream &os, Serie &serie){
os<<"\n\n\tNombre de la serie: "<<serie.nombre<<endl<<"Generos: "<<endl;
    for(string genero : serie.generos){
        os<<genero<<", ";
    }
    os<<"Episodios: \n";
    for(Episodio *p:serie.episodios){
        os<<*p;
    }
    return os;
}
void Serie::imprimir(){
    cout<<*this;
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

bool Serie::buscarPorNombre(string nom){
    if(nom==nombre){
            return true;
        }else{return false;}

}
int Serie::setCalificacion(string nom, float calif){
    int resultado=0;
    for(Episodio *ptrEp:episodios){
    resultado+=ptrEp->setCalificacion(nom,calif);
    }
    return resultado;   
}
void Serie::agregarEpisodio(string idEpi, string nombreEpi, string fecha_estrenoEpi, int duracionEpi, float calificacionEpi, int numero_episodioIn ,int temporada_perteneceIn){
    Episodio *p = new Episodio(idEpi,nombreEpi,fecha_estrenoEpi,duracionEpi,calificacionEpi,numero_episodioIn,temporada_perteneceIn);
    episodios.push_back(p);
}
