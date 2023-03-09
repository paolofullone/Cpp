///* ENTRADA: dois números reais
//PROCESSAMENTO:funcoes que calculam soma, subtração, multiplicação e divisão
//SAÍDA:  (num1 + num2,  num1 – num2, num1 * num2, num1/num2)
//*/
//#include <iostream>
////PROTÒTIPOS DAS FUNCOES
//float Soma(float num1, float num2);
//float Subtracao(float num1, float num2);
//float Multiplicacao(float num1, float num2);
//float Divisao(float num1, float num2);
//
//
//int main()
//{
//	//aqui declare como float
//	float Num1, Num2;
//
//	std::cout << "\nDigite Primeiro Numero: ";
//	std::cin >> Num1;
//
//	std::cout << "\nDigite Segundo Numero: ";
//	std::cin >> Num2;
//
//	std::cout << "\n*** Resultado das operacoes***\n";
//	std::cout << Num1 << " e " << Num2 << "\n";
//	std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
//	std::cout << "Substracao: " << Subtracao(Num1, Num2) << "\n";
//	std::cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
//	std::cout << "Divisao: " << Divisao(Num1, Num2) << "\n";
//
//	system("PAUSE");
//	return 0;
//}
//
//float Soma(float num1, float num2)
//{
//	return num1 + num2;
//}
//
//float Subtracao(float num1, float num2)
//{
//	return num1 - num2;
//}
//
//float Multiplicacao(float num1, float num2)
//{
//	return num1 * num2;
//}
//
//float Divisao(float num1, float num2)
//{
//	return num1 / num2;
//}


// otimizando usando switch / case
#include <iostream>

double Soma(char Operacao, double Num1, double Num2);

int main()
{
	double Num1, Num2;
	char Operacao;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Num2;
	std::cout << "\n + Soma \n - Subtracao \n * Multiplicacao \n / Divisao: ";
	std::cout << "\n\n Digite o simbolo da operacao desejada: ";
	std::cin >> Operacao;
	std::cout << "\nO resultado da operacao: " << Soma(Operacao, Num1, Num2);
	return 0;
}

// Aqui o case vai selecionar a operação e fará o digitado e selecionado pelo usuário
double Soma(char Operacao, double Num1, double Num2)
{
	switch (Operacao)
	{
	case '+': return Num1 + Num2;
	case '-': return Num1 - Num2;
	case '*': return Num1 * Num2;
	case '/': return Num1 / Num2;
	default: std::cout << "Operador Invalido";
		break;
	}
	return 0;
}