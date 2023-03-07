#include <iostream>

int main()
{
	int Num1, Num2;
	char Operacao;
	std::cout << "\nDigite Um Numero: ";
	std::cin >> Num1;
	std::cout << "\nDigite Outro Numero: ";
	std::cin >> Num2;
	std::cout << "\nQual Operacao Deseja Efetuar? \n+ Adicao \n- Substracao \n* Multiplicao\n/ Divisao?";
	std::cout << "\nDigite sua opcao: ";
	std::cin >> Operacao;

	//O Usuario vai digitar um caracter. Como um caracter ? mapeado como inteiro da tabela ascii o switch este tipo de express?o.
	//Logo Operacao pode ser + - * /

	switch (Operacao)
	{
		//Caso seja + esta linha ser? executada
	case '+':
		std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\nSubtracao de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\nMultiplicacao de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\nDivisao de Num1 / Num2 = " << Num1 / Num2;
		break;
		//Caso Operador n?o tenha um valor de nenhum destas casos + - * ou /
		//voc? pode colocar de forma opcional um valor que padr?o(default)
		//que ser? executado se nenhum dos casos sejam v?lidos
	default:
		std::cout << "\nVoce nao digitou um operador valido! ";
		break;
	}
	std::cout << "\n";
	system("PAUSE");

}