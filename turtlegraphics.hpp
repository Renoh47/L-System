#ifndef __TURTLE_GRAPHICS_HPP__
#define __TURTLE_GRAPHICS_HPP__

#include <cmath>
#include <vector>
#include <stddef.h>

// Point:
// A simple class to store a position vector
//
class Point {
public:
	Point(int x, int y);
	float x;
	float y;
	Point operator+(const Point& right);
};

//Turtle
//A basic type of drawing that follows the perspective of a turtle on a 2d plane - all commands are relative to the direction of the turtle
class Turtle {
public:
	Turtle();
	Turtle(Point p, float angle = 90);
	Turtle(float x, float y);
	void turnLeft();
	void turnRight();
	void goForward(float distance = 1.0);
	void drawForward(float distance = 1.0);
	void turn(float angle);
	void pop(Point* p, float* dir);
	void push(Point p, float dir);
private:

	float turnAngle;
	float direction;
	Point location;
	std::vector<Point> locStack;
	std::vector<float> dirStack;
};

#endif
