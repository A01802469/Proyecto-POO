#include "Streaming.h"
#include "Serie.h"
#include "Pelicula.h"
#include "Video.h"
using std::cin;
using std::numeric_limits;
using std::streamsize;

void Streaming::mostrarVideos(){
    int opcionCaso2;
    cout<<"Mostrar videos por:\n\n\t1.  Calificacion\n\t2.  Genero\n\n\tOpcion:\t";
    cin>>opcionCaso2;
    if(opcionCaso2==1){
        int calif,resultados=0;;
        while(true){
            try{
            cout<<"Ingresa la calificacion base a buscar: ";
            cin>>calif;
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                string e("Ingrese un valor entero\n\tIntente nuevamente\n");
                throw e;
            }
            if(calif<1||calif>10){
                string e("La calificacion debe estar entre 1 y 10\n\tIntente nuevamente\n");
                throw e;
            }
            if(calif>0 && calif<11){
                resultados=buscarPorCalificacion(calif);
                if(resultados==0){
                string e("No hay videos con esa calificacion\n\tIntente nuevamente\n");
                throw e;
            }
                break;
            }
            }catch(string e){
                cout<<"\nError:\n"<<e;
            }
        }
        
    }
    if(opcionCaso2==2){
        while (true){
        try{
        string genero;
        int resultados;
        cout<<"Ingresa el genero: ";
        cin>>genero;
        resultados=buscarPorGenero(genero);
        if(resultados==0){
            string e("El genero ingresado es invalido o no existen contenidos con ese genero\nIntente de nuevo\n");
            throw e;
        }else{break;}

        }catch(string e){
            cout<<"Error: \n"<<e;
        }
    }
    }
}
int Streaming::buscarPorCalificacion(int calif){
    int resultados=0;
    for(Contenido *ptrContenido:contenidos){
        resultados+=ptrContenido->buscarPorCalificacion(calif);
    }return resultados;
}
int Streaming::buscarPorGenero(string gen){
    int resultados=0;
    for(Contenido *ptrContenido : contenidos){
        resultados+=ptrContenido->buscarPorGenero(gen);
    }
    return resultados;
}
void Streaming::busquedaPorSerie(){
    string nom;
    while (true){
    try{
    cout<<"Ingresa el nombre de la serie\n";
    getline(cin,nom);
    int resultados=0;
    for(Contenido *ptrContenido : contenidos){
        Serie *comprobacionSerie=dynamic_cast<Serie*>(ptrContenido);
        if(comprobacionSerie){
            resultados+=comprobacionSerie->buscarPorNombre(nom);
        }
    }
    if (resultados==0){
        string e("El nombre ingresado es invalido o no existen contenidos con ese nombre\nIntente de nuevo\n");
        throw e;
    }else{break;}
    }catch(string e){
        cout<<"\nError: \n"<<e;
    }
    }
}
void Streaming::buscarPelisPorCalificacion(){
    int calif,resultados=0;
    while(true){
            try{

            cout<<"Ingresa la calificacion base a buscar: ";
            cin>>calif;
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                string e("Ingrese un valor entero\n\tIntente nuevamente\n");
                throw e;
            }
            if(calif<1||calif>10){
                string e("La calificacion debe estar entre 1 y 10\n\tIntente nuevamente\n");
                throw e;
            }
            if(calif>0 && calif<11){
                for(Contenido *ptrContenido : contenidos){
                Pelicula *comprobacionPelicula=dynamic_cast<Pelicula*>(ptrContenido);
                if(comprobacionPelicula){
                    resultados++;
                    comprobacionPelicula->buscarPorCalificacion(calif);
                  }
                }
            }
            if(resultados==0){
                string e("No hay peliculas con esa calificacion\n\tIntente nuevamente\n");
                throw e;
            }else{break;}
            }catch(string e){
                cout<<"\nError:\n"<<e;
            }
        }
    
}
/*void Streaming::agregarContenido(string idCont, string nombreCont, vector<string> generosCont, float calificacionCont,string fecha_estrenoCont, string nombreEpi,int temporada_perteneceEpi, int num_episodioEpi){

}*/
void Streaming::calificarVideo(){
    string nom;
    int calif,comprobacion=0;
    while(true){
    try{
    cout<<"\nIngresa la calificacion nueva: ";
    cin>>calif; 
    cin.clear();//cin.ignore(numeric_limits<streamsize>::max());
    cout<<"Ingresa el nombre del video a calificar: ";
    getline(cin,nom);
    
    for (Contenido *ptrContenido : contenidos){
        Video *comprobacionVideo=dynamic_cast<Video*>(ptrContenido);
        if(comprobacionVideo){
            comprobacion=comprobacionVideo->setCalificacion(nom,calif);
        }
    }
    if(comprobacion==1){
        break;
    }else{
        string e("El nombre ingresado es invalido o no existen videos con ese nombre\nIntente de nuevo\n");
        throw e;}
    }catch(string e){
        cout<<"\nError:\n"<<e;
    }
}
}
void Streaming::iniciar(){
    int opcion;
    do{
        try{
        cout<<"Menu de opciones\n\n1. Cargar un archivo.\n2. Mostrar videos.\n3. Buscar una serie.\n4. Buscar una pelicula por calificacion\n5. Calificar un video\n\t";
        cin>>opcion;
        if(opcion<1||opcion>6){
            string error="Elija una opcion entre 1 y 6\n\tIntente nuevamente\n\n";
            throw error;
        }
        if (cin.fail()) { 
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string error="Entrada inválida. Ingrese un numero entero.\n\tIntente nuevamente\n\n";
        throw error;
        }
        switch (opcion)
        {
        case 1:
        cout<<"este no";
            //cargarArchivo();
        break;
        
        case 2:
            mostrarVideos();
        break;

        case 3:
            busquedaPorSerie();
        break;

        case 4:
            buscarPelisPorCalificacion();
        break;
        case 5:
            calificarVideo();
        break;
        }
        }catch(string e){
            cout<<"Error:"<<endl<<e;
        }
    }while (opcion!=6);

}