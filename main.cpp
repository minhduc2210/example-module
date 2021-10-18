#include <iostream>
#include "Color.h"
#include "Point.h"

int main(void)
{
	Color color;
	std::cin >> color;
	std::cout << color;
	std::cout << std::endl;

	Point point;
	std::cin >> point;
	std::cout << point << std::endl;
	std::cout << point.CheoChinh() << std::endl;
	return 0;
}