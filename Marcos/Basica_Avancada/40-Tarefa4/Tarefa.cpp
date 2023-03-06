#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int Numero = 10;
	float NumeroF = 10.12;
	double NumeroD = 10.123456789;
	char Letra = 'A';

	std::cout << "Valor: " << Numero << " Tamanho: " << sizeof(Numero) << " Endereço: " << &Numero << std::endl;
	std::cout << "Valor: " << NumeroF << " Tamanho: " << sizeof(NumeroF) << " Endereço: " << &NumeroF << std::endl;
	std::cout.precision(11);
	std::cout << "Valor: " << NumeroD << " Tamanho: " << sizeof(NumeroD) << " Endereço: " << &NumeroD << std::endl;
	std::cout << "Valor: " << Letra << " Tamanho: " << sizeof(Letra) << " Endereço: " << (void*)&Letra << std::endl;


	system("Pause");
	return 0;
}