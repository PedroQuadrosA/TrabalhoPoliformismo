#include <iostream>
using namespace std;
#ifndef Form_hpp
#define Form_hpp
//Aqui usamos o virtualvoid para modificar a função de calcular a area
class Form {

  public:
  virtual void calculateArea() = 0;
  protected:
  float area;
};
#endif