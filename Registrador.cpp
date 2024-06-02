#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Registrador.h"
using namespace std;

//constructor y destructor
Registrador::Registrador(){};

Registrador::~Registrador(){};

//getter y setter
void Registrador::setTxt(string Txt_N){
  txt = Txt_N;
}

string Registrador::getTxt(){
  return txt;
}

//metodos

void Registrador::archivar(){
  ofstream archivo("Archibaje.txt", ios::app);
  archivo<<endl<<txt;
  archivo.close();
}

void Registrador::buscar(string letra){
  string nombreb;
  int cajasb;
  cout<<"Incerte el nombre de la figura:"<<endl;
  cin>>nombreb;
  cout<<"La Figura sigue conservando su caja?"<<endl<<"1) si"<<endl<<"2) no"<<endl;
  cin>>cajasb;
  std::string cajastringb = std::to_string(cajasb);
  string busqueda = "3" + nombreb + cajastringb;
  ifstream archivo( "Archibaje.txt" );
  string lineaComparar;
  while(!archivo.eof()){
    archivo>>lineaComparar;
    if (lineaComparar == busqueda){
      cout<<"La Figura se encuentra en la base de datos"<<endl;
      break;
    }
  }
  cout<<"La Figura no se encuentra en la base de datos"<<endl;
}

void Registrador::buscar(int numero){
  int tipob;
  string nombreb;
  cout<<"Incerte el tipo de DVD que va a buscar:"<<endl;
  cout<<"1) para pelicula"<<endl;
  cout<<"2) para serie"<<endl;
  cout<<"3) para videojuego"<<endl;
  cin>>tipob;
  while (tipob != 1 && tipob != 2 && tipob != 3){
    cout<<"Incerte una opción valida"<<endl;
    cout<<"1) para pelicula"<<endl;
    cout<<"2) para serie"<<endl;
    cout<<"3) para videojuego"<<endl;
    cin>>tipob;
  }
  if (tipob == 1){
    cout<<"Incerte el nombre de la pelicula:"<<endl;
    cin>>nombreb;
  }
  else if(tipob == 2){
    cout<<"Incerte el nombre de la serie:"<<endl;
    cin>>nombreb;
  }
  else if(tipob == 3){
    cout<<"Incerte el nombre del videojuego:"<<endl;
    cin>>nombreb;
  }
  std::string tipostringb = std::to_string(tipob);
  string busqueda = "2" + tipostringb + nombreb;
  ifstream archivo( "Archibaje.txt" );
    string lineaComparar;
    while(!archivo.eof()){
      archivo>>lineaComparar;
      if (lineaComparar == busqueda){
        cout<<"El DVD se encuentra en la base de datos"<<endl;
        break;
      }
    }
    cout<<"El DVD no se encuentra en la base de datos"<<endl;
    
}

void Registrador::buscar(string letra, int numero){
  int tipo;
  string nombreb;
  cout<<"Incerte el tipo del Libro que va a buscar:"<<endl;
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
  cin>>nombreb;

  std::string tipostringb = std::to_string(tipo);
  
  string busqueda = "1" + tipostringb + nombreb;
  ifstream archivo( "Archibaje.txt" );
    string lineaComparar;
    while(!archivo.eof()){
      archivo>>lineaComparar;
      if (lineaComparar == busqueda){
        cout<<"El Libro se encuentra en la base de datos"<<endl;
        break;
      }
    }
    cout<<"El Libro no se encuentra en la base de datos"<<endl;

}