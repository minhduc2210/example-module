#pragma once
#include <iostream>

class Point
{
private:
	int x, y;
public:
	Point();
	Point(int, int);
	~Point();

	friend std::istream& operator>>(std::istream&, Point&);
	friend std::ostream& operator<<(std::ostream&, Point const&);

	void set(int, int);
	void get(void);

	bool CheoChinh(void);
};