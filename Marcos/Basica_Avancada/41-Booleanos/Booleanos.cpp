#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	bool bAchou;

	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	std::cout << "\"Qualquer coisa que não seja 0 é true:\"" << std::endl;
	bAchou = "Qq Coisa que não seja 0 é true";
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;


	std::cout << "1 é true, 0 é false. Qualquer outro valor é true." << std::endl;

	system("Pause");
	return 0;
}