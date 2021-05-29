#include "Triangle.hpp"
// Aqui pedimos para usuário digitar uma base e uma altura, realizamos o calculo e então damos a resposta para ele na tela;
void Triangle::calculateArea()
{
  cout << "Digite a base do triangulo: ";
  cin >> base;
  cout << "Digite a altura do triangulo: ";
  cin >> altura;
  area = (base*altura)/2;
  cout << "O valor da area do Triangulo eh: " << area << endl << endl;
}