#include <iostream>

int main()
{
	int Numero01, Numero02;
	int Num1, Num2, Num3, Num4;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;

	std::cout << "O primeiro numero digitado foi: " << Numero01 << std::endl;
	std::cout << "O segundo numero digitado foi: " << Numero02 << std::endl;

	std::cout << std::endl;

	std::cout << "Digite 4 numeros separados por espaço: ";
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "Os numeros digitados foram: " << Num1 << ", " << Num2 << ", " << Num3 << ", " << Num4 << std::endl;
	std::cout << "A soma dos números digitados foi: " << Num1 + Num2 + Num3 + Num4 << std::endl << std::endl;
	system("Pause");
}