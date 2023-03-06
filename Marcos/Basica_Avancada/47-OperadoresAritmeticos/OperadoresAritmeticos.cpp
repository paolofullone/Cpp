#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int Numero01, Numero02;
	int Soma, Resultado;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Soma = Numero01 + Numero02;
	std::cout << "A Soma dos dois Numeros: " << Soma << "\n";

	std::cout << std::endl;
	std::cout << "Subtração" << std::endl;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Soma = Numero01 - Numero02;
	std::cout << "A Subtração dos dois Numeros: " << Soma << "\n";

	std::cout << std::endl;
	std::cout << "Multiplicação" << std::endl;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Resultado = Numero01 * Numero02;
	std::cout << "A Multiplicacao dos dois Numeros: " << Resultado << "\n";


	float Num01, Num02;
	float Result;
	std::cout << std::endl;
	std::cout << "Divisão" << std::endl;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Num01;
	std::cout << "Numero01 = " << Num01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Num02;
	std::cout << "Numero02 = " << Num02 << "\n";
	Result = Num01 / Num02;
	std::cout << "A Divisao dos dois Numeros: " << Result << "\n";

	std::cout << std::endl;
	std::cout << "Mod" << std::endl;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Resultado = Numero01 % Numero02;
	std::cout << "O resto da divisão dos dois Numeros: " << Resultado << "\n";

	system("PAUSE");
}