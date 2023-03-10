// início do código
#include<iostream>

template <typename T>
T soma(T x, T y)
{
	std::cout << "Tipo de x:" << typeid(x).name() << " ";
	std::cout << "Tipo de y:" << typeid(y).name() << " ";
	return x + y;
}


int main()
{

	std::cout << "Soma: 2 + 2 = " << soma(2, 2) << "\n";
	std::cout << "Soma 2.99 + 3.67 = " << soma(2.99, 3.67) << "\n";
	std::cout << "Soma 5.9999 + 6.9999 = " << soma(5.9999, 6.9999) << "\n";
	std::cout << "Soma 5.9999 + 6 = " << soma(5.9999, 6.99999999) << "\n";

	system("pause");
	return 0;
} //fim do código