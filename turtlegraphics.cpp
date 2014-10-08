#include "turtlegraphics.hpp"

Point::Point(x, y){
	this->x = x;
	this->y = y;
}

Point Point::operator+(const Point& right){
	Point result;
	result.x = x + right.x;
	result.y = y + right.y;
	return result;
}

Turtle::Turtle(){
	this->location = Point(0,0);
	this->turnAngle = 90;
}

Turtle::Turtle(Point p, float angle = 90){
	this->location = p;
	this->turnAngle = angle;
}

Turtle::Turtle(float x, float y, float angle = 90){
	this->location = Point(x,y);
	this->turnAngle = angle;
}

void Turtle::turn(float angle){
	direction += angle;
}

void Turtle::turnLeft(){
	turn(turnAngle);
}

void Turtle::turnRight(){
	turn(-turnAngle);
}

void Turtle::goForward(float distance = 1.0){
	location += Point(distance*cos(direction*M_PI/180.0), distance*sin(direction*M_PI/180.0));
}

Point Turtle::pop(){
	if (locStack.empty())
		return NULL;
	Point result = locStack.back();
	locStack.pop_back();
	return result;
}

