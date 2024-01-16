#pragma once
#include <vector>
#include <algorithm>

class Point {
public:
	float x, y;
};

class Rectangle
{
private:
	float x1, x2, y;
	Rectangle();
public:
	Rectangle(float x1, float x2, float y);
	Rectangle(const Rectangle* rect);
	~Rectangle();

	std::string display();

	//пересечение двух прямоугольников
	Rectangle operator*(const Rectangle& rect);
	//объединение двух прямоугольников
	std::vector<Point> operator+(const Rectangle& rect);
	//несимметрическая разность двух прямоугольников
	std::vector<Point>* operator-(const Rectangle& rect);
};
