#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Libro.h"
using namespace std;

//constructor y destructor
Libro::Libro(){};

Libro::~Libro(){};

//getter y setter
void Libro::setLibroTxt(string librotxt_N){
  libroTxt = librotxt_N;
}

string Libro::getLibroTxt(){
  return libroTxt;
}

//metodos
void Libro::unirTXT(){
  texto = '1'+ libroTxt;
}

void Libro::creadorLibrotxt(){
  int tipo;
  string nombre;
  cout<<"Incerte el tipo del Libro que va a archivar:"<<endl;
  cout<<"1) para psicologuía"<<endl;
  cout<<"2) para derecho"<<endl;
  cin>>tipo;
  while (tipo != 1 && tipo != 2){
    cout<<"Incerte una opción valida"<<endl;
    cout<<"1) para psicologuía"<<endl;
    cout<<"2) para derecho"<<endl;
    cin>>tipo;
  }
  cout<<"Incerte el nombre del Libro:"<<endl;
  cin>>nombre;
  
  std::string tipostring = std::to_string(tipo);
  libroTxt = tipostring + nombre;
}