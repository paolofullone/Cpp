#include <iostream>

int main()
{
	/*Declarei uma variável do tipo Matriz com 5 linhas
	e 5 colunas como o C++ o Índices começa com zero as linhas e colunas
	vão do índice 0 a 4
	ou seja o computador irá criar esta estrutura de dados na memória:
	[0][0] [0][1] [0][2] [0][3] [0][4]
	[1][0] [1][1] [1][2] [1][3] [1][4]
	[2][0] [2][1] [2][2] [2][3] [2][4]
	[3][0] [3][1] [3][2] [3][3] [3][4]
	[4][0] [4][1] [4][2] [4][3] [4][4]
	*/

	int Matriz[5][5];
	//Percorremos a Matriz pelas suas linhas e colunas
	//i vai de 0 até 4 pois quando atingir 5 5< 5 (f) e ai sai do loop
	for (int i = 0; i < 5; i++)
	{
		//For aninhado ou seja, i = 0 j vai de 0 até 4
		for (int j = 0; j < 5; j++)
		{
			//i < j cai no caso do 1
			if (i < j)
			{
				//colocamos nos elementos da matriz que possuem índice i > j o valor 1
				Matriz[i][j] = 1;
				//neste caso serão os elementos de índice:
				  /*       [0][1] [0][2] [0][3] [0][4]
								  [1][2] [1][3] [1][4]
										 [2][3] [2][4]
												[3][4]*/

			}
			//i == j cai no caso da diagonal 0,0 1,1 2,2 3,3 e 4,4
			else if (i == j)
			{
				//colocamos nos elementos da matriz que possuem indices i == j o valor 0
				Matriz[i][j] = 0;

				/* Neste caso serão os elementos de índice:
				  [0][0]
						 [1][1]
								[2][2]
									   [3][3]
											 [4][4]*/




			}
			//i > j cai no caso do -1
			else if (i > j)
			{

				Matriz[i][j] = -1;
				/*Neste caso serão os elementos de índice

				  [1][0]
				  [2][0] [2][1]
				  [3][0] [3][1] [3][2]
				  [4][0] [4][1] [4][2] [4][3]
				*/

			}
		} //fim for j

	} //fim for i
	// Exibindo elementos da Matriz
	for (int i = 0; i < 5; i++)
	{
		std::cout << " ";
		//For aninhado ou seja, i = 0 j vai de 0 até 4
		for (int j = 0; j < 5; j++)
		{
			//Este if é necessário pois precisamos dar apenas um espaço quando o valor a ser exibido for -1
			//No caso desta matriz os índices onde i<j são -1 e o sinal de - ocupa um lugar do caractere espaço, se colocássemos com dois espaços ficaria desalinhada a matriz

			if (i > j)
			{
				std::cout << Matriz[i][j] << " ";
			}
			else
			{
				std::cout << " " << Matriz[i][j] << " ";
			}
		}
		std::cout << "\n";
	}
	system("PAUSE");
	return 0;
}