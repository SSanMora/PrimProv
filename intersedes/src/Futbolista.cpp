#include "Futbolista.h"

Futbolista::Futbolista()
{
     apuntador1=0;
     apuntador2=1;
     goles=0;
     asistencias=0;
     tarjetasRojas=0;
     partidosJugados=0;
     posicion="";
}
void Futbolista::setPosicion(string posicion) {
    this->posicion = posicion;
}
string Futbolista::getPosicion() {
    return posicion;
}
void Futbolista::setGoles(int goles) {
    this->goles = goles;
}
int Futbolista::getGoles() {
    return goles;
}
void Futbolista::setAsistencias(int asistencias) {
    this->asistencias = asistencias;
}
int Futbolista::getAsistencias() {
    return asistencias;
}
void Futbolista::setPartidosJugados(int partidosJugados) {
    this->partidosJugados = partidosJugados;
}
int Futbolista::getPartidosJugados() {
    return partidosJugados;
}
void Futbolista::setTarjetasRojas(int tarjetasRojas) {
    this->tarjetasRojas = tarjetasRojas;
}
int Futbolista::getTarjetasRojas() {
    return tarjetasRojas;
}
void Futbolista::MostrarGoleador(Futbolista futbolistas[],int posiciones){


    for(int i =0;i < posiciones; i++){ //Buble Short

        while(apuntador2 < posiciones){

            if(futbolistas[apuntador1].getGoles() < futbolistas[apuntador2].getGoles()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Futbolista auxiliar = futbolistas[apuntador2];//Ordeno Objetos Completos
                futbolistas[apuntador2] = futbolistas[apuntador1];
                futbolistas[apuntador1]=auxiliar;


                apuntador1++;
                apuntador2++;

            }else{

              apuntador1++;
              apuntador2++;
            }
        }

        apuntador1=0;//Reiniciar apuntador
        apuntador2=1;
   }

   cout<<"El goleador es: "<<futbolistas[0].getNombre()<<" con: "<<futbolistas[0].getGoles()<<" Goles" <<endl;
}

void Futbolista::MostrarMasAsistidor(Futbolista futbolistas[],int posiciones){

    for(int i =0;i < posiciones; i++){ //Buble Short

        while(apuntador2 < posiciones){

            if(futbolistas[apuntador1].getAsistencias() < futbolistas[apuntador2].getAsistencias()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Futbolista auxiliar = futbolistas[apuntador2];//Ordeno Objetos Completos
                futbolistas[apuntador2] = futbolistas[apuntador1];
                futbolistas[apuntador1]=auxiliar;


                apuntador1++;
                apuntador2++;

            }else{

              apuntador1++;
              apuntador2++;
            }
        }

        apuntador1=0;//Reiniciar apuntador
        apuntador2=1;
   }

   cout<<"El mas asistidor es: "<<futbolistas[0].getNombre()<<" con: "<<futbolistas[0].getAsistencias()<<" Asistencias" <<endl;
}


void Futbolista::MostrarMasFaltador(Futbolista futbolistas[],int posiciones){


    for(int i =0;i < posiciones; i++){ //Buble Short

        while(apuntador2 < posiciones){

            if(futbolistas[apuntador1].getTarjetasRojas() < futbolistas[apuntador2].getTarjetasRojas()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Futbolista auxiliar = futbolistas[apuntador2];//Ordeno Objetos Completos
                futbolistas[apuntador2] = futbolistas[apuntador1];
                futbolistas[apuntador1]=auxiliar;


                apuntador1++;
                apuntador2++;

            }else{

              apuntador1++;
              apuntador2++;
            }
        }

        apuntador1=0;//Reiniciar apuntador
        apuntador2=1;
   }

   cout<<"El Futbolista que cometio mas faltas fue "<<futbolistas[0].getNombre()<<" con: "<<futbolistas[0].getTarjetasRojas()<<" Faltas" <<endl;
}

void Futbolista::MostrarMasPartidosJugados(Futbolista futbolistas[],int posiciones){
    for(int i =0;i < posiciones; i++){ //Buble Short

        while(apuntador2 < posiciones){

            if(futbolistas[apuntador1].getPartidosJugados() < futbolistas[apuntador2].getPartidosJugados()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Futbolista auxiliar = futbolistas[apuntador2];//Ordeno Objetos Completos
                futbolistas[apuntador2] = futbolistas[apuntador1];
                futbolistas[apuntador1]=auxiliar;
                apuntador1++;
                apuntador2++;
            }else{
              apuntador1++;
              apuntador2++;
            }
        }
        apuntador1=0;//Reiniciar apuntador
        apuntador2=1;
   }
   cout<<"El Futbolista que mas partidos jugo fue "<<futbolistas[0].getNombre()<<" con: "<<futbolistas[0].getPartidosJugados()<<" Partidos" <<endl;
}

void Futbolista::crearFutbolista(Futbolista futbolistas[],int posiciones){
    string nombre;
    int edad;
    string cedula;
    string codigo;
    int programa;
    string sexo;
    string posicion;
    int goles;
    int asistencias;
    int partidosJugados;
    int tarjetasRojas;

    cout<<"Ingrese el Nombre del Futbolista: ";
    cin>>nombre;

    cout<<"Ingrese la Edad del Futbolista: ";
    cin>>edad;

    cout<<"Ingrese la Cedula del Futbolista: ";
    cin>>cedula;

    cout<<"Ingrese el Codigo del Futbolista: ";
    cin>>codigo;

    cout<<"Ingrese el Programa del Futbolista: ";
    cin>>programa;

    cout<<"Ingrese el Sexo del Futbolista: ";
    cin>>sexo;
    cout<<"Ingrese la Posicion del Futbolista: ";
    cin>>posicion;
    cout<<"Ingrese la cantidad de Goles del Futbolista: ";
    cin>>goles;
    cout<<"Ingrese la cantidad de Asistencias del Futbolista: ";
    cin>>asistencias;
    cout<<"Ingrese la cantidad de Partidos Jugados del Futbolista: ";
    cin>>partidosJugados;
    cout<<"Ingrese la cantidad de Tarjetas Rojas del Futbolista: ";
    cin>>tarjetasRojas;
    futbolistas[posiciones].setNombre(nombre);
    futbolistas[posiciones].setEdad(edad);
    futbolistas[posiciones].setCedula(cedula);
    futbolistas[posiciones].setCodigo(codigo);
    futbolistas[posiciones].setPrograma(programa);
    futbolistas[posiciones].setSexo(sexo);
    futbolistas[posiciones].setPosicion(posicion);
    futbolistas[posiciones].setGoles(goles);
    futbolistas[posiciones].setAsistencias(asistencias);
    futbolistas[posiciones].setPartidosJugados(partidosJugados);
    futbolistas[posiciones].setTarjetasRojas(tarjetasRojas);
    cout<<"Futbolista creado correctamente"<<endl;
}

void Futbolista::ModificarFutbolista(Futbolista futbolistas[],int posiciones){
    string nombre;
    cout<<"Ingrese el Nombre del Futbolista que desea modificar: ";
    cin>>nombre;

    for(int i =0;i < posiciones;i++){
        if(futbolistas[i].getNombre() == nombre){
            futbolistas[i].crearFutbolista(futbolistas,posiciones);
        }
    }
}

void Futbolista::ListarFutbolistas(Futbolista futbolistas[],int posiciones){
    for(int i =0;i < posiciones;i++){
        cout<<"Nombre del Futbolista: "<<futbolistas[i].getNombre()<<endl;
        cout<<"Edad del Futbolista: "<<futbolistas[i].getEdad()<<endl;
        cout<<"Cedula del Futbolista: "<<futbolistas[i].getCedula()<<endl;
        cout<<"Codigo del Futbolista: "<<futbolistas[i].getCodigo()<<endl;
        cout<<"Programa del Futbolista: "<<futbolistas[i].getPrograma()<<endl;
        cout<<"Sexo del Futbolista: "<<futbolistas[i].getSexo()<<endl;
        cout<<"Posicion del Futbolista: "<<futbolistas[i].getPosicion()<<endl;
        cout<<"Goles del Futbolista: "<<futbolistas[i].getGoles()<<endl;
        cout<<"Asistencias del Futbolista: "<<futbolistas[i].getAsistencias()<<endl;
        cout<<"Partidos Jugados del Futbolista: "<<futbolistas[i].getPartidosJugados()<<endl;
        cout<<"Tarjetas Rojas del Futbolista: "<<futbolistas[i].getTarjetasRojas()<<endl;
    }
}