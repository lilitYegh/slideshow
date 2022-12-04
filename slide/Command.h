#pragma once
#include <map>
#include <string>
class CommandHandler
{
public:
	virtual void execute() = 0;
	virtual void print() = 0;
};
