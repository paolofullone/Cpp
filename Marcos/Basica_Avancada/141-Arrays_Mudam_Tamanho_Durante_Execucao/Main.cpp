#include <iostream>
#include <vector>

using namespace std;

int main() {

	int lin, col, num;
	cout << "Qual e a quantidade de linhas?\n";
	cin >> lin;
	cout << "Qual e a quantidade de colunas?\n";
	cin >> col;

	//iniciando matriz dinâmica de inteiros com l linhas e c colunas e colocando zero nos elementos
	vector <vector<int> > Matriz(lin, vector<int>(col, 0));
	Matriz.begin();
	//Exibindo a Matrriz
	for (int i = 0; i < lin; i++) // Percorre a linha
	{
		for (int j = 0; j < col; j++) // Percorre a coluna
		{
			cout << Matriz[i][j] << " ";
		}
		cout << endl;
	}

	// Inserindo elementos na Matriz
	for (int i = 0; i < lin; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Digite o elemento [" << i << "]" << "[" << j << "]" << "da matriz: ";
			cin >> num;
			Matriz[i][j] = num;
			system("CLS"); //limpa a tela
		}
	}

	//Exibindo a Matrriz
	system("CLS");
	for (int i = 0; i < lin; i++) // Percorre a linha
	{
		for (int j = 0; j < col; j++) // Percorre a coluna
		{
			cout << Matriz[i][j] << " ";
		}
		cout << endl;
	}

	system("PAUSE > nul");
	return 0;

}