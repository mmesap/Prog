#include <iostream>
#include <vector>
#include <string>

struct Estudiante
{
  std::string name, id;
  int n_notas = 0;
  double* notas;
};

void setup_notas (Estudiante & e, int nnotas);

int main (void)
{
  Estudiante e1, e2;
  e1.name = "Nombre estudiante 1";
  e1.id = "10077887584";
  e1.notas[0] = 4.5;

  e2.name = "Nombre estudiante 2";
  e2.id = "7453435453";
}

void setup_notas (Estudiante & e, int nnotas)
{
  e.n_notas = nnotas;
  e.notas = new double [nnotas];
}
  

  
