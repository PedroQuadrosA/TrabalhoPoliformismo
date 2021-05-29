#include "Circle.hpp"
//Aqui pedimos para o usuário digitar o valor do raio, fazemos o calculo e mandamos a resposta para ele no final;
void Circle::calculateArea(){
  
  cout << "Digite o Raio: ";
  cin >> radius;
  area = 3.14*(radius*radius);
  cout << "A area do Circulo eh: " << area << endl << endl;
}