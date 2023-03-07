#include <iostream>
#include <string>

int main()
{
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo usuário e armazenada na variável SenhaDigitada for igual a senha de acesso as instruções após o if serão executadas pois a condição foi verdadeira true 1 */
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//através de outra variável booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	}
	/*Se a condição for falsa então as instruções do else serão executadas*/
	if (SenhaDigitada != SenhaDeAcesso)
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, força o fechamento da aplicação
	}

	return 0;
}