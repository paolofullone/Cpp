#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num01, num02, num03, result;
	char Resposta;

	do {
		std::cout << "Digite os três numeros separados por espaço" << std::endl;
		std::cin >> num01 >> num02 >> num03;
		result = (num01 + num02 + num03) / 3;
		std::cout << "Os números digitados foram: " << num01 << ", " << num02 << ", " << num03 << std::endl;
		std::cout << "A media aritmetica dos numeros é: " << result << std::endl;

		std::cout << "\nDeseja calcular outra Média Artmética? (Responda S para Sim e N para não:) ";
		std::cin >> Resposta;

	} while (Resposta == 's' || Resposta == 'S');

	std::cout << "\nSaindo do programa...\n";
	system("pause");
	return 0;
}