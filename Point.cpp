#include "Point.h"

Point::Point() = default;
Point::~Point() = default;
Point::Point(int x, int y) : x( x ), y( y ) {}

std::istream& operator>>(std::istream& input, Point& point)
{
	std::cout << "Enter x: ";
	input >> point.x;
	std::cout << "Enter y: ";
	input >> point.y;
	return input;
}

std::ostream& operator<<(std::ostream& output, Point const& point)
{
	output 
		<< "X: " << point.x << std::endl
		<< "Y: " << point.y << std::endl;
	return output;
}

void Point::set(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::get(void)
{
	std::cout << "X: " << this->x << std::endl;
	std::cout << "Y: " << this->y << std::endl;
}

bool Point::CheoChinh(void)
{
	if (x == y)
		return true;
	else
		return false;
}