#include <iostream>
#include <string>
#include <vector> // necessário para usar vetores dinâmicos que mudam de tamanho durante execução do programa
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	std::string NomeAluno;
	std::cout << "\nDigite o nome do Aluno: ";
	std::getline(std::cin, NomeAluno); // Para poder receber nome e sobrenome (frases)


	double  Nota{ 0.0 }, Soma{ 0.0 }, Media{ 0.0 };
	//double Notas[QntNotas]; // esse era estático
	std::vector<double> Notas; // Agora seu vetor será dinâmico

	int QntNotas{ 0 };
	std::cout << "\nQuantas notas serao inseridas? ";
	std::cin >> QntNotas;

	for (int n = 0; n < QntNotas; n++)
	{
		std::cout << "Aluno: " << NomeAluno;
		std::cout << "Insira a nota " << (n + 1) << ": ";
		std::cin >> Nota; // recebe a nota
		Notas.push_back(Nota); // insere a nota recebida no vetor dinâmico
		Soma += Notas.at(n); // Soma o valor da nota recebida com a variavel acumuladora soma
		system("CLS");
	}

	Media = Soma / QntNotas;

	std::cout << "****Suas Notas****\n";
	for (int n = 0; n < QntNotas; n++)
	{

		//aqui o vetor dinâmico será varrido e cada elemento será colocado na tela
		//Os elementos são acessíveis através de NomeVetorDinamica.at(indice) neste caso Notas.at(n)
		std::cout << "Nota " << (n + 1) << ": " << Notas.at(n) << "\n";

	}



	if (Media > 6.0)   // neste caso é round(Media) você está querendo arrendodar valor de media e assim Media deve ser o parâmetro a ser recebido pela função de arrendodamento round
	{
		std::cout << "\nO Aluno " << NomeAluno << " foi APROVADO com media " << round(Media) << ", Parabéns !!!\n";
	}
	else
	{
		std::cout << "\nO Aluno " << NomeAluno << " foi REPROVADO com media " << round(Media) << ", dedique-se mais no proximo ano!\n";

	}

	system("PAUSE");
	return 0;
}