#include <iostream>
#include "Lexer.h"

int main()
{
	std::ifstream in;
	in.open("commands.txt");
	if (in)
	{
		while (!in.eof())
		{
			getLexem(in);
		}
	}
	return 0;
}