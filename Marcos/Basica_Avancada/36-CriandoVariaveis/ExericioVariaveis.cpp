#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int NumComputadores = 100;
	int SerialComputadores = 11111;
	int Numero;
	float Numero2;
	double Numero3 = 45345.123456789;
	char Caractere = '3';
	char Caracter2 = 'A';

	Numero = 45;
	Numero2 = 55.56;

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "\tValor de NumComputadores = " << NumComputadores << std::endl;
	std::cout << "\tValor de SerialComputadores = " << SerialComputadores << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;

	std::cout << std::endl;

	std::cout << "Valor de Numero = " << Numero << std::endl;
	std::cout << "Tamanho da variavel Numero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereço Carregado na Memória: " << &Numero << "\n";

	std::cout << std::endl;

	std::cout << "Valor de Numero2 = " << Numero2 << std::endl;
	std::cout << "Tamanho da variavel Numero2: " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereço Carregado na Memória: " << &Numero2 << "\n";

	std::cout << std::endl;

	// Numero3 with 10 decimal places
	std::cout.precision(10);
	std::cout << "Com precision 10 não aparece o número completo" << std::endl;
	std::cout << "Valor de Numero3 = " << Numero3 << std::endl;
	std::cout << "Com precision 13 aparece o número completo" << std::endl;
	std::cout.precision(13);
	std::cout << "Valor de Numero3 = " << Numero3 << std::endl;
	std::cout << "Tamanho da variavel Numero3: " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereço Carregado na Memória: " << &Numero3 << "\n";

	printf("\n");

	printf("Valor de Caractere = %c\n", Caractere);
	printf("Tamanho da variavel Caractere: %d Bytes\n", sizeof(Caractere));
	printf("Endereço Carregado na Memória: %p\n", &Caractere);

	// ou na outra sintaxe:
	std::cout << "Valor de Caractere = " << Caractere << std::endl;
	std::cout << "Tamanho da variavel Caractere: " << sizeof(Caractere) << " Bytes" << "\n";
	std::cout << "Endereço Carregado na Memória: " << (void*)&Caractere << "\n"; // o void * tem a ver com ponteiros, não esclareceu na aula 39

	printf("\n");

	printf("Valor de Caracter2 = %c\n", Caracter2);
	printf("Tamanho da variavel Caracter2: %d Bytes\n", sizeof(Caracter2));
	printf("Endereço Carregado na Memória: %p\n", &Caracter2);

	system("Pause");
	return 0;
}