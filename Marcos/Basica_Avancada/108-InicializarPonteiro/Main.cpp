#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//então para declarar uma variável que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da variável>
	int* ptr{ nullptr }; // apontando para o endereço 0, que é mais seguro que não apontar para lugar nenhum.
	//obs: a posição do asterisco neste caso não importa
	//int* ptr; //dá no mesmo!

	std::cout << "Endereço de ptr apontando para nullptr: " << &ptr << std::endl;
	std::cout << "Valor de ptr: " << ptr << "\n";

	int Numero = 101;
	//Aqui vamos colocar na tela o endereço de memória
	//da variável Número. Ou seja onde ela está carregada na memória RAM. Lembre-se que o que vai para tela é o primeiro endereço da variável número
	//pois ela ocupa 4 endereços pois tem 4 bytes de tamanho

	// para colocar algo dentro da variável ponteiro
	Numero = 102;
	ptr = &Numero; //aqui estamos colocando o endereço de memória da variável Número dentro da variável ponteiro
	std::cout << "\nEndereço de ptr apontando para Número, sendo que Número recebeu o valor 102: " << &ptr << std::endl;
	std::cout << "Valor de ptr: " << ptr << std::endl;

	std::cout << "Endereço de Número: " << &Numero;
	std::cout << "\nValor de Número: " << Numero << "\n";


	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
	//ou seja qual lugar da RAM ele está alocado?
	//veja nós ainda não estamos colocando na tela nada que esteja dentro das variáveis.
	//pois para colocar o que está dentro das variáveis
	//nós usamos apenas o nome da variável!
	//exemplo std::cout << Numero
	//std::cout << ptr

	std::cout << "\nEndereço de ptr: " << &ptr << "\n";

	system("PAUSE");
	return 0;
}