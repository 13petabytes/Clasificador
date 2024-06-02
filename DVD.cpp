#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "DVD.h"
using namespace std;

//constructor y destructor

DVD::DVD(){};
DVD::~DVD(){};

//getter y setter

void DVD::setDVDtxt(string dvdTXT_N){
  dvdTxt = dvdTXT_N;
}
string DVD::getDVDtxt(){
  return dvdTxt;
}

//metodos
void DVD::unirTXT(){
  texto = '2'+ dvdTxt;
}

void DVD::creadorDvdtxt(){
  int tipo;
  string nombre;
  cout<<"Incerte el tipo de DVD que va a archivar:"<<endl;
  cout<<"1) para pelicula"<<endl;
  cout<<"2) para serie"<<endl;
  cout<<"3) para videojuego"<<endl;
  cin>>tipo;
  while (tipo != 1 && tipo != 2 && tipo != 3){
    cout<<"Incerte una opción valida"<<endl;
    cout<<"1) para pelicula"<<endl;
    cout<<"2) para serie"<<endl;
    cout<<"3) para videojuego"<<endl;
    cin>>tipo;
  }
  if (tipo == 1){
    cout<<"Incerte el nombre de la pelicula:"<<endl;
    cin>>nombre;
  }
  else if(tipo == 2){
    cout<<"Incerte el nombre de la serie:"<<endl;
    cin>>nombre;
  }
  else if(tipo == 3){
    cout<<"Incerte el nombre del videojuego:"<<endl;
    cin>>nombre;
  }
  std::string tipostring = std::to_string(tipo);
  dvdTxt = tipostring + nombre;
}

