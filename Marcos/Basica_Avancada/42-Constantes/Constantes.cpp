#include <iostream>
#include <locale>

// se quiser usar o define ao invés do const int NUM_VIDAS, podemos usar o define
#define NUM_VIDAS_DEFINE 10
// Observar que o #Define não tem ; no final

int main() {
	setlocale(LC_ALL, "Portuguese");

	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	int TotalDeVidasDefine;
	TotalDeVidas = NUM_VIDAS - 1;
	TotalDeVidasDefine = NUM_VIDAS_DEFINE - 1;
	std::cout << "Total de vidas: " << TotalDeVidas << std::endl;
	std::cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << std::endl;
	std::cout << "Endereço de memória de NUM_VIDAS: " << &NUM_VIDAS << std::endl << std::endl;

	std::cout << "Total de vidas: " << TotalDeVidasDefine << std::endl;
	std::cout << "Valor constante NUM_VIDAS_DEFINE: " << NUM_VIDAS_DEFINE << std::endl;
	

	system("Pause");
}