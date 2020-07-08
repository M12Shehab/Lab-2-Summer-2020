#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;

Point::Point()
{
	x = y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
	cout << "+ Point at (" << x << " , " << y << ") coordinate is created.\n";
}

Point::~Point()
{
	cout << "+ Point at (" << x << " , " << y << ") coordinate is removed.\n";
}

void Point::set_x(int x)
{
	this->x = x;
}

void Point::set_y(int y)
{
	this->y = y;
}

int Point::get_x()
{
	return x;
}

int Point::get_y()
{
	return y;
}

//int Point::get_distance(Point p) //temp object in memory.
int Point::get_distance(Point &p)
{
	
	int x1 = x - p.get_x(); //calculating number to square in next step
	int y1 = y - p.get_y();
	int dist;

	dist = pow(x1, 2) + pow(y1, 2);       //calculating Euclidean distance
	dist = sqrt(dist);

	return dist;
}
