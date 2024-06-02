#ifndef Item_h
#define Item_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Item{
protected:
    string texto;
public:
    //contructor y destructor
    Item();
    ~Item();
    //getter y setter
    string getTexto();
    void setTexto(string);
    //metodos
    virtual void unirTXT() = 0;
};
#endif //Item_h