#pragma once
#include "Point.h"
class Line
{
	Point* p1;
	Point* p2;

public:
	Line();
	Line(Point, Point);
	Line(const Line&);
	~Line();
	int get_length();
};

