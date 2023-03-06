#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::cout << "bool\t\t"
		<< +std::numeric_limits<bool>::min() << '\t' << '\t'
		<< +std::numeric_limits<bool>::max() << '\n';
	std::cout << "char\t\t"
		<< +std::numeric_limits<char>::min() << '\t' << '\t'
		<< +std::numeric_limits<char>::max() << '\n';
	std::cout << "unsigned char\t"
		<< +std::numeric_limits<unsigned char>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "wchar_t\t\t"
		<< +std::numeric_limits<wchar_t>::min() << '\t' << '\t'
		<< +std::numeric_limits<wchar_t>::max() << '\n';
	std::cout << "short\t\t"
		<< +std::numeric_limits<short>::min() << '\t' << '\t'
		<< +std::numeric_limits<short>::max() << '\n';
	std::cout << "unsigned short\t"
		<< +std::numeric_limits<unsigned short>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "signed short\t"
		<< +std::numeric_limits<signed short>::min() << '\t' << '\t'
		<< +std::numeric_limits<signed short>::max() << '\n';
	std::cout << "int\t\t"
		<< +std::numeric_limits<int>::min() << '\t' << '\t'
		<< +std::numeric_limits<int>::max() << '\n';
	std::cout << "unsigned int\t"
		<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "signed int\t"
		<< +std::numeric_limits<signed int>::min() << '\t' << '\t'
		<< +std::numeric_limits<signed int>::max() << '\n';
	std::cout << "long\t\t"
		<< +std::numeric_limits<long>::min() << '\t' << '\t'
		<< +std::numeric_limits<long>::max() << '\n';
	std::cout << "unsigned long\t"
		<< +std::numeric_limits<unsigned long>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned long>::max() << '\n';
	std::cout << "signed long\t"
		<< +std::numeric_limits<signed long>::min() << '\t' << '\t'
		<< +std::numeric_limits<signed long>::max() << '\n';
	std::cout << "float\t\t"
		<< +std::numeric_limits<float>::min() << '\t' << '\t'
		<< +std::numeric_limits<float>::max() << '\n';
	std::cout << "double\t\t"
		<< +std::numeric_limits<double>::min() << '\t' << '\t'
		<< +std::numeric_limits<double>::max() << '\n';
	std::cout << "long double\t"
		<< +std::numeric_limits<long double>::min() << '\t' << '\t'
		<< +std::numeric_limits<long double>::max() << '\n';
	std::cout << "long long\t"
		<< +std::numeric_limits<long long>::min() << '\t' << '\t'
		<< +std::numeric_limits<long long>::max() << '\n';

	system("Pause");
	return 0;
}