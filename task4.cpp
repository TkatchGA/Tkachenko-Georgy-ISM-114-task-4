#include "task4.h"
#include <iostream>
#include <math.h>

trig::trig(const double a) 
    :a(a) {}

double trig::get_a() const
{
	return this->a;
}

void trig::set_a(double a)
{
	this->a = a;
}


double trigonometry::get_num(const double a) const
{
	return get_a();
}

trigonometry::trigonometry(const double a)
{	set_a(a);
	set_sin();
	set_cos();
	set_tg();
	set_derivative_sin();
	set_derivative_cos();
	set_derivative_tg();
}

double trigonometry::get_a() const
{
	return this->a;
}

void trigonometry::set_a(const double a)
{
	this->a = a;
}

void trigonometry::set_sin()
{
	this->sin = sin(get_a());
}

void trigonometry::set_cos()
{
	this->cos = cos(get_a());
}

void trigonometry::set_tg()
{
	this->tg = tan(get_a());
}

void trigonometry::set_derivative_sin()
{
	this->derivative_sin = cos(get_a());
}

void trigonometry::set_derivative_cos()
{
	this->derivative_cos = -sin(get_a());
}

void trigonometry::set_derivative_tg()
{
	this->derivative_tg = 1 / pow(cos(get_a()), 2);
}

double trigonometry::get_sin() const
{
	return this->sin;
}

double trigonometry::get_cos() const
{
	return this->cos;
}

double trigonometry::get_tg() const
{
	return  this->tg;
}

double trigonometry::get_derivative_sin() const
{
	return this->derivative_sin;
}

double trigonometry::get_derivative_cos() const
{
	return this->derivative_cos;
}

double trigonometry::get_derivative_tg() const
{
	return  this->derivative_tg;
}


std::istream& operator>>(std::istream& number, trigonometry& input)
{
	double x;
	number >> x;
	input = trigonometry(x);
	return number;
}

std::ostream& operator<<(std::ostream& out, const trigonometry& show)
{
	out << "sin(x)= " << show.get_sin() << std::endl
		<< "sin(x)'= " << show.get_derivative_sin() << std::endl
		<< "cos(x)= " << show.get_cos() << std::endl
		<< "cos(x)'= " << show.get_derivative_cos() << std::endl
		<< "tg(x)= " << show.get_tg() << std::endl
		<< "tg(x)'= " << show.get_derivative_tg() << std::endl;
	return out;
}

/*
std::string student::ToString() const;
{
  std::stringstream buffer;
  buffer << "{" << this->sin << ", ";
  buffer << this->cos << ", ";
  buffer << this->tg << ", ";
  buffer << this->derivative_sin << ", ";
  buffer << this->derivative_cos << ", ";
  buffer << this->derivative_tg << "}";

  return buffer.str();
}
*/