#include "Color.h"

Color::Color(std::string tenMau, std::string maMau)
{
	this->TenMau = tenMau;
	this->MaMau = maMau;
}

std::istream& operator>>(std::istream& input, Color &color)
{
	std::cout << "Enter ten mau: ";
	input >> color.TenMau;
	std::cout << "Enter ma mau: ";
	input >> color.MaMau;
	return input;
}

std::ostream& operator<<(std::ostream& output, Color const &color)
{
	output << color.TenMau << " " << color.MaMau;
	return output;
}

void Color::set(std::string tenMau, std::string maMau)
{
	this->TenMau = tenMau;
	this->MaMau = maMau;
}

void Color::get(void)
{
	std::cout << "Ten mau: " << this->TenMau << std::endl;
	std::cout << "Ma Mau: " << this->MaMau << std::endl;
}

