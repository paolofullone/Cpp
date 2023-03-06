#include <iostream>
int main()
{
	//Se Numero01 for igual a Numero02 o resultado será 1 para verdade(true) ou 0 para false
	int Numero01 = 10, Numero02 = 20;
	bool Comparacao;
	Comparacao = (Numero01 = Numero02);
	std::cout << "Numero01 igual a Numero02?:  " << Comparacao << "\n";
	system("PAUSE");
	return 0;
}