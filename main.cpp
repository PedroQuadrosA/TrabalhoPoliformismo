//Nome: Pedro Quadros Alves

#include <iostream>
#include "Circle.hpp"
#include "Retangle.hpp"
#include "Triangle.hpp"
// Aqui nós apenas iremos apenas chamar as funções
int main() {
  cout << "\nEste programa ira utilizar poliformismo para calcular a area de um Circulo, Retangulo e a de um Triangulo\n\n";
  Circle area;
  Retangle areaR; 
  Triangle areaT;

  area.calculateArea();
  areaR.calculateArea();
  areaT.calculateArea();

  return 0;
}