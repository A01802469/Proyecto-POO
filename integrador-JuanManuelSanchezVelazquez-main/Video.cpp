#include "Video.h"
Video::Video(){}
Video::Video(string idVid,string nombreVid,string fecha_estrenoVid,int duracionVid,float calificacionVid){
id = idVid;
nombre = nombreVid;
fecha_estreno = fecha_estrenoVid;
duracion = duracionVid;
calificacion = calificacionVid;
}
int Video::setCalificacion(string nom,float calif){
    if(nom==nombre){
        calificacion=calif;
        return 1;
    }else{return 0;}
}
