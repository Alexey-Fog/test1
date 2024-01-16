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

	//����������� ���� ���������������
	Rectangle operator*(const Rectangle& rect);
	//����������� ���� ���������������
	std::vector<Point> operator+(const Rectangle& rect);
	//���������������� �������� ���� ���������������
	std::vector<Point>* operator-(const Rectangle& rect);
};
