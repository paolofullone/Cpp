#include <iostream>

void Funcao01();
void Funcao02(); // chamou dentro das funções 01, 02, 03
void Funcao03();
void Funcao04();

int VarGlobal{ 10 };

// debuga com a call stack exibindo (debug/windows/call stack ou ctrl+alt+c e vai debugando com f11
// vemos as funções sendo empilhadas na stack
// exibindo também o watch e autos vemos as variáveis sendo criadas e destruídas.

int main()
{
	int VarMain{ 00 };
	Funcao01();
	system("PAUSE");
	return 0;
}

void Funcao01()
{
	int Var01{ 01 };
	static int VarEstatica{ 20 };
	std::cout << "\n Chamando Funcao01\n";
	std::cout << "\n Endereco Var01: " <<
		&Var01 << "\n";
	VarEstatica++;
	std::cout << "\nValor VarEstatica: "
		<< VarEstatica << std::endl;
	Funcao02();
}

void Funcao02()
{
	int Var02{ 02 };
	std::cout << "\n Chamando Funcao02\n";
	std::cout << "\n Endereco Var02: "
		<< &Var02 << "\n";
	Funcao03();
}

void Funcao03()
{
	int Var03{ 03 };
	std::cout << "\n Chamando Funcao03\n";
	std::cout << "\n Endereco Var03: "
		<< &Var03 << "\n";
	Funcao04();
}

void Funcao04()
{
	int Var04{ 04 };
	std::cout << "\n Chamando Funcao04\n";
	std::cout << "\n Endereco Var04: "
		<< &Var04 << "\n";
}