#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()
{
	p1 = nullptr;
	p2 = nullptr;
}

Line::Line(Point p1, Point p2)
{
	this->p1 = new Point(p1);
	this->p2 = new Point(p2);
	cout << "+ Line is added.\n";
}

Line::Line(const Line& l)
{
	this->p1 = l.p1;
	this->p2 = l.p2;
}

Line::~Line()
{
	cout << "- Line is removed.\n";
	delete p1;
	delete p2;
}

int Line::get_length()
{
	return this->p1->get_distance(*p2);
}
