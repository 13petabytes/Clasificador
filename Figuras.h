#ifndef Figuras_h
#define Figuras_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Item.h"
using namespace std;

class Figuras:public Item{
protected:
  string figuraTxt;
public:
  //constructor y destructor
  Figuras();
  ~Figuras();
  //getter y setter
  string getFiguraTxt();
  void setFiguraTxt(string);
  //metodos
  void unirTXT() override;
  void creadorFiguraTxt();
};
#endif //Figuras_h