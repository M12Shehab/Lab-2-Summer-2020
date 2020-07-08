#pragma once

// Class defination
class Point {
	int x;// is the x point on 2D 
	int y;// is the y point on 2D 

public:
	Point();
	Point(int, int);// overload Vs. override
	~Point();
	void set_x(int);// Prototype
	void set_y(int);
	int get_x();
	int get_y();
	int get_distance(Point&);
};