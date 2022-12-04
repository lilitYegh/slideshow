#include "Console.h"
class Console : public ConsoleInterface
{
public:
	void getInput() override
	{
	
	}
	void outputresponse() override
	{
	
	}
	CommandHandler* parser(std::ifstream& input)
	{
		input.open("commands.txt");
		if (input)
		{
			while (!input.eof())
			{
				getLexem(input);
			}
		}
	}
};






