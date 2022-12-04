#pragma once
#include "Lexer.h"
#include "Command.h"
#include <iostream>
class ConsoleInterface
{
public:
	virtual void getInput() = 0;
	virtual void outputresponse() = 0;
	virtual CommandHandler* parser() = 0;
};

