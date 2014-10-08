#ifndef __TURTLE_GRAPHICS_HPP__
#define __TURTLE_GRAPHICS_HPP__

#include <cmath>
#include <vector>

// Point:
// A simple class to store a position vector
//
class Point {
public:
	Point(x, y);
	float x;
	float y;
	Point operator+(const Point& right);
};

//Turtle
//A basic type of drawing that follows the perspective of a turtle on a 2d plane - all commands are relative to the direction of the turtle
class Turtle {
public:
	Turtle();
	Turtle::Turtle(Point p, float angle = 90);
	Turtle(float x, float y);
	void turnLeft();
	void turnRight();
	void goForward(float distance = 1.0);
	void turn(float angle);
	Point pop();
	void push(Point p);
private:
	float turnAngle;
	float direction;
	Point location;
	std::vector<Point> locStack;
};

