#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "1 - Ingresso Normal" << std::endl;
		std::cout << "2 - Ingresso VIP" << std::endl;
		std::cout << "3 - Sair" << std::endl;
		std::cout << "Escolha uma opcao: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1:
			std::cout << "Ingresso Normal comprado" << std::endl;
			break;
		case 2:
			std::cout << "Ingresso VIP comprado" << std::endl;
			break;
		case 3:
			std::cout << "Saindo..." << std::endl;
			break;
		default:
			std::cout << "Opcao invalida" << std::endl;
			break;
		}
		std::cout << std::endl;

	} while (escolha != 3);
	system("PAUSE");
	return 0;
}

// estrutura muito usada para menus