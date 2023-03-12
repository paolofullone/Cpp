#include <iostream>
#include <string>
#include <windows.h>  //é o arquivo de include mais famoso da chamada API do windows

using namespace std;

int main()
{
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	//FICARÁ EM LOOP MONITORANDO A TECLA QUE ESTÁ SENDO PRESSIONADA PELO USUÁRIO. O LOOP SERÁ ENCERRADO QUANDO O USUÁRIO PRESSIONAR ENTER. ISSO É VERIFICADO PELA CONDIÇÃO !GetAsyncKeyState(VK_RETURN) & 1

	while (!GetAsyncKeyState(VK_RETURN) & 1)
	{
		//PARA i DE 48 ATÉ 90 FAÇA
		for (int i = 0x30; i < 0x5A; i++)
		{
			if (GetAsyncKeyState(i) & 1)
			{
				//SE I ESTIVER ENTRE 65 E 90 SIGNIFICA QUE I É UMA LETRA MAIÚSCULA DE ACORDO COM A TABELA ASCII
			  // ENTÃO SE AS LETRAS FOREM MAÍSCULAS ENTRE 65(0X41) E 90(0X5A) E(and) SE AS TECLAS CAPSLOCK OU(OR) SHIFT ESTIVEREM PRESSIONADAS COLOQUE NA VARIÁVEL senha digitada letras minúsculas.Senão as letras já são minúsculas.
				if (i >= 0x41 && i <= 0x5A && ((GetKeyState(VK_CAPITAL) & 1) == 0 || GetAsyncKeyState(VK_SHIFT) & 1))
					SenhaDigitada += ((char)i + 32);
				else
					SenhaDigitada += (char)i;

				cout << "*";
				Sleep(50);
			}

			//CASO A TECLA PRESSSIONADA SEJA BACKSPACE SERÁ EXCLUÍDO DA STRING SenhaDigitada um caractere
			else if (GetAsyncKeyState(VK_BACK) & 1)
			{
				SenhaDigitada.erase(SenhaDigitada.size() - 1);
				system("cls");
				for (int i = 0; i < SenhaDigitada.size(); i++)
				{
					cout << '*';
				}
				Sleep(50);
			}
		}
	}

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//através de outra variável booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	}
	/*Se a condição for falsa então as isntruções do else serão executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, força o fechamento da aplicação
	}
	Sleep(10000);
	return 0;
}