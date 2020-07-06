#pragma once

class Point {
	int x;
	int y;

public:
	Point();
	Point(int, int);
	~Point();
	void set_x(int);
	void set_y(int);
	int get_x();
	int get_y();
	int get_distance(Point);
};