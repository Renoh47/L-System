#include "turtlegraphics.hpp"

Point::Point(){
	x = 0.0;
	y = 0.0;
}

Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}

Point Point::operator+=(const Point& right){
	x += right.x;
	y += right.y;
	return *this;
}

Point Point::operator-=(const Point& right){
	x -= right.x;
	y -= right.y;
	return *this;
}

Turtle::Turtle(){
	this->location = Point(0.0,0.0);
	this->turnAngle = 90;
	this->direction = 0;
}

Turtle::Turtle(Point p, float angle){
	this->location = p;
	this->turnAngle = angle;
	this->direction = 0;
}

Turtle::Turtle(float x, float y, float angle){
	this->location = Point(x,y);
	this->turnAngle = angle;
	this->direction = 0;
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

void Turtle::goForward(float distance){
	location += Point((float)(distance*cos(direction*M_PI/180.0)), (float)(distance*sin(direction*M_PI/180.0)));
}

void Turtle::pop(Point* p, float* dir){
	if (locStack.empty() || dirStack.empty()){ //if either of the stacks are empty when pop is called, something is wrong
		return;
		//#ifdef DEBUG
		//std::cout << "locStack/dirStack is empty, dirStack size: " << dirStack.size() << ", locStack size: " << locStack.size() << "." << std::endl;
		//#endif
	}
	*p = locStack.back();
	*dir = dirStack.back();
	locStack.pop_back();
	dirStack.pop_back();
}

Point Turtle::getLoc(){
	return location;
}

float Turtle::getDir(){
	return direction;
}