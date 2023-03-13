#include <iostream>

int main()
{
	int Vetor[] = { 1, 23, -78, 900, 234 };
	int* ptr;
	// Neste momento ptr passa a apontar para o endere�o do Vetor. Lembre-se que o endere�o de uma vari�vel � o primeiro endere�o da mesma
	// Logo isso � o mesmo que ptr = &Vetor[0];
	// ptr = Vetor;
	ptr = Vetor;
	//O nome de um vetor � o mesmo que &Vetor[0]

	std::cout << "Vetor: ";
	for (int i = 0; i < std::size(Vetor); i++)
	{
		std::cout << Vetor[i] << " ";
	}
	std::cout << "\n";


	for (int i = 0; i < std::size(Vetor); i++)
	{
		std::cout << "Vetor[" << i << "] Endereco: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
	}
	std::cout << "\n*** Enderecos Com Aritmetica de Ponteiros***\n";
	std::cout << "Valor Contido em ptr: " << ptr << "\n";
	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
	// (ptr + 0 ) pega o endere�o de ptr e adiciona zero logo � o endere�o do primeiro elemento do vetor, j� que ptr aponta para o primeiro elemento ptr = Vetor ou ptr = &Vetor[0]

	std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
	// (ptr + 1) pega o endere�o de ptr e desloca uma unidade de tamanho do tipo do ponteiro (se for int, s�p 4 bytes) logo ptr + 1 � o mesmo que ptr + 4 bytes que vai apontar para o pr�ximo item do array.
	// ptr + 1 N�O modifica o endere�o do ponteiro. ptr = ptr + 1, a� sim modificaria o valor do ponteiro.
	// como ptr � do tipo int, ou seja aponta para vari�veis do tipo int, nesta arquitetura ele vai somar 4 bytes ao endere�o de ptr

	std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
	// (ptr + 2) pega o endere�o de ptr e desloca duas unidades de tamanho do tipo do ponteiro como ptr � do tipo int, ou seja aponta para vari�veis do tipo int, nesta arquitetura ele vai somar 8 bytes ao endere�o de ptr
	// se estiver na primeira posi��o do array, vai avan�ar para a terceira.

	// *(ptr + 2) faz o desreferenciamento do ponteiro. Ou seja primeiro ele faz a artim�tica do ponteiro e vai somar 8 bytes a ptr e com isso vai chegar at� o elemento de �ndice 2

	std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
	// idem para os demais comandos!
	std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";

	// MAs observe que o valor de ptr n�o mudou.. O que est� dentro de ptr n�o ir� mudar!
	// pois o comando apenas usa o valor de ptr! O comando n�o est� indicando para que seja mudado nada na mem�ria
	// Para isso seria: ptr = ptr + 2 por exemplo... ou atrav�s de ++ ou --
	// Ex: ptr++ agora sim iria mudar pois ptr++ � o  mesmo que ptr = ptr + 1;
	std::cout << "Valor Contido em ptr: " << ptr << "\n";
	// obs: (ptr + 0) � o mesmo que ptr 
	ptr++;
	std::cout << "Valor Contido em ptr depois de ptr++: " << ptr << "\n";
	// agora mudou pois ptr++ � o mesmo que ptr + 1 que na aritm�tica de ponteiros � pegar
	// o valor de ptr e somar o tamanho do tipo de dados que ele aponta que no caso � de 4 bytes!

	ptr = &Vetor[3]; //ptr passa a apontar para 900
	ptr--; //decrementa e aponta para -78; ou Vetor[2];
	std::cout << "Valor do Apontado por ptr: " << *ptr << "\n";



	system("PAUSE");
	return 0;
}


// vetor[i] � o mesmo que *(vetor + i)
// os 3 ultimos resultados no console mostram o incremento de 4 bytes
// os 2 primeiros dá pra somar usando a calculadora "programador" do windows, que tem suporte a operações com hexadecimais.