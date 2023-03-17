#include <iostream>
#include "Pessoa.h"
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main()
{
	Professor Teacher("Pacheco", 123456, 987654, "Udemy");
	Aluno Student("Skywalker", 888888, 999999, "Jedi");
	Bibliotecario ObiWan("Kenobi", 11111, 22222);

	Teacher.MostrarDados();
	Student.MostrarDados();
	ObiWan.MostrarDados();

	system("PAUSE");
	return 0;
}