#include <iostream>

int main()
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite Primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero02;

	//Neste caso o operador ternario ? est? sendo utilizado para
	//Atribuir um valor a uma vari?vel
	//Se Numero01 for maior que Numero02 Maior numero recebe Valor de Numero01. Caso contr?rio(Sen?o) MaiorNumero Recebe Numero02
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	std::cout << "\nMaior Numero Digitado: " << MaiorNumero << "\n";
	//Aqui o operador ? esta sendo utilizado para decidir que comando ser? executado. Se for True o primeiro std:: vai para tela
	//Se for Falso o segundo std vai para a tela
	(Numero01 > Numero02) ? std::cout << "\nNumero01 Maior que Numero02\n" : std::cout << "Numero02 Maior que Numero01\n";

	system("PAUSE");
}