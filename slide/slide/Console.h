#pragma once
#include "Lexer.h"
class ConsoleInterface
{
public:
	virtual void getInput() = 0;
	virtual void outputresponse() = 0;
	//virtual Command parser() = 0;
	virtual ~ConsoleInterface() {}

};

