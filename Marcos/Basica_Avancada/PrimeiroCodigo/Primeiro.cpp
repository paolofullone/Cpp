#include <iostream>
// A diretiva #include é usada para incluir arquivos de cabeçalho iostream em um programa C ++.
// ctrl + enter no iostream mostra o código

int main()
// função principal do programa
{
	std::cout << "Paolo Enrico Iacono Fullone - 44 anos" << std::endl;
	// cout é o comando de saída de dados, neste caso está solicitando para imprimir na tela o texto entre aspas duplas
	// endl é o comando de quebra de linha
	std::cout << "Frase Preferida: Seja você quem for, seja qual for a posição social que você tenha na vida, a mais alta ou a mais baixa, tenha sempre como meta muita força, muita determinação e sempre faça tudo com muito amor e com muita fé em Deus, que um dia você chega lá. De alguma maneira você chega lá." << std::endl;
	system("color 0B");
	system("PAUSE");
	// chama o shell do windows e coloca o comando pause, funciona maiúscula e minúscula nesse config.
	return 0;
	// return 0 é o comando de retorno da função principal para indicar que o programa foi executado com sucesso
}


// ctrl + shift + b - compila
// ctrl + F5 - executa
// ctrl + shift + enter - maximias e minimiza janela de código
