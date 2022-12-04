#include "IElement.h"

class Line : public IElement
{
private:
	int x;
	int y;
	int length;
public:
	void print(std::ostream& output) override
	{
		output << "------LINE------\n";
		output << "( " << x << ", " << y << ")";
		output << "Length of line is " << length << "\n";
	}
};
class Circle : public IElement
{
private:
	int x;
	int y;
	int R;
public:
	void print(std::ostream& output) override
	{
		output << "------CIRCLE------\n";
		output << "( " << x << ", " << y << ")";
		output << "Radius of circle is " << R << "\n";
	}
};
class Square : public IElement
{
private:
	int x;
	int y;
	int a;
public:
	void print(std::ostream& output) override
	{
		output << "------SQUARE------\n";
		output << "( " << x << ", " << y << ")";
		output << "Edge of square is " << a << "\n";
	}
};
class Regtangle : public IElement
{
private:
	int x;
	int y;
	int a;
	int b;
public:
	void print(std::ostream& output) override
	{
		output << "------REGTANGLE------\n";
		output << "( " << x << ", " << y << ")";
		output << "Edges of square are " << a << " and " << b << "";
	}
};