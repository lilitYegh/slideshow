#include "Command.h"

class addSlide : public CommandHandler
{

};
class addElem : public CommandHandler
{

};

class removeSlide : public CommandHandler
{
private:
	std::map<std::string, int> args;
};

class removeElem : public CommandHandler
{
private:

};