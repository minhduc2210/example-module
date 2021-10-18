#pragma once

#include <iostream>
#include <string>

class Color
{
private:
	std::string TenMau, MaMau;
public:
	Color() = default;
	~Color() = default;
	Color(std::string, std::string);

	friend std::istream& operator>>(std::istream&, Color&);
	friend std::ostream& operator<<(std::ostream&, Color const&);

	void set(std::string, std::string);
	void get(void);
};
