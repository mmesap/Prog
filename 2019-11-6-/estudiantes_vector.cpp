#include <iostream>
#include <vector>
#include <string>

//ARREGLAR CODIGO
struct Estudiante
{
  std::string name, id;
  int n_notas = 0;
  std::vector<double> notas;
};

void setup_notas (Estudiante & e, int NNOTAS);

int main (void)
{
  e1.name = "Nombre estudiante 1";
  e1.id = "10077887584";
  setup_notas(e1,5);
  e1.notas[0] = 4.5;

  e2.name = "Nombre estudiante 2";
  e2.id = "7453435453";
}

void setup_notas (Estudiante & e, int NNOTAS)
{
  e.n_notas = NNOTAS;
  e.notas.resize(NNOTAS);
}
  

  
