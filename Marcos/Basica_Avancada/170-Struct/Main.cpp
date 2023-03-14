#include <iostream>
struct Data // se alterar para class, dá erro na main, pois a classe por padrão é privada e a struct por padrão é pública.
{
	//Como não espefiquei o modificador de acesso
	// na struct ele será por padrão public:
	int Dia;
	int Mes;
	int Ano;
	Data() : Dia(10), Mes(8), Ano(2023) {}
};

//desta forma acima você pode iniciar os valores ao instanciar e usar chaves

int main()
{
	Data Agenda; /* Você pode também inicializar uma struct desta forma:  Data Agenda = {22, 07, 2013};*/
	// Agenda.Dia = 22; poderia inicializar aqui dia mes e ano, ou da forma como fizemos na struct Data
	//desta forma você tem acesso aos atributos, as variáveis da struct diretamente
	//no código da função main.. Ou seja fora do código da struct
	std::cout << "Dia: " << Agenda.Dia << " Mes: " << Agenda.Mes << " Ano: " << Agenda.Ano << "\n";
	system("PAUSE");
	return 0;
}