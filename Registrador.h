#ifndef Registrador_h
#define Registrador_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Registrador{
protected:
  string txt;
public:
  //constructor y destructor
  Registrador();
  ~Registrador();
  //getter y setter
  string getTxt();
  void setTxt(string);
  //metodos
  void archivar();
  void buscar(string);
  void buscar(int);
  void buscar(string,int);
};
#endif //Registrador_h