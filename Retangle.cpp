#include "Retangle.hpp"
// Aqui pedimos os dados da base e da altura do retangulo para o usuario realizamos o calculo da area e mandamos um feedback para ele com a resposta
void Retangle::calculateArea(){

  cout << "Digite a base do retangulo: ";
  cin >> base;
  cout << "Digite a altura do retangulo: ";
  cin >> altura;
  area = base*altura;
  cout << "O valor da area do retangulo eh: " << area << endl << endl;
}
