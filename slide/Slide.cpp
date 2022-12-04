#include "Slide.h"


void Slide::removeElement(int number) 
{
	slideContainer.erase(slideContainer.begin() + number);
}
void Slide::showAllElements(std::ostream& output) 
{
	for (auto el : slideContainer)
	{
		el.print(output);
	}
}
void Slide::addElement(int pos, IElement* type) 
{
		
}

