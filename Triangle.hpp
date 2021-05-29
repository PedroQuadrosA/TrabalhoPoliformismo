#include "Form.hpp"
// Aqui é onde é atribuido os atributos da classe do triangulo.
class Triangle : public Form
{
  public:
  void calculateArea();
  private:
  float base;
  float altura;
  float area;
};