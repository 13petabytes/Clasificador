#ifndef DVD_h
#define DVD_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <memory>
#include <string>
#include "Item.h"
using namespace std;

class DVD:public Item{
private:
  string dvdTxt;
public:
  //constructor y destructor
  DVD();
  ~DVD() override;
  //getter y setter
  string getDVDtxt();
  void setDVDtxt(string);
  //metodos
  void unirTXT() override;
  void crearItem() override;
};
#endif //DVD_h
