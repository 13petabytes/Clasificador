#ifndef Figuras_h
#define Figuras_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <memory>
#include <string>
#include "Item.h"
using namespace std;

class Figuras:public Item{
private:
  string figuraTxt;
public:
  //constructor y destructor
  Figuras();
  ~Figuras() override;
  //getter y setter
  string getFiguraTxt();
  void setFiguraTxt(string);
  //metodos
  void unirTXT() override;
  void crearItem() override;
};
#endif //Figuras_h
