#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int soma = 0;
	for (int num = 1; num <= 100; num++)
	{
		soma = soma + num;
		std::cout << "Número: " << num << " | " << "Soma: " << soma << "\n";
	}
	std::cout << "\nA soma dos numeros de 1 a 100: " << soma << "\n";
	system("PAUSE");
	return 0;
}