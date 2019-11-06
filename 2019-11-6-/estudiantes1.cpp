#include <iostream>
#include <vector>
#include <string>
#include <fstream>

struct Estudiante
{
  std::string name, id;
  std::vector<double> notas;
};

const int N_EST = 2;
const int N_NOTAS = 4;

void setup_notas (Estudiante & e, int NNOTAS);
void print_course (std::vector<Estudiante> & curso, std::string fname);
void read_course(std::vector <Estudiante> & curso, std::string fname);

int main (void)
{
  std::vector<Estudiante> curso1(N_EST);
  for (auto & est : curso1)
    {
      setup_notas (est, N_NOTAS);
    }

  curso1[0].name = "Est1";
  curso1[0].id = "456454";
  curso1[0].notas[0] = 4.5;
  curso1[0].notas[1] = 4.8;
  curso1[0].notas[2] = 4.1;
  curso1[0].notas[3] = 2.5;
  
  curso1[1].name = "Est2";
  curso1[1].id = "234464";
  curso1[1].notas[0] = 1.5;
  curso1[1].notas[1] = 3.8;
  curso1[1].notas[2] = 1.1;
  curso1[1].notas[3] = 4.5;
     
  print_course(curso1, "curso.txt");

  std::vector<Estudiante> curso2;
  read_course(curso2, "curso.txt");
  read_course(curso2, "curso_test.txt");

}

void setup_notas (Estudiante & e, int NNOTAS)
{
  e.notas.resize(NNOTAS);
}

void print_course (std::vector<Estudiante> & curso,std::string fname)
{
  std::ofstream fout (fname);
  fout << curso.size() << "\n";
  fout << curso[0].notas.size() << "\n";
  for (const auto & est : curso)
    {
      fout << est.name << "\n";
      fout << est.id << "\n";
      for (const auto & grade : est.notas)
	{
	  fout << grade << "\t";
	}
      fout << "\n";
    }

  fout.close();
}

void read_course(std::vector <Estudiante> & curso,std::string fname)
{
  std::ifstream fin (fname);
  int nest = 0;
  int nnotas = 0;
  fin >> nest;
  fin >> nnotas;
  curso.resize(nest);
  for (auto & est : curso)
    {
      setup_notas(est,nnotas);
    }
  for (auto & est : curso)
    {
      fin >> est.name;
      fin >> est.id;
      for (int ii = 0; ii< nnotas; ++ii)
	{
	  fin >> est.notas[ii];
	}
    }
  fin.close();
}
  
