#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Item.h"
using namespace std;

//constructor y destructor

Item::Item(){};

Item::~Item(){};

//getter y setter

void Item::setTexto(string texto_N){
  texto = texto_N;
}
string Item::getTexto(){
  return texto;
}
