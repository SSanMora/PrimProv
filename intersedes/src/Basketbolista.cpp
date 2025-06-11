#include "Basketbolista.h"	

void Basketbolista::setPosicion(string posicion) {
    this->posicion = posicion;
}
string Basketbolista::getPosicion() {
    return posicion;
}
void Basketbolista::setPuntos(int puntos) {
    this->puntos = puntos;
}
int Basketbolista::getPuntos() {
    return puntos;
}
void Basketbolista::setAsistencias(int asistencias) {
    this->asistencias = asistencias;
}
int Basketbolista::getAsistencias() {
    return asistencias;
}
void Basketbolista::setRebotes(int rebotes) {
    this->rebotes = rebotes;
}
int Basketbolista::getRebotes() {
    return rebotes;
}
void Basketbolista::setRobos(int robos) {
    this->robos = robos;
}
int Basketbolista::getRobos() {
    return robos;
}
void Basketbolista::setTapones(int tapones) {
    this->tapones = tapones;
}
int Basketbolista::getTapones() {
    return tapones;
}
Basketbolista::Basketbolista() {
    apuntador1 = 0;
    apuntador2 = 1;
    posicion = "";
    puntos = 0;
    asistencias = 0;
    rebotes = 0;
    robos = 0;
    tapones = 0;
}
Basketbolista::Basketbolista(string nombre, int edad, string cedula, string codigo, int programa, string sexo, string posicion, int puntos, int asistencias, int rebotes, int robos, int tapones) {
    this->posicion = posicion;
    this->puntos = puntos;
    this->asistencias = asistencias;
    this->rebotes = rebotes;
    this->robos = robos;
    this->tapones = tapones;
}
void Basketbolista::crearBasketbolista(Basketbolista basketbolista[],int posicionBasket){
    string nombre;
    int edad;
    string cedula;
    string codigo;
    int programa;
    string sexo;
    string posicion;
    int puntos;
    int asistencias;
    int rebotes;
    int robos;
    int tapones;

    cout<<"Ingrese el Nombre del Basketbolista: ";
    cin>>nombre;

    cout<<"Ingrese la Edad del Basketbolista: ";
    cin>>edad;

    cout<<"Ingrese la Cedula del Basketbolista: ";
    cin>>cedula;

    cout<<"Ingrese el Codigo del Basketbolista: ";
    cin>>codigo;

    cout<<"Ingrese el Programa del Basketbolista: ";
    cin>>programa;

    cout<<"Ingrese el Sexo del Basketbolista: ";
    cin>>sexo;

    cout<<"Ingrese la Posicion del Basketbolista: ";
    cin>>posicion;

    cout<<"Ingrese la cantidad de Puntos del Basketbolista: ";
    cin>>puntos;

    cout<<"Ingrese la cantidad de Asistencias del Basketbolista: ";
    cin>>asistencias;

    cout<<"Ingrese la cantidad de Rebotes del Basketbolista: ";
    cin>>rebotes;

    cout<<"Ingrese la cantidad de Robos del Basketbolista: ";
    cin>>robos;

    cout<<"Ingrese la cantidad de Tapones del Basketbolista: ";
    cin>>tapones;

    
    basketbolista[posicionBasket].setNombre(nombre);
    basketbolista[posicionBasket].setEdad(edad);
    basketbolista[posicionBasket].setCedula(cedula);
    basketbolista[posicionBasket].setCodigo(codigo);
    basketbolista[posicionBasket].setPrograma(programa);
    basketbolista[posicionBasket].setSexo(sexo);
    basketbolista[posicionBasket].setPosicion(posicion);
    basketbolista[posicionBasket].setPuntos(puntos);
    basketbolista[posicionBasket].setAsistencias(asistencias);
    basketbolista[posicionBasket].setRebotes(rebotes);
    basketbolista[posicionBasket].setRobos(robos);
    basketbolista[posicionBasket].setTapones(tapones);

    cout<<"Basketbolista creado correctamente"<<endl;
}

void Basketbolista::ModificarBasketbolista(Basketbolista basketbolista[],int posicionBasket){
    string nombre;
    cout<<"Ingrese el Nombre del Basketbolista que desea modificar: ";
    cin>>nombre;

    for(int i =0;i < posicionBasket;i++){
        if(basketbolista[i].getNombre() == nombre){
            cout<<"Ingrese el nuevo Nombre del Basketbolista: ";
            cin>>nombre;
            basketbolista[i].setNombre(nombre);
        }
    }
}

void Basketbolista::listarBasketbolista(Basketbolista basketbolista[],int posicionBasket){
    for(int i =0;i < posicionBasket;i++){
        cout<<"Nombre: "<<basketbolista[i].getNombre()<<endl;
        cout<<"Edad: "<<basketbolista[i].getEdad()<<endl;
        cout<<"Cedula: "<<basketbolista[i].getCedula()<<endl;
        cout<<"Codigo: "<<basketbolista[i].getCodigo()<<endl;
        cout<<"Programa: "<<basketbolista[i].getPrograma()<<endl;
        cout<<"Sexo: "<<basketbolista[i].getSexo()<<endl;
        cout<<"Posicion: "<<basketbolista[i].getPosicion()<<endl;
        cout<<"Puntos: "<<basketbolista[i].getPuntos()<<endl;
        cout<<"Asistencias: "<<basketbolista[i].getAsistencias()<<endl;
        cout<<"Rebotes: "<<basketbolista[i].getRebotes()<<endl;
        cout<<"Robos: "<<basketbolista[i].getRobos()<<endl;
        cout<<"Tapones: "<<basketbolista[i].getTapones()<<endl;
    }
}

void Basketbolista::MostrarMasPuntos(Basketbolista basketbolista[],int posicionBasket){
    for(int i =0;i < posicionBasket; i++){ //Buble Short
        while(apuntador2 < posicionBasket){
            if(basketbolista[apuntador1].getPuntos() < basketbolista[apuntador2].getPuntos()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Basketbolista auxiliar = basketbolista[apuntador2];//Ordeno Objetos Completos
                basketbolista[apuntador2] = basketbolista[apuntador1];
                basketbolista[apuntador1]=auxiliar;
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
    cout<<"El jugador con mas puntos es: "<<basketbolista[0].getNombre()<<" con: "<<basketbolista[0].getPuntos()<<" Puntos" <<endl;
}

void Basketbolista::MostrarMasAsistidor(Basketbolista basketbolista[],int posicionBasket){
    for(int i =0;i < posicionBasket; i++){ //Buble Short
        while(apuntador2 < posicionBasket){
            if(basketbolista[apuntador1].getAsistencias() < basketbolista[apuntador2].getAsistencias()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Basketbolista auxiliar = basketbolista[apuntador2];//Ordeno Objetos Completos
                basketbolista[apuntador2] = basketbolista[apuntador1];
                basketbolista[apuntador1]=auxiliar;
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
    cout<<"El jugador con mas asistencias es: "<<basketbolista[0].getNombre()<<" con: "<<basketbolista[0].getAsistencias()<<" Asistencias" <<endl;
}

void Basketbolista::MostrarMasRebotesHechos(Basketbolista basketbolista[],int posicionBasket){
    for(int i =0;i < posicionBasket; i++){ //Buble Short
        while(apuntador2 < posicionBasket){
            if(basketbolista[apuntador1].getRebotes() < basketbolista[apuntador2].getRebotes()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Basketbolista auxiliar = basketbolista[apuntador2];//Ordeno Objetos Completos
                basketbolista[apuntador2] = basketbolista[apuntador1];
                basketbolista[apuntador1]=auxiliar;
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
    cout<<"El jugador con mas rebotes es: "<<basketbolista[0].getNombre()<<" con: "<<basketbolista[0].getRebotes()<<" Rebotes" <<endl;
}

void Basketbolista::MostrarMasRobos(Basketbolista basketbolista[],int posicionBasket){
    for(int i =0;i < posicionBasket; i++){ //Buble Short
        while(apuntador2 < posicionBasket){
            if(basketbolista[apuntador1].getRobos() < basketbolista[apuntador2].getRobos()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Basketbolista auxiliar = basketbolista[apuntador2];//Ordeno Objetos Completos
                basketbolista[apuntador2] = basketbolista[apuntador1];
                basketbolista[apuntador1]=auxiliar;
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
    cout<<"El jugador con mas robos es: "<<basketbolista[0].getNombre()<<" con: "<<basketbolista[0].getRobos()<<" Robos" <<endl;
}

void Basketbolista::MostrarMasTapones(Basketbolista basketbolista[],int posicionBasket){
    for(int i =0;i < posicionBasket; i++){ //Buble Short
        while(apuntador2 < posicionBasket){
            if(basketbolista[apuntador1].getTapones() < basketbolista[apuntador2].getTapones()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Basketbolista auxiliar = basketbolista[apuntador2];//Ordeno Objetos Completos
                basketbolista[apuntador2] = basketbolista[apuntador1];
                basketbolista[apuntador1]=auxiliar;
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
    cout<<"El jugador con mas tapones es: "<<basketbolista[0].getNombre()<<" con: "<<basketbolista[0].getTapones()<<" Tapones" <<endl;
}


