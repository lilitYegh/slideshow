#pragma once
class SlidesContainer
{
public:
	virtual void addSlide(int pos) = 0;
	virtual void removeSlide(int pos) = 0;
	virtual void moveTwoSlides(int p1, int p2) = 0;
	virtual int currentSlideNum() = 0;
};