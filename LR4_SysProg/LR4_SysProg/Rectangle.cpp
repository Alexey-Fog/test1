#include "Rectangle.h"
#include <string>



Rectangle::Rectangle(float x1, float x2, float y) 
	: x1(x1), x2(x2), y(y)
{
	if (x1 > x2)
	{
		this->x1 = x2;
		this->x2 = x1;
	}
}

Rectangle::Rectangle(const Rectangle * rect) 
	: x1(rect->x1), x2(rect->x2), y(rect->y)
{
}

Rectangle::~Rectangle()
{
}

std::string Rectangle::display()
{
	std::string str = "Прямоугольник: ({0},0), ({1},0), ({1},{2}), ({0},{2})", x1, x2, y;
	return str;
}

Rectangle Rectangle::operator*(const Rectangle & rect)
{
	Rectangle result;
	result.x1 = std::max(x1, rect.x1);
	result.x2 = std::min(x2, rect.x2);
	if (result.x1 > result.x2) return Rectangle(0, 0, 0);
	result.y = std::min(y, rect.y);
	return result;
}

std::vector<Point> Rectangle::operator+(const Rectangle & rect)
{
	std::vector<Point> result;
	return result;
}

std::vector<Point>* Rectangle::operator-(const Rectangle & rect)
{
	return nullptr;
}
