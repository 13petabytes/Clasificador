#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Figuras.h"
using namespace std;

//constructor y destructor
Figuras::Figuras(){};

Figuras::~Figuras(){};

//getter y setter
void Figuras::setFiguraTxt(string figuratxt_N){
  figuraTxt = figuratxt_N;
}

string Figuras::getFiguraTxt(){
  return figuraTxt;
}

//metodos
void Figuras::unirTXT(){
  texto = '3'+ figuraTxt;
}

void Figuras::crearItem(){
  string nombre;
  int cajasint;
  cout<<"Incerte el nombre de la figura:"<<endl;
  cin>>nombre;
  cout<<"La Figura sigue conservando su caja?"<<endl<<"1) si"<<endl<<"2) no"<<endl;
  cin>>cajasint;
  std::string cajastring = std::to_string(cajasint);
  figuraTxt = nombre + cajastring;
}

