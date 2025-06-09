#include "Episodio.h"
#include "Serie.h"
#include "Streaming.h"
#include "Pelicula.h"
int main(){
    Contenido *p=new Pelicula("tt0107290","Jurassic Park",127,{"Action","Adventure","Sci-Fi","Thriller"},8.1,"11/6/1993");
    Serie *p1=new Serie("tt0944947","Game Of Thrones",{"Action","Adventure","Drama","Fantasy","Romance"});//tt0944947,Game Of Thrones,57,Action;Adventure;Drama;Fantasy;Romance,9,04/17/2011,Winter Is Coming,1,1,tt1668899
    p1->agregarEpisodio("tt1668899","Winter Is Coming","04/17/2011",100,9.5,1,1);
    Contenido *p2=p1;
    Streaming sistema;
    sistema.contenidos.push_back(p);
    sistema.contenidos.push_back(p2);
    sistema.iniciar();
    return 0;
}