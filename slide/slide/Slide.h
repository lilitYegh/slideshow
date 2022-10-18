#pragma once
class Slide
{
public:
	//virtual void addElement(int pos, ElementType type) = 0;
	virtual void removeElement(int number) = 0;
	virtual void showAllElements() = 0;
};