#ifndef VIDEO_H
#define VIDEO_H
#include<string>
using std::string;
class Video{
    private:
    string id;
    protected:
    string nombre, fecha_estreno;
    float duracion, calificacion;
    public:
    Video();
    Video(string,string,string,int,float);
    int setCalificacion(string,float);
};
#endif