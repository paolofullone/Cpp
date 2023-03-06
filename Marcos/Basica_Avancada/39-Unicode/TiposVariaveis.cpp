#include <iostream>
#include <fcntl.h>
#include <io.h>

int main() {
	_setmode(_fileno(stdout), _O_U16TEXT);
	std::wcout << L"\u00AE\n" << L"\u263A\n";
	system("PAUSE");
	return 0;
}