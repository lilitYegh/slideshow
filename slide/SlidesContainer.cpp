#include "SlidesContainer.h"
#include "Slide.h"
#include <vector>
class Slideshow : public SlidesContainer
{
private:
	std::vector <Slide> slideshow;
	int currentSlide = 0;
public:
	virtual void addSlide(int pos)
	{
		Slide* newSlide = new Slide();
		slideshow.insert(slideshow.begin() + pos, *newSlide);
	}
	void removeSlide(int pos) override
	{
		slideshow.erase(slideshow.begin() + pos);
	}
	 
	int currentSlideNum() override
	{
		return currentSlide;
	}
};