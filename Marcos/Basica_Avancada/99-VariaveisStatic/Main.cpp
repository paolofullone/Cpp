#include <iostream>

int ContadorChamadas()
{
	// Variavel estática: Significa que após a saída da função o valor desta variável não será perdido.
	// static indica que este valor seja mantido mesmo após a função ser encerrada
	static int NumChamadasDaFuncao = 0; // se tirar o static, vai printar 1 cinco vezes, pois a variável será criada 5 vezes
	// com o static, a variável é mantida e o compilador pula a criação da variável na linha acima quando passa no segundo laço em diante.
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{
	// esta variável i é destruída após a execução do laço for, a variável NumChamadasDaFuncao criada acima não é destruída.
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;
}