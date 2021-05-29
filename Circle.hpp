#include "Form.hpp"
// Aqui temos os atributos da classe do circulo
class Circle : public Form {

  public:
  void calculateArea();
  private:
  float radius;
  float area;
};